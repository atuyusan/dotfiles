
((digest . "72d1be88a59cc44cd792b964d042052a") (undo-list nil (";; convert node name into dot format
(defun dot-name (exp)
  (substitute-if #\\_ (complement #'alphanumericp) (prin1-to-string exp)))

(defparameter *max-label-length* 30)

;; make nodes' labels from *nodes*
(defun dot-label (exp)
  (if exp
      (let ((s (write-to-string exp :pretty nil)))
        (if (> (length s) *max-label-length*)
            (concatenate 'string (subseq s 0 (- *max-label-length* 3)) \"...\")
            s))
      \"\"))


;; output nodes' information in dot format
(defun nodes->dot (nodes)
  (mapc (lambda (node)
          (fresh-line)
          (princ (dot-name (car node)))
          (princ \"[label=\\\"\")
          (princ (dot-label node))
          (princ \"\\\"];\"))
        nodes))

;; output edges' information in dot format
(defun edges->dot (edges)
  (mapc (lambda (node)
          (mapc (lambda (edge)
                  (fresh-line)
                  (princ (dot-name (car node)))
                  (princ \"->\")
                  (princ (dot-name (car edge)))
                  (princ \"[label=\\\"\")
                  (princ (dot-label (cdr edge)))
                  (princ \"\\\"];\"))
                (cdr node)))
        edges))

;; output dot data
(defun graph->dot (nodes edges)
  (princ \"digraph {\")
  (nodes->dot nodes)
  (edges->dot edges)
  (princ \"}\"))

;; generate png file from dot file
(defun dot->png (fname thunk)
  (with-open-file (*standard-output*
                   fname
                   :direction :output
                   :if-exists :supersede)
    (funcall thunk))
  (ext:shell (concatenate 'string \"dot -Tpng -O \" fname)))

;; generate graph in png
(defun graph->png (fname nodes edges)
  (dot->png fname
            (lambda ()
              (graph->dot nodes edges))))


(defun uedges->dot (edges)
  (maplist (lambda (lst)
             (mapc (lambda (edge)
                     (unless (assoc (car edge) (cdr lst))
                       (fresh-line)
                       (princ (dot-name (caar lst)))
                       (princ \"--\")
                       (princ (dot-name (car edge)))
                       (princ \"[label=\\\"\")
                       (princ (dot-label (cdr edge)))
                       (princ \"\\\"];\")))
                   (cdar lst)))
           edges))

(defun ugraph->dot (nodes edges)
  (princ \"graph{\")
  (nodes->dot nodes)
  (uedges->dot edges)
  (princ \"}\"))

(defun ugraph->png (fname nodes edges)
  (dot->png fname
            (lambda ()
              (ugraph->dot nodes edges))))
" . 4195) ((marker . 3125) . -988) ((marker . 4195) . -1722) ((marker . 4195) . -207) ((marker . 4195) . -1137) ((marker . 4195) . -207) ((marker . 4195) . -36) ((marker . 4195) . -2467) ((marker . 3125) . -909) ((marker . 4195) . -2342) ((marker . 4195) . -2467) ((marker . 4195) . -2467) ((marker . 4195) . -1321) ((marker) . -2467) 6662 (t 23677 2057 95015 464000) nil (4365 . 4366) (t 23676 32332 396859 615000) nil (6529 . 6530) nil ("t" . -6529) ((marker . 4195) . -1) 6530 (t 23676 31631 443497 783000) nil (")" . -6660) ((marker . 4195) . -1) ((marker*) . 1) ((marker) . -1) 6661 nil (" " . -6632) 6640 nil (" " . -6607) 6618 nil ("(" . -6589) ((marker . 4195) . -1) 6590 nil (6663 . 6664) nil (6660 . 6663) nil (6654 . 6660) nil (6653 . 6654) nil (6648 . 6653) nil (6647 . 6648) nil (6644 . 6647) nil (6635 . 6644) nil (6619 . 6635) nil (6617 . 6619) nil (6616 . 6617) nil (6609 . 6616) nil (6595 . 6609) nil (" " . -6595) ((marker . 4195) . -1) ("t" . -6596) ((marker . 4195) . -1) ("h" . -6597) ((marker . 4195) . -1) ("u" . -6598) ((marker . 4195) . -1) ("n" . -6599) ((marker . 4195) . -1) ("k" . -6600) ((marker . 4195) . -1) 6601 nil (6596 . 6601) nil (6595 . 6596) nil (6589 . 6595) nil (6588 . 6589) nil (6585 . 6588) nil (6579 . 6585) nil (6576 . 6579) nil (6570 . 6576) nil (6569 . 6570) nil (6564 . 6569) nil ("noehd" . -6564) ((marker . 4195) . -5) 6569 nil (6565 . 6569) nil ("d" . -6565) ((marker . 4195) . -1) 6566 nil (6564 . 6566) nil (6563 . 6564) nil (6557 . 6563) nil (6556 . 6557) nil (6545 . 6556) nil (6544 . 6545) nil (6538 . 6544) nil (6536 . 6538) (t 23676 31463 868167 247000) nil (6535 . 6536) nil (6531 . 6535) nil (6530 . 6531) nil (6525 . 6530) nil (6503 . 6504) nil (6523 . 6524) nil (6520 . 6523) nil (6519 . 6520) nil (6514 . 6519) ("edge" . -6514) ((marker . 4195) . -4) 6518 nil (6514 . 6518) nil (6513 . 6514) nil (6508 . 6513) nil (6502 . 6508) nil (6499 . 6502) nil (6493 . 6499) nil (6492 . 6493) nil (6481 . 6492) nil (6478 . 6481) nil (6474 . 6478) nil (6469 . 6474) nil (6468 . 6469) nil (6462 . 6468) nil (6459 . 6462) nil (6453 . 6459) nil (6452 . 6453) nil (6447 . 6452) nil (6446 . 6447) nil (6445 . 6446) nil (6441 . 6445) nil ("d" . -6441) ((marker . 4195) . -1) ("o" . -6442) ((marker . 4195) . -1) ("t" . -6443) ((marker . 4195) . -1) 6444 nil (6434 . 6444) nil (6433 . 6434) nil (6427 . 6433) nil ("                       " . -6427) (6426 . 6427) (t 23676 31394 15306 290000) nil (6449 . 6450) 6425 nil (6423 . 6425) nil (6420 . 6423) nil ("g" . -6420) ((marker . 4195) . -1) ("e" . -6421) ((marker . 4195) . -1) 6422 nil (6418 . 6422) nil (6406 . 6418) nil (6400 . 6406) nil (6399 . 6400) nil (6394 . 6399) nil (6374 . 6394) nil (6373 . 6374) nil (6372 . 6373) nil (6369 . 6370) nil (6371 . 6395) nil (6365 . 6371) nil (6364 . 6365) nil (6358 . 6364) nil (6334 . 6358) nil (6327 . 6334) nil (6326 . 6327) nil (6322 . 6326) nil (6321 . 6322) nil (6311 . 6321) nil (6310 . 6311) nil (6304 . 6310) nil (6280 . 6304) nil (6278 . 6280) nil (6268 . 6278) nil (6267 . 6268) nil (6262 . 6267) nil ("r" . -6262) ((marker . 4195) . -1) ((marker . 4195) . -1) 6263 nil (6262 . 6263) nil (6261 . 6262) nil (6237 . 6261) nil (6230 . 6237) nil (6229 . 6230) nil (6225 . 6229) nil (6224 . 6225) nil (6217 . 6224) nil (6215 . 6217) nil (6214 . 6215) nil (6208 . 6214) nil (6184 . 6208) nil (6183 . 6184) nil (6179 . 6183) nil (6178 . 6179) nil (6172 . 6178) nil (6148 . 6172) nil (6142 . 6148) nil (6141 . 6142) nil (6138 . 6141) nil (6136 . 6138) nil (6135 . 6136) nil (6132 . 6135) nil (6131 . 6132) nil ("a" . -6131) ((marker . 4195) . -1) ((marker . 4195) . -1) ("m" . -6132) ((marker . 4195) . -1) ((marker . 4195) . -1) ("e" . -6133) ((marker . 4195) . -1) ((marker . 4195) . -1) 6134 nil (6131 . 6134) nil ("bame" . -6131) ((marker . 4195) . -4) ((marker . 4195) . -4) 6135 nil (6126 . 6135) nil (6125 . 6126) nil (6119 . 6125) nil (6095 . 6119) nil (6094 . 6095) nil (6084 . 6094) ("fresh-" . -6084) ((marker . 4195) . -6) ((marker . 4195) . -6) 6090 nil (6083 . 6090) nil (6059 . 6083) nil (6054 . 6059) nil (6053 . 6054) nil (6050 . 6053) nil (6049 . 6050) nil (6048 . 6049) nil (6047 . 6048) nil (6043 . 6047) nil (6042 . 6043) nil (6039 . 6042) nil (6038 . 6039) nil (6037 . 6038) nil (6031 . 6037) nil (6030 . 6031) nil (6028 . 6030) nil (6023 . 6028) nil (6001 . 6023) nil (5995 . 6001) nil (5994 . 5995) nil (5988 . 5994) nil ("m" . -5988) ((marker . 4195) . -1) ((marker . 4195) . -1) ("a" . -5989) ((marker . 4195) . -1) ((marker . 4195) . -1) ("p" . -5990) ((marker . 4195) . -1) ((marker . 4195) . -1) 5991 nil (5988 . 5991) nil (5987 . 5988) nil (5986 . 5987) nil (5981 . 5986) nil (5967 . 5981) nil (5962 . 5967) nil (5961 . 5962) nil (5954 . 5961) nil (5953 . 5954) nil (5946 . 5953) nil ("a" . -5946) ((marker . 4195) . -1) ((marker . 4195) . -1) 5947 nil (5945 . 5947) nil (5942 . 5945) nil (5935 . 5942) nil (5934 . 5935) nil (5932 . 5934) nil ("t" . -5932) ((marker . 4195) . -1) ((marker . 4195) . -1) ("o" . -5933) ((marker . 4195) . -1) ((marker . 4195) . -1) 5934 nil (5930 . 5934) nil (5923 . 5930) nil (5922 . 5923) nil (5916 . 5922) nil (";" . -5916) ((marker . 4195) . -1) ((marker . 4195) . -1) (";" . -5917) ((marker . 4195) . -1) ((marker . 4195) . -1) 5918 nil (5916 . 5918) (t 23675 52404 216971 741000) nil ("  (" . 5916) ((marker . 4195) . -3) nil ("
" . 5916) ((marker . 4195) . -1) nil ("(defun uedges->dot (edges)" . 5916) ((marker*) . 26) ((marker) . -1) nil (5945 . 5946) nil (5942 . 5945) nil (5935 . 5942) nil (5934 . 5935) nil (5923 . 5934) nil (5922 . 5923) nil (5916 . 5922) nil (5915 . 5916) (t 23675 51185 933753 731000) nil (5914 . 5915) (t 23675 36827 344348 388000) nil (5604 . 5606) nil ("l" . -5604) ((marker . 4195) . -1) ("e" . -5605) ((marker . 4195) . -1) 5606 nil (5601 . 5606) nil (5582 . 5601) nil ("                   (concatenate 'string fname)" . -5582) ((marker . 4195) . -46) ((marker*) . 1) ((marker) . -46) ((marker*) . 27) ((marker) . -20) 5628 nil undo-tree-canary))
