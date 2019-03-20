
((digest . "a274adf6a8d009aa3b10dae522a303b6") (undo-list nil ("
" . 163) ((marker . 163) . -1) ((marker . 163) . -1) ((marker) . -1) ((marker) . -1) ((marker) . -1) nil ("
" . 144) nil (" " . 144) ((marker . 144) . -1) ((marker . 144) . -1) nil (nil rear-nonsticky nil 164 . 165) (nil fontified nil 151 . 165) (nil fontified nil 149 . 151) (nil fontified nil 148 . 149) (nil fontified nil 146 . 148) (nil fontified nil 145 . 146) (145 . 165) nil (144 . 145) nil ("  // max-ヒープ条件を適用する" . 117) nil ("
" . 117) nil ("
" . 220) nil ("
" . 196) (t 23681 56996 797088 612000) nil (195 . 196) nil ("  }" . 195) nil ("
" . 195) nil ("    size = 0;" . 195) nil ("
" . 195) nil (" " . -195) ((marker . 163) . -1) ("{" . -196) ((marker . 163) . -1) 197 (t 23681 56873 636468 951000) nil (253 . 254) nil ("  }" . 253) nil ("
" . 253) nil ("
" . 253) ((marker . 194) . -1) ((marker . 144) . -1) nil (" " . -253) ((marker . 163) . -1) ("{" . -254) ((marker . 163) . -1) 255 nil ("    if (size < 1) return -1;

    int max_value = queue[1];

    // 末尾の値を根に配置した後、要素を適切に配置する
    queue[1] = queue[size--];
    max_heapify(1);

    return max_value;" . 256) ((marker . 163) . -164) ((marker) . -164) 420 (t 23681 56754 106522 233000) nil (163 . 164) nil (" " . -163) ((marker . 163) . -1) ("{" . -164) ((marker . 163) . -1) 165 nil (240 . 241) nil ("  }" . 240) nil ("    
" . 240) nil ("
" . 240) ((marker . 194) . -1) ((marker . 144) . -1) ((marker . 217) . -1) ((marker . 217) . -1) ((marker . 217) . -1) nil (" " . -240) ((marker . 163) . -1) ("{" . -241) ((marker . 163) . -1) 242 (t 23681 56690 374586 691000) nil (243 . 247) nil ("    int parent, pos;
    
    pos = ++size;
    queue[pos] = key;  // 要素を挿入
    // 適切な位置に配置する
    parent = pos / 2;
    while (pos > 1 && queue[pos] > queue[parent]) {
      swap(queue[pos], queue[parent]);
      pos = parent;
      parent = pos / 2;
    }" . 243) ((marker . 163) . -256) ((marker) . -256) ((marker*) . 1) ((marker) . -256) ((marker*) . 90) ((marker) . -167) 499 nil ("    int l, r, largest;

    l = i * 2;
    r = i * 2 + 1;

    // largestを決める
    if (l <= size && queue[l] > queue[i]) largest = l;
    else largest = i;    
    if (r <= size && queue[r] > queue[largest]) largest = r;

    if (largest != i) {
      swap(queue[i], queue[largest]);
      max_heapify(largest);
    }
  }" . 166) ((marker . 163) . -320) ((marker . 236) . -317) ((marker . 236) . -317) ((marker) . -320) ((marker*) . 1) ((marker) . -320) 486 (t 23681 55414 326807 245000)))
