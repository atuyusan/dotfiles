
((digest . "149b7c7e67559d91fc6c5291c24c9f9e") (undo-list nil (11426 . 11435) nil ("/" . -11426) ((marker . 11426) . -1) ((marker . 11438) . -1) ("u" . -11427) ((marker . 11426) . -1) ((marker . 11438) . -1) ("s" . -11428) ((marker . 11426) . -1) ((marker . 11438) . -1) ("r" . -11429) ((marker . 11426) . -1) ((marker . 11438) . -1) ("/" . -11430) ((marker . 11426) . -1) ((marker . 11438) . -1) ("l" . -11431) ((marker . 11426) . -1) ((marker . 11438) . -1) ("o" . -11432) ((marker . 11426) . -1) ((marker . 11438) . -1) ("c" . -11433) ((marker . 11426) . -1) ((marker . 11438) . -1) ("a" . -11434) ((marker . 11426) . -1) ((marker . 11438) . -1) ("l" . -11435) ((marker . 11426) . -1) ((marker . 11438) . -1) ("/" . -11436) ((marker . 11426) . -1) ((marker . 11438) . -1) 11437 nil ("bin/fish" . -11437) ((marker . 11426) . -8) ((marker . 11438) . -8) ((marker) . -8) 11445 (t 23629 32188 424476 437000) nil ("
" . -9469) ((marker . 763) . -1) ((marker . 11398) . -1) ((marker) . -1) ((marker . 9469) . -1) ((marker . 9469) . -1) 9470 nil ("
;; run yatex mode when open .tex file
(setq auto-mode-alist
(cons (cons \"\\\\.tex$\" 'yatex-mode) auto-mode-alist))
(autoload 'yatex-mode \"yatex\" \"Yet Another LaTeX mode\" t)
;; use utf-8 on yatex mode
;;(defvar YaTeX-kanji-code \"\");; 束縛？

;; previewer
(defvar YaTeX-dvi2-command-ext-alist
	'((\"[agxk]dvi\\\\|dviout\\\\|TexShop\" . \".dvi\")
    (\"ghostview\\\\|gv\" . \".ps\")
    (\"acroread\\\\|[xk]pdf\\\\|pdfopen\\\\|Preview\\\\|TeXShop\\\\|Skim\\\\|evince\\\\|mupdf\\\\|zathura\\\\|okular\" . \".pdf\")))

" . 9470) ((marker . 11398) . -475) ((marker) . -475) ((marker) . -475) 9945 nil (nil rear-nonsticky nil 9468 . 9469) (nil fontified nil 9466 . 9469) (nil fontified nil 9450 . 9466) (nil fontified nil 9449 . 9450) (nil fontified nil 9443 . 9449) (nil fontified nil 9442 . 9443) (9442 . 9469) nil (9441 . 9442) nil ("(defvar YaTeX-kanji-code 4)" . 9678) ((marker* . 11437) . 27) ((marker . 11438) . -1) ((marker* . 11364) . 1) ((marker . 11365) . -27) (t 23629 32131 251195 394000) nil ("    ;; 自分の環境に合わせて\"\"内を変えてください" . 9129) nil ("      ;; 自分の環境に合わせて\"\"内を変えてください" . 9097) nil (" " . -9097) ((marker) . -1) ((marker . 9097) . -1) 9098 nil (" " . -8993) ((marker) . -1) (" " . -8994) ((marker) . -1) (" " . -8995) ((marker) . -1) (" " . -8996) ((marker) . -1) (" " . -8997) ((marker) . -1) (" " . -8998) ((marker) . -1) (" " . -8999) ((marker) . -1) (" " . -9000) ((marker) . -1) (" " . -9001) ((marker) . -1) (" " . -9002) ((marker) . -1) (" " . -9003) ((marker) . -1) (" " . -9004) ((marker) . -1) 9005 nil ("    ;; パ" . -9005) ((marker) . -8) 9013 nil ("ッケージ読み込み" . -9013) ((marker) . -8) 9021 nil ("
" . 8977) ((marker . 11439) . -1) nil (";;; yatex" . 8977) nil (9538 . 9539) nil (nil rear-nonsticky nil 9537 . 9538) (nil fontified nil 8977 . 9538) (8977 . 9538) nil (8976 . 8977) (t 23629 31823 905347 39000) nil ("
" . 9148) nil ("load-path))" . 9148) nil ("
" . 9148) nil ("\"/Users/yuta/.emacs.d/elisp/yatex1.80\")" . 9148) nil ("
" . 9148) nil ("(setq load-path (cons (expand-file-name" . 9148) nil ("
" . 9148) nil (";; yatex load path" . 9148) (t . 0) nil (12387 . 12626) ("(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )" . -12387) (12384 . 12386) (12045 . 12049) (" " . 12045) ("
" . -12381) (12045 . 12046) (12380 . 12381) (12044 . 12045) (" " . 12044) (12034 . 12380) (" " . 12034) (11761 . 12035) ("(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(package-selected-packages
   (quote
    (yatex latex-math-preview ein py-yapf python-mode flycheck dumb-jump undohist undo-tree markdown-preview-mode rainbow-mode kotlin-mode popwin slime exec-path-from-shell fish-mode yaml-mode web-mode scss-mode ruby-electric ruby-block recentf-ext pos-tip pkg-info neotree multi-term impatient-mode hiwin dash counsel company avy-migemo))))" . -11761) nil (12387 . 12626) ("(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )" . -12387) (12384 . 12386) (12045 . 12049) (" " . 12045) ("
" . -12381) (12045 . 12046) (12380 . 12381) (12044 . 12045) (" " . 12044) (12034 . 12380) (" " . 12034) (11761 . 12035) ("(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(package-selected-packages
   (quote
    (latex-math-preview ein py-yapf python-mode flycheck dumb-jump undohist undo-tree markdown-preview-mode rainbow-mode kotlin-mode popwin slime exec-path-from-shell fish-mode yaml-mode web-mode scss-mode ruby-electric ruby-block recentf-ext pos-tip pkg-info neotree multi-term impatient-mode hiwin dash counsel company avy-migemo))))" . -11761) nil (9431 . 9434) nil (9424 . 9431) nil (9467 . 9471) ("   " . 9467) 9471 nil (9436 . 9440) ("   " . 9436) 9438 nil (" " . -9402) 9401 nil ("	" . 9467) ("9" . 9467) ("9" . 9467) ("2" . 9467) ("1" . 9467) (" " . 9467) (" " . 9467) nil ("	" . 9437) ("8" . 9437) ("9" . 9437) ("2" . 9437) ("1" . 9437) (" " . 9437) (" " . 9437) nil ("7" . 9401) ("9" . 9401) ("2" . 9401) nil ("1" . 9401) (" " . 9401) (" " . 9401) nil (nil rear-nonsticky nil 9596 . 9597) (nil fontified nil 9364 . 9597) (9364 . 9597) nil (9363 . 9364) nil (9351 . 9363) nil (9350 . 9351) (t 23625 2732 997737 248000) nil (579 . 580) nil (565 . 579) (t . 0) nil (12128 . 12367) ("(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )" . -12128) (12125 . 12127) (11792 . 11796) (" " . 11792) ("
" . -12122) (11792 . 11793) (12121 . 12122) (11791 . 11792) (" " . 11791) (11781 . 12121) (" " . 11781) (11508 . 11782) ("(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(package-selected-packages
   (quote
    (ein py-yapf python-mode flycheck dumb-jump undohist undo-tree markdown-preview-mode rainbow-mode kotlin-mode popwin slime exec-path-from-shell fish-mode yaml-mode web-mode scss-mode ruby-electric ruby-block recentf-ext pos-tip pkg-info neotree multi-term impatient-mode hiwin dash counsel company avy-migemo))))" . -11508) nil (11104 . 11118) nil (11103 . 11104) nil (11086 . 11103) nil (11084 . 11086) nil (11081 . 11084) nil (11078 . 11081) nil (11076 . 11078) nil (11464 . 11465) nil undo-tree-canary))
