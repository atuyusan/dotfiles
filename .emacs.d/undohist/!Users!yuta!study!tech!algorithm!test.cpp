
((digest . "62c4876c1775d160706e9296fcdc7fca") (undo-list nil ("  num = str -;" . 89) ((marker . 89) . -2) ((marker . 89) . -2) ((marker . 89) . -2) ((marker . 89) . -13) ((marker . 89) . -14) ((marker) . -14) nil (" " . -102) ((marker . 89) . -1) ((marker) . -1) ((marker) . -1) ((marker) . -1) ((marker) . -1) ("\"" . -103) ((marker . 89) . -1) ((marker) . -1) ((marker) . -1) 104 nil ("0\"" . -104) ((marker . 89) . -2) 106 nil (103 . 106) nil ("'" . -103) ((marker . 89) . -1) ((marker) . -1) ((marker) . -1) ("0" . -104) ((marker . 89) . -1) ("'" . -105) ((marker . 89) . -1) 106 (t 23724 8234 90541 868000) nil (148 . 149) 110 nil (107 . 110) nil (129 . 130) nil (124 . 129) nil (122 . 124) nil (119 . 122) nil (118 . 119) nil ("s" . -118) ((marker . 89) . -1) ("t" . -119) ((marker . 89) . -1) ("r" . -120) ((marker . 89) . -1) 121 nil (117 . 121) nil (115 . 117) nil (110 . 115) nil (107 . 110) nil (106 . 107) nil (96 . 106) nil (91 . 96) nil (89 . 91) ("  " . 88) ((marker . 89) . -2) (87 . 91) nil (86 . 87) nil (79 . 86) nil (76 . 79) nil (75 . 76) nil (64 . 75) nil (57 . 64) nil ("S" . -57) ((marker . 89) . -1) ("T" . -58) ((marker . 89) . -1) 59 nil (57 . 59) nil (apply yas--snippet-revive 1 72 #s(yas--snippet nil nil #s(yas--exit 57 nil) 2 nil nil nil nil)) (apply yas--take-care-of-redo #s(yas--snippet nil nil #s(yas--exit 57 nil) 2 nil nil nil nil)) (1 . 72) nil ("#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

const int N = 1000;

class Stack {
  int m_top;
  int S[N];

public:
  
  Stack() {
    m_top = 0;
  }

  int pop() {
    return S[--m_top];
  }

  void push(int x) {
    S[m_top++] = x;
  }

  int top() {
    return S[m_top-1];
  }
};

int main() {
  int x, y, n;
  char symbol[100];
  Stack st = Stack();

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> symbol;
    char s = symbol[0];

    if (s == '+') {
      x = st.pop(); y = st.pop();
      st.push(x + y);
    } else if (s == '-') {
      x = st.pop(); y = st.pop();
      st.push(y - x);
    } else if (s == '*') {
      x = st.pop(); y = st.pop();
      st.push(x * y);
    } else {
      st.push(atoi(symbol));
    }

    cout << \" \" << st.top();
  }
  cout << endl;

  cout << st.pop() << endl;

  return 0;
}
" . 1) ((marker . 89) . -857) ((marker . 1) . -97) ((marker . 19) . -18) ((marker . 1) . -194) ((marker . 1) . -194) ((marker) . -857) 858 (t 23722 36228 680911 117000) nil (625 . 630) nil ("x" . -625) (" " . -626) ("-" . -627) (" " . -628) ("y" . -629) 630 (t 23722 36151 152312 840000) nil (812 . 813) nil (807 . 812) nil (805 . 807) nil (800 . 805) nil (797 . 800) nil (792 . 793) nil (791 . 792) nil (790 . 791) nil (783 . 790) nil (781 . 783) nil (777 . 781) nil ("2" . -777) (" " . -778) ("\"" . -779) 780 nil (776 . 780) nil (774 . 776) nil (773 . 774) nil (769 . 773) nil (765 . 769) ("    " . 764) (763 . 769) (t 23722 36093 14038 485000) nil (428 . 429) nil (427 . 428) (t 23722 36073 365417 718000) nil (445 . 446) nil (438 . 445) nil (436 . 438) nil (432 . 436) nil (427 . 432) nil (426 . 427) nil (422 . 426) nil (421 . 422) nil (419 . 421) nil (418 . 419) nil (415 . 418) nil (414 . 415) nil (405 . 414) nil (404 . 405) nil (400 . 404) nil ("while (cin >> symbol) {" . 400) nil (395 . 396) nil (393 . 395) nil (391 . 393) nil (387 . 391) nil (385 . 387) ("  " . 384) (383 . 387) nil (339 . 340) nil (338 . 339) nil (337 . 338) (t 23722 36016 453707 534000)))
