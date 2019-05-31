;;------------------------------
;;ロードパスの設定（初めに書いておく）
;;------------------------------

(defun add-to-load-path (&rest paths)
  "Add directories and their subdirectories to load PATHS."
  (let (path)
    (dolist (path paths paths)
      (let ((default-directory
              (expand-file-name (concat user-emacs-directory path))))
        (add-to-list 'load-path default-directory)
        (if (fboundp 'normal-top-level-add-subdirs-to-load-path)
            (normal-top-level-add-subdirs-to-load-path))))))


(add-to-load-path "elisp" "elpa" "public_repos")

;;------------------------------
;; PATH
;;------------------------------

(defun set-exec-path-from-shell-PATH ()
  "Set up Emacs' `exec-path' and PATH environment variable to match that used by the user's shell.

This is particularly useful under Mac OSX, where GUI apps are not started from a shell."
  (interactive)
  (let ((path-from-shell (replace-regexp-in-string "[ \t\n]*$" "" (shell-command-to-string "$SHELL --login -i -c 'echo $PATH'"))))
    (setenv "PATH" path-from-shell)
    (setq exec-path (split-string path-from-shell path-separator))))

(set-exec-path-from-shell-PATH)

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
;; format: (global-set-key KEY COMMAND)
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
(global-set-key (kbd "s-o") nil)
(global-set-key (kbd "s-t") nil)

;; backspace
(global-set-key (kbd "C-h") 'delete-backward-char)

(defun other-window-or-split ()
  "Switch window (if there is only one window, open a new on)."
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

;; save buffer
(global-set-key (kbd "s-x s-s") 'save-buffer)
;; save buffer in a different name
(global-set-key (kbd "s-x s-w") 'write-file)
;; kill buffer
(global-set-key (kbd "s-x k") 'kill-buffer)
;; close emacs
(global-set-key (kbd "s-x s-c") 'save-buffers-kill-terminal)

(defun backward-kill-line ()
  "Kill cahrs from current position to haed."
  (interactive)
  (kill-line 0))
(global-set-key (kbd "C-u") 'backward-kill-line)

(defun kill-word-or-region ()
  "Kill a word backward, or kill region if the region is selected."
  (interactive)
  (if (use-region-p)
      (kill-region (region-beginning) (region-end))
    (backward-kill-word 1)))
(global-set-key (kbd "s-w") 'kill-word-or-region)

;; copy
(global-set-key (kbd "C-w") 'kill-ring-save)

;; go to beginning of buffer
(global-set-key (kbd "C-,") 'beginning-of-buffer)

;; go to end of buffer
(global-set-key (kbd "C-.") 'end-of-buffer)

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
(global-set-key (kbd "s-t") 'neotree-toggle)
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
(global-set-key (kbd "C-s") 'swiper)
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
(require 'dumb-jump)
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

;; yasnippet
(require 'yasnippet)
(setq yas-snippet-dirs
    '("~/.emacs.d/yasnippets" ;; お好みで!!
      "~/.emacs.d/mysnippets"))
;; insert existing snippets
(define-key yas-minor-mode-map (kbd "C-x i i") 'yas-insert-snippet)
;; open buffer for creating nrew snippet
(define-key yas-minor-mode-map (kbd "C-x i n") 'yas-new-snippet)
;; edit existing snippet
(define-key yas-minor-mode-map (kbd "C-x i v") 'yas-visit-snippet-file)
(yas-global-mode 1)

;;------------------------------
;; display
;;------------------------------

;; hiwin - visualize non-active window
(require 'hiwin)
(hiwin-activate)
(set-face-background 'hiwin-face "gray30")

;; show current directory on mode line
;; (let ((ls (member 'mode-line-buffer-identification
;;                   mode-line-format)))
;;   (setcdr ls
;;           (cons '(:eval (concat " ("
;;                                 (abbreviate-file-name default-directory)
;;                                 ")"))
;;                 (cdr ls))))

;; title bar
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

;; faces
(set-face-background 'default "#131926")
(set-face-foreground 'default "lightgray")
(set-face-foreground 'font-lock-string-face "lightskyblue")
(set-face-foreground 'font-lock-comment-face "deepskyblue1")
(set-face-foreground 'font-lock-keyword-face "cyan2")
(set-face-foreground 'font-lock-variable-name-face "lightgray")
(set-face-foreground 'font-lock-constant-face "cyan2")
(set-face-foreground 'font-lock-builtin-face "cyan2")
(set-face-foreground 'font-lock-function-name-face "green")
(set-face-foreground 'font-lock-doc-face "deepskyblue1")
(set-face-foreground 'font-lock-type-face "greenyellow")

;; opacity
(if window-system
  (progn
    (set-frame-parameter nil 'alpha 90)))

;; cursor
;; color
(set-cursor-color "white")
;; don't blink
(blink-cursor-mode 0)

;; hilight current line
(global-hl-line-mode t)
(set-face-background 'hl-line "#424242")

;; hilight brackets
(show-paren-mode t)
;; automatically insert the right matching bracket
(electric-pair-mode 1)

;; show line number
(global-linum-mode t)

;; start emacs with maximum window size
(set-frame-parameter nil 'fullscreen 'maximized)

;; nyan-mode
(require 'nyan-mode)
(nyan-mode)
(nyan-start-animation)

;; modeline
(set-face-background 'mode-line "gray20")
(set-face-foreground 'mode-line "lightgray")
(line-number-mode -1)
(add-hook 'after-save-hook
          ;; flash after saving buffer
          (lambda ()
            (let ((orig-fg (face-background 'mode-line)))
              (set-face-background 'mode-line "darkgreen")
              (run-with-idle-timer 0.1 nil
                                   (lambda (fg) (set-face-background 'mode-line fg))
                                   orig-fg))))
;; doom-modeline
(require 'doom-modeline)
(doom-modeline-mode 1)
(setq doom-modeline-icon t)
(setq doom-modeline-major-mode-icon nil)
(setq doom-modeline-major-mode-color-icon nil)
(setq doom-modeline-buffer-file-name-style 'truncate-with-project)

;;------------------------------
;; major modes
;;------------------------------

;; --- commmon lisp ---

;; slime
(defvar inferior-lisp-program "clisp")
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
(require 'yatex)
(setq auto-mode-alist
      (append '(("\\.tex$" . yatex-mode)
                ("\\.ltx$" . yatex-mode)
                ("\\.cls$" . yatex-mode)
                ("\\.sty$" . yatex-mode)
                ("\\.clo$" . yatex-mode)
                ("\\.bbl$" . yatex-mode)) auto-mode-alist))
(with-eval-after-load 'yatex
  (setq YaTeX-inhibit-prefix-letter t)
  (setq YaTeX-kanji-code nil)
  (setq YaTeX-use-LaTeX2e t)
  (setq YaTeX-use-AMS-LaTeX t)
  (defvar YaTeX-dvi2-command-ext-alist "")
  (setq YaTeX-dvi2-command-ext-alist
        '(("Preview\\|TeXShop\\|TeXworks\\|Skim\\|mupdf\\|xpdf\\|Firefox\\|Adobe" . ".dvi")))
;  (setq tex-command "/usr/texbin/ptex2pdf -l -ot '-synctex=1'")
  (setq tex-command "platex")
  (setq bibtex-command (cond ((string-match "uplatex\\|-u" tex-command) "/usr/texbin/upbibtex")
                             ((string-match "platex" tex-command) "/usr/texbin/pbibtex")
                             ((string-match "lualatex\\|luajitlatex\\|xelatex" tex-command) "/usr/texbin/bibtexu")
                             ((string-match "pdflatex\\|latex" tex-command) "/usr/texbin/bibtex")
                             (t "/usr/texbin/pbibtex")))
  (setq makeindex-command (cond ((string-match "uplatex\\|-u" tex-command) "/usr/texbin/mendex")
                                ((string-match "platex" tex-command) "/usr/texbin/mendex")
                                ((string-match "lualatex\\|luajitlatex\\|xelatex" tex-command) "/usr/texbin/texindy")
                                ((string-match "pdflatex\\|latex" tex-command) "/usr/texbin/makeindex")
                                (t "/usr/texbin/mendex")))
  (setq dvi2-command "/usr/bin/open -a TexShop")
;  (setq dvi2-command "/usr/bin/open -a Skim")
  (setq dviprint-command-format "/usr/bin/open -a \"Adobe Reader\" `echo %s | sed -e \"s/\\.[^.]*$/\\.pdf/\"`")
  (auto-fill-mode -1)
  (reftex-mode 1))

(defun skim-forward-search ()
  (interactive)
  (progn
    (process-kill-without-query
     (start-process
      "displayline"
      nil
      "/Applications/Skim.app/Contents/SharedSupport/displayline"
      (number-to-string (save-restriction
                          (widen)
                          (count-lines (point-min) (point))))
      (expand-file-name
       (concat (file-name-sans-extension (or YaTeX-parent-file
                                             (save-excursion
                                               (YaTeX-visit-main t)
                                               buffer-file-name)))
               ".pdf"))
      buffer-file-name))))


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
;; web-mode tag highlighting
(setq web-mode-enable-current-element-highlight t)
(set-face-background 'web-mode-current-element-highlight-face "aquamarine1")
(set-face-foreground 'web-mode-current-element-highlight-face "black")
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

;; xml
(require 'nxml-mode)
(add-to-list 'auto-mode-alist '("\\.xml?\\'" . nxml-mode))
(add-to-list 'auto-mode-alist '("\\.plist?\\'" . nxml-mode))


;; --- Python ---

;; ;; python-mode
;; (require 'python-mode)
;; (add-to-list 'auto-mode-alist '("\\\.py\\\'" . python-mode))
;; (add-to-list 'interpreter-mode-alist '("python" . python-mode))

;; py-yapf - auto format
(require 'py-yapf)
(add-hook 'python-mode-hook 'py-yapf-enable-on-save)


;; --- org-mode ---
(defvar org-startup-truncated)
(setq org-startup-truncated t)

;; --- dot ---
(require 'graphviz-dot-mode)

;; -- OCaml --

(add-to-list 'auto-mode-alist '("\\.ml[iylp]?" . tuareg-mode))
(autoload 'tuareg-mode "tuareg" "Major mode for editing OCaml code" t)
(autoload 'tuareg-run-ocaml "tuareg" "Run an inferior OCaml process." t)
(autoload 'ocamldebug "ocamldebug" "Run the OCaml debugger" t)

;; -- NASM --
(require 'nasm-mode)
(add-to-list 'auto-mode-alist '("\\.nas?\\'" . nasm-mode))

;; -- R --
(setq auto-mode-alist
      (append '(("\\.r$" . R-mode)
 		("\\.R$" . R-mode)
 		) auto-mode-alist))
(autoload 'R-mode "ess-site" "Emacs Speaks Statistics mode" t)
(add-hook 'ess-mode-hook
 	  '(lambda ()
 	     (define-key ess-mode-map (kbd C-h) 'ess-help)
 	     (define-key ess-mode-map (kbd C-e) 'ess-eval-buffer)
 	     ))

;; C/C++, Java
;; cc-mode
(defvar c-basic-offset 2)


;; ------------------------------
;; original major modes
;; ------------------------------

;; for 「プログラミング言語の基礎概念」
;; ASCII expression

(require 'generic-x)
;; define major mode
(define-generic-mode 'ascii-expression-mode
  ;; comments
  '("//")
  ;; keywords
  '("plus" "times" "is" "by" "evalto" "--->" "-*->" "-d->" "|-" "->" "==>" "=>" ">>")
  ;; faces
  nil
  ;; files for which to activate this mode
  '("\\.as$")
  ;; other function to call
  '(define-as-keymap)
  ;; description for this mode
  "Major mode for ASCII expression, which is used in COPL."
  )

(global-set-key (kbd "s-z") nil)

(defun define-as-keymap ()
  "This function define local keymap for ascii-expression-mode."  ;; doc string
  ;; insert "S()"
  (local-set-key (kbd "s-s") '(lambda ()
                                (interactive)
                                (insert "S()")
                                (backward-char)))
  ;; insert "Z"
  (local-set-key (kbd "s-z") '(lambda ()
                                (interactive)
                                (insert "Z"))))


;;------------------------------
;; shell
;;------------------------------

;; shell-pop
(require 'shell-pop)
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(package-selected-packages
   (quote
    (yatex yasnippet yaml-mode web-mode undohist undo-tree tuareg term+ slime shell-pop scss-mode ruby-electric ruby-block recentf-ext rainbow-mode py-yapf pos-tip popwin nyan-mode neotree nasm-mode multi-term markdown-preview-mode latex-math-preview kotlin-mode julia-mode impatient-mode hiwin graphviz-dot-mode flycheck fish-mode exec-path-from-shell ess ein dumb-jump doom-themes doom-modeline counsel company avy-migemo)))
 '(shell-pop-full-span t)
 '(shell-pop-shell-type
   (quote
    ("eshell" "*eshell*"
     (lambda nil
       (eshell shell-pop-term-shell)))))
 '(shell-pop-term-shell "/bin/bash")
 '(shell-pop-universal-key "C-o")
 '(shell-pop-window-position "bottom")
 '(shell-pop-window-size 30))


;; eshell
;; command history
(defvar eshell-hist-ignoredups t)
;; prompt
(defvar eshell-prompt-function
  (lambda nil
    (concat
     (propertize (eshell/pwd) 'face `(:foreground "green"))
     (propertize " " 'face nil)
     (propertize "$" 'face `(:foreground "green"))
     (propertize " " 'face nil))))

(defvar eshell-list-files-after-cd t)

;; term
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(slime-repl-inputed-output-face ((t (:foreground "lime"))))
 '(slime-repl-output-face ((t (:inherit font-lock-string-face :foreground "lightskyblue"))))
 '(slime-repl-prompt-face ((t (:inherit font-lock-keyword-face :foreground "deepskyblue"))))
 '(term-color-black ((t (:foreground "#3F3F3F" :background "#2B2B2B"))))
 '(term-color-blue ((t (:foreground "cyan2" :background "#4C7073"))))
 '(term-color-cyan ((t (:foreground "#93E0E3" :background "#8CD0D3"))))
 '(term-color-green ((t (:foreground "#7F9F7F" :background "#9FC59F"))))
 '(term-color-magenta ((t (:foreground "orchid1" :background "#CC9393"))))
 '(term-color-red ((t (:foreground "#AC7373" :background "#8C5353"))))
 '(term-color-white ((t (:foreground "#DCDCCC" :background "#656555"))))
 '(term-color-yellow ((t (:foreground "#DFAF8F" :background "#9FC59F"))))
 '(term-default-bg-color ((t (:inherit term-color-black))))
 '(term-default-fg-color ((t (:inherit term-color-white)))))

;;------------------------------
;; Others
;;------------------------------

;; Emacs Ipython Notebook
(require 'ein)

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



