;;------------------------------
;;ロードパスの設定（初めに書いておく）
;;------------------------------

;;function add load-path

(defun add-to-load-path (&rest paths)
  (let (path)
    (dolist (path paths paths)
      (let ((default-directory
              (expand-file-name (concat user-emacs-directory path))))
        (add-to-list 'load-path default-directory)
        (if (fboundp 'normal-top-level-add-subdirs-to-load-path)
            (normal-top-level-add-subdirs-to-load-path))))))

;;add directories and their subdirectories to load-path
(add-to-load-path "elisp")

;;------------------------------
;; PATH
;;------------------------------

;; cf. https://qiita.com/catatsuy/items/3dda714f4c60c435bb25

;;PATHを引き継ぐ
(defun set-exec-path-from-shell-PATH ()
  (interactive)
  (let ((path-from-shell (replace-regexp-in-string "[ \t\n]*$" "" (shell-command-to-string "$SHELL --login -i -c 'echo $PATH'"))))
    (setenv "PATH" path-from-shell)
    (setq exec-path (split-string path-from-shell path-separator))))

(set-exec-path-from-shell-PATH)

;(let ((envs '("PATH" "VIRTUAL_ENV" "GOROOT" "GOPATH")))
;  (exec-path-from-shell-copy-envs envs))

;;------------------------------
;; package管理
;;------------------------------

;;ロードパスの設定のすぐ後に書く
;;package.el
(require 'package)
;;リポジトリを追加
(add-to-list 'package-archives '("ELPA" . "http://tromey.com/elpa"))
(add-to-list 'package-archives '("melpa" . "http://melpa.milkbox.net/packages/"))
(add-to-list 'package-archives '("marmalade" . "http://marmalade-repo.org/packages/"))
;;インストールしたパッケージにロードパスを通して読み込む
(package-initialize)


;;auto-install

(defvar auto-install-directory "")
(when (require 'auto-install nil t)
  (setq auto-install-directory "~/.emacs.d/elisp/")
  (auto-install-update-emacswiki-package-name t)
  ;;(setq url-proxy-services '(("http" . "localhost:8339")))
  (auto-install-compatibility-setup))

;;------------------------------
;; key binds
;;------------------------------
;;書式: (global-set-key KEY COMMAND)
;; s:(super key (command key)

;; unset some default key binds
(global-set-key (kbd "s-x") nil)
(global-set-key (kbd "s-s") nil)
(global-set-key (kbd "s-c") nil)
(global-set-key (kbd "s-e") nil)
(global-set-key (kbd "s-a") nil)
(global-set-key (kbd "s-d") nil)
(global-set-key (kbd "s-f") nil)
(global-set-key (kbd "s-w") nil)

;; backspace
(global-set-key (kbd "C-h") 'delete-backward-char)
;; switch window (if there is only one window, open a new one)
(defun other-window-or-split ()
  (interactive)
  (when (one-window-p)
    (split-window-horizontally))
  (other-window 1))
(global-set-key (kbd "C-t") 'other-window-or-split)

;; delete
(global-set-key (kbd "s-d") 'delete-char)
;; go to end of line
(global-set-key (kbd "s-e") 'move-end-of-line)

;; go to head of line
(global-set-key (kbd "s-a") 'move-beginning-of-line)
;; move foward
(global-set-key (kbd "s-f") 'forward-char)
;; kill selected region
(global-set-key (kbd "s-w") 'kill-region)

;; save buffer
(global-set-key (kbd "s-x s-s") 'save-buffer)
;; save buffer in a different name
(global-set-key (kbd "s-x s-w") 'write-file)
;; kill buffer
(global-set-key (kbd "s-x k") 'kill-buffer)
;; close emacs
(global-set-key (kbd "s-x s-c") 'save-buffers-kill-terminal)
;; kill cahrs from current positio to haed
(defun backward-kill-line (arg)
  (interactive "p")
  (kill-line 0))
(global-set-key (kbd "C-u") 'backward-kill-line)


;;------------------------------
;;補完・検索・文法チェック
;;------------------------------

;; company
(require 'company)
(global-company-mode)
(setq company-idle-delay 0)
(setq company-minimum-prefix-length 2)
(setq company-selection-wrap-around t)  ;;候補の一番下で下に行こうとすると一番上に戻る
(define-key company-active-map (kbd "C-n") 'company-select-next)
(define-key company-active-map (kbd "C-p") 'company-select-previous)
(define-key company-active-map (kbd "C-h") 'delete-backward-char)

;; neotree - show directory tree
(require 'neotree)
(global-set-key "\C-o" 'neotree-toggle)
(setq neo-theme 'ascii)  ;; theme
(setq neo-smart-open t)  ;; show files in current directory

;; ivy
(require 'ivy)
(ivy-mode 1)  ;; default input completion: ivy
(setq ivy-use-virtual-buffers t)
(setq enable-recursive-minibuffers t)
(setq ivy-height 30)  ;; minibuffer size
(setq ivy-extra-directories nil)
(setq ivy-re-builders-alist
      '((t . ivy--regex-plus)))

;; counsel - command completion
(global-set-key (kbd "M-x") 'counsel-M-x)
(global-set-key (kbd "s-x s-f") 'counsel-find-file)  ;; find-file
(defvar counsel-find-file-ignore-regexp (regexp-opt '("./" "../")))

;; swiper - isearch extention
(global-set-key (kbd "s-s") 'swiper)
(defvar swiper-include-line-number-in-search t)  ;; line-numberでsearch

;; recentf
(require 'recentf)
(global-set-key (kbd "s-r") 'recentf-open-files)
(setq recentf-save-file "~/.emacs.d/.recentf")
(setq recentf-max-saved-items 100)  ;; number of saved files
(setq recentf-exclude '(".recentf")) ;; exclide .recentf
(setq recentf-auto-cleanup 'never)   ;; not delete history of files not exist
(defvar recentf-auto-save-timer (run-with-idle-timer 30 t 'recentf-save-list))  ;; auto-save
(require 'recentf-ext)  ;; find file 以外も含める拡張

;; dumb-jump
(setq dumb-jump-mode t)
(defvar dumb-jump-selector 'ivy)
(defvar dumb-jump-use-visible-window nil)
(defvar dumb-jump-default-project "")
(global-set-key (kbd "s-g") 'dumb-jump-go)
(global-set-key (kbd "s-x s-g") 'dumb-jump-back)


;; flycheck
(add-hook 'after-init-hook #'global-flycheck-mode)


;; undo-tree
(require 'undo-tree)
(global-undo-tree-mode t)
(global-set-key (kbd "M-/") 'undo-tree-redo)
;; C-x u : display history tree
;; d     : display difference

;; undohist
(require 'undohist)
(undohist-initialize)

;;------------------------------
;;表示
;;------------------------------

;; hiwin - visualize non-active window
(require 'hiwin)
(hiwin-activate)
(set-face-background 'hiwin-face "gray25")

;; show current directory on mode line
(let ((ls (member 'mode-line-buffer-identification
                  mode-line-format)))
  (setcdr ls
          (cons '(:eval (concat " ("
                                (abbreviate-file-name default-directory)
                                ")"))
                (cdr ls))))

;;タイトルバー
;;show absolite path of file of buffer name
(when (window-system)
  (setq frame-title-format '("" global-mode-string
                             (:eval (if (buffer-file-name) " %f" " %b")))))

;; menu bar (on: t, off:-1)
(menu-bar-mode -1)

;; tool bar (on: 1, off: 0)
(tool-bar-mode 0)

;; scroll bar ("right" or "left" or "nil")
(set-scroll-bar-mode 'nil)

;; don't show startup message
(setq inhibit-startup-message 1)

;; don't use tab character as indent
(setq-default indent-tabs-mode nil)

;; indent
(setq-default tab-width 2)

;; --- colors ---

;; background
(set-face-background 'default "#131926")
;; texts
(set-face-foreground 'default "lightgray")
;; string ""
(set-face-foreground 'font-lock-string-face "darkseagreen2")
;; comments
(set-face-foreground 'font-lock-comment-face "maroon1")
;; keywords
(set-face-foreground 'font-lock-keyword-face "Darkturquoise")
;; variables
(set-face-foreground 'font-lock-variable-name-face "OliveDrab2")
;; constans, symbols
(set-face-foreground 'font-lock-constant-face "deepskyblue")

;; opacity
(if window-system
  (progn
    (set-frame-parameter nil 'alpha 90)))

;; cursor
;; color
(set-cursor-color "tomato")
;; don't blink
(blink-cursor-mode 0)

;; hilight current line
(global-hl-line-mode t)
(set-face-background 'hl-line "#424242")

;; hilight brackets
(show-paren-mode t)

;; show line number
(global-linum-mode t)

;; start emacs with maximum window size
(set-frame-parameter nil 'fullscreen 'maximized)


;;------------------------------
;;各言語モード
;;------------------------------

;; --- commmon lisp ---

;; slime
(defvar inferior-lisp-program "sbcl")
(add-to-list 'load-path (expand-file-name "~/.emacs.d/slime"))
(require 'slime)
(slime-setup '(slime-repl slime-fancy slime-banner slime-indentation))
(setq slime-net-coding-system 'utf-8-unix)

;; popwin
(require 'popwin)
(defvar display-buffer-function 'popwin:display-buffer)
;; Apropos
(push '("*slime-apropos*") popwin:special-display-config)
;; Macroexpand
(push '("*slime-macroexpansion*") popwin:special-display-config)
;; Help
(push '("*slime-description*") popwin:special-display-config)
;; Compilation
(push '("*slime-compilation*" :noselect t) popwin:special-display-config)
;; Cross-reference
(push '("*slime-xref*") popwin:special-display-config)
;; Debugger
(push '(sldb-mode :stick t) popwin:special-display-config)
;; REPL
(push '(slime-repl-mode) popwin:special-display-config)
;; Connections
(push '(slime-connection-list-mode) popwin:special-display-config)


;; --- Tex ---

;; yatex
;; run yatex mode when open .tex file
(setq auto-mode-alist
(cons (cons "\\.tex$" 'yatex-mode) auto-mode-alist))
(autoload 'yatex-mode "yatex" "Yet Another LaTeX mode" t)
;; yatex load path
(setq load-path (cons (expand-file-name
"/Users/yuta/.emacs.d/elisp/yatex1.80")
load-path))
;; use utf-8 on yatex mode
;;(defvar YaTeX-kanji-code "");; 束縛？
(defvar YaTeX-kanji-code 4)


;; --- WEB ---

;; impatient-mode
;; HTML live-preview
(require 'package)
(add-to-list 'package-archives '("melpa" . "http://melpa.milkbox.net/packages/") t)
(package-initialize)

;; web-mode
(require 'web-mode)
(add-to-list 'auto-mode-alist '("\\.html?\\'" . web-mode))
(add-to-list 'auto-mode-alist '("\\.css?\\'" . web-mode))
(add-to-list 'auto-mode-alist '("\\.js?\\'" . web-mode))
(add-to-list 'auto-mode-alist '("\\.erb?\\'" . web-mode))
;; web-mode, indent
(setq web-mode-markup-indent-offset 2)
(setq web-mode-css-indent-offset 2)
(setq web-mode-code-indent-offset 2)
;; web-mode, colors
(set-face-attribute 'web-mode-html-tag-face nil :foreground "aquamarine1")
(set-face-attribute 'web-mode-keyword-face nil :foreground "darkturquoise")
(set-face-attribute 'web-mode-variable-name-face nil :foreground "OliveDrab2")
(set-face-attribute 'web-mode-symbol-face nil :foreground "deepskyblue1")
(set-face-attribute 'web-mode-keyword-face nil :foreground "darkturquoise")

;; scss-mode
(autoload 'scss-mode "scss-mode")
(add-to-list 'auto-mode-alist '("\\.scss$" . scss-mode))
(defvar css-indent-offset 2)
(defvar scss-compile-at-save nil)  ;; don't transform into css when buffer is saved

;; yaml-mode
(when (require 'yaml-mode nil t)
  (add-to-list 'auto-mode-alist '("\\.yml$" . yaml-mode)))

;; rainbow-mode
(require 'rainbow-mode)
(add-hook 'web-mode-hook 'rainbow-mode)

;; --- Python ---

;; yapf





;;------------------------------
;;その他
;;------------------------------

;; revert changed file automatically
(global-auto-revert-mode 1)

;; multi-term
(defvar multi-term-program "")
(when (require 'multi-term nil t)
  (setq multi-term-program "/bin/bash"))

;; scroll
(setq mouse-wheel-scroll-amount '(1 ((shift) . 5)))

;; don't make beep and flash
(setq ring-bell-function 'ignore)

;; don't create backup file  *.~
(setq make-backup-files 'nil)
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(package-selected-packages
   (quote
    (undohist undo-tree dumb-jump flycheck markdown-preview-mode rainbow-mode kotlin-mode popwin slime exec-path-from-shell fish-mode yaml-mode web-mode scss-mode ruby-electric ruby-block recentf-ext pos-tip pkg-info neotree multi-term impatient-mode hiwin dash counsel company avy-migemo))))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )
