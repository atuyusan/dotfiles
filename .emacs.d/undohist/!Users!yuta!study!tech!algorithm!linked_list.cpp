
((digest . "4e529ad783428233c7f8770cde8deb97") (undo-list nil (1597 . 1598) nil (1589 . 1597) nil (1587 . 1589) ("  " . 1586) ((marker . 1598) . -2) (1585 . 1589) (t 23650 11873 692524 647000) nil (20 . 1585) ("#include \"linked_list.h\"

LinkedList::LinkedList() {
  nil = new Node;  // メモリを動的に確保
  nil->prev = nil;  // 自分自身と  
  nil->next = nil;  // リンク
}

void LinkedList::insert(int key) {
  Node *x;  // 新しいノードをさすポインタ
  x = new Node;
  x->key = key;
  // リンクのつなぎ替え
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

void LinkedList::delete_node(Node *node) {
  if (node == nil) return;  // nodeが番兵の時は何もしない
  // リンクつなぎ変え
  node->prev->next = node->next;
  node->next->prev = node->prev;
  delete node;  // メモリ解放
}

Node* LinkedList::list_search(int key) {
  Node *current = nil->next;
  while (current != nil && current->key != key) {
    current = current->next;
  }
  return current;
}

void LinkedList::delete_key(int key) {
  delete_node(list_search(key));
}

void LinkedList::delete_first() {
  delete_node(nil->next);
}

void LinkedList::delete_last() {
  delete_node(nil->prev);
}

void LinkedList::print_list() {
  " . 20) ((marker . 20) . -581) ((marker . 1600) . -712) ((marker . 20) . -180) ((marker . 20) . -176) ((marker . 20) . -53) ((marker . 20) . -279) ((marker . 20) . -75) ((marker . 20) . -823) ((marker . 20) . -170) ((marker) . -846) ((marker . 20) . -544) ((marker . 20) . -885) ((marker . 20) . -579) ((marker . 20) . -537) ((marker . 20) . -579) ((marker . 20) . -538) ((marker . 20) . -538) ((marker . 20) . -181) ((marker . 20) . -123) ((marker . 20) . -944) ((marker . 20) . -181) ((marker . 20) . -385) ((marker . 20) . -579) ((marker . 20) . -579) ((marker . 20) . -712) ((marker . 1162) . -25) ((marker . 1162) . -25) ((marker . 1179) . -26) ((marker . 1179) . -26) ((marker . 1210) . -53) ((marker . 1210) . -53) ((marker . 1215) . -85) ((marker . 1215) . -85) ((marker . 1244) . -116) ((marker . 1244) . -116) ((marker . 1278) . -143) ((marker . 1278) . -143) ((marker . 1306) . -145) ((marker . 1306) . -145) ((marker . 1337) . -146) ((marker . 1337) . -146) ((marker . 1343) . -181) ((marker . 1343) . -181) ((marker . 1367) . -210) ((marker . 1367) . -210) ((marker . 1371) . -226) ((marker . 1371) . -226) ((marker . 1374) . -242) ((marker . 1374) . -242) ((marker . 1377) . -257) ((marker . 1377) . -257) ((marker . 1378) . -280) ((marker . 1378) . -280) ((marker . 1395) . -303) ((marker . 1395) . -303) ((marker . 1411) . -320) ((marker . 1411) . -320) ((marker . 1412) . -337) ((marker . 1412) . -337) ((marker . 1456) . -339) ((marker . 1456) . -339) ((marker . 1474) . -340) ((marker . 1474) . -340) ((marker . 1493) . -383) ((marker . 1493) . -383) ((marker . 1511) . -430) ((marker . 1511) . -430) ((marker . 1531) . -444) ((marker . 1531) . -444) ((marker . 1549) . -477) ((marker . 1549) . -477) ((marker . 1568) . -510) ((marker . 1568) . -510) ((marker . 1586) . -535) ((marker . 1586) . -535) ((marker) . -537) ((marker) . -537) ((marker) . -538) ((marker) . -538) ((marker) . -579) ((marker) . -579) ((marker) . -608) ((marker) . -608) ((marker) . -658) ((marker) . -658) ((marker) . -687) ((marker) . -687) ((marker) . -691) ((marker) . -691) ((marker) . -709) ((marker) . -709) ((marker) . -711) ((marker) . -711) ((marker) . -712) ((marker) . -712) ((marker) . -751) ((marker) . -751) ((marker) . -784) ((marker) . -784) ((marker) . -786) ((marker) . -786) ((marker) . -787) ((marker) . -787) ((marker) . -821) ((marker) . -821) ((marker) . -847) ((marker) . -847) ((marker) . -849) ((marker) . -849) ((marker) . -850) ((marker) . -850) ((marker) . -883) ((marker) . -883) ((marker) . -909) ((marker) . -909) ((marker) . -911) ((marker) . -911) ((marker) . -912) ((marker) . -912) ((marker) . -944) ((marker) . -944) ((marker . 20) . -944) (t 23650 10747 790352 0) nil (143 . 147) nil ("p" . -143) ((marker) . -1) ((marker . 20) . -1) ("r" . -144) ((marker) . -1) ((marker . 20) . -1) ("e" . -145) ((marker) . -1) ((marker . 20) . -1) ("v" . -146) ((marker) . -1) 147 (t 23650 9810 809615 337000) nil (558 . 562) nil ("t" . 558) ("n" . 558) ("i" . 558) nil (561 . 562) nil (558 . 561) nil ("N" . -558) ((marker) . -1) ("o" . -559) ((marker) . -1) ("d" . -560) ((marker) . -1) ("e" . -561) ((marker) . -1) ("*" . -562) ((marker) . -1) 563 (t 23650 9771 12338 538000) nil (562 . 563) nil ("}" . -562) ((marker) . -1) ((marker*) . 1) ((marker) . -1) 563 nil (562 . 563) nil ("*" . -563) ((marker) . -1) 564 (t 23650 9446 884677 987000) nil undo-tree-canary))
