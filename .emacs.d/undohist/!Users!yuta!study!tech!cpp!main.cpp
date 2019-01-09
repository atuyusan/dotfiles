
((digest . "2326c5de88d68d1209fd33b3c082ebeb") (undo-list nil (18 . 19) nil (10 . 18) ("ios" . -10) ((marker . 19) . -3) ((marker . 19) . -3) 13 nil (10 . 13) nil (9 . 10) nil (2 . 9) ("inc" . -2) ((marker . 19) . -3) ((marker . 19) . -3) 5 nil (2 . 5) nil (1 . 2) nil (1 . 2) (t 23605 55748 347300 153000) nil ("
" . 1) ((marker . 1) . -1) ((marker . 20) . -1) ((marker . 1) . -1) nil ("#include <iostream> " . -1) ((marker . 19) . -20) ((marker . 19) . -20) 21 (t 23605 55739 102972 662000) nil ("y" . -60) ((marker . 19) . -1) 61 nil (58 . 61) nil (58 . 59) nil ("." . -58) ((marker . 19) . -1) ("h" . -59) ((marker . 19) . -1) 60 nil (51 . 60) nil ("u" . -51) ((marker . 19) . -1) 52 nil (49 . 52) nil (47 . 49) nil (40 . 47) ("inc" . -40) ((marker . 19) . -3) 43 nil (40 . 43) nil (39 . 40) nil (38 . 39) nil (";" . -38) ((marker . 19) . -1) 39 nil (38 . 39) nil (30 . 38) nil ("<" . -30) ((marker . 19) . -1) 31 nil (30 . 31) nil (23 . 30) ("inc" . -23) ((marker . 19) . -3) 26 nil (23 . 26) nil (22 . 23) nil ("#include \"counter.h\" " . -22) ((marker . 19) . -21) ((marker . 1) . -21) ((marker . 1) . -21) 43 (t 23605 55207 624164 28000) nil ("  " . 203) ((marker . 19) . -2) (205 . 206) nil (202 . 205) nil (201 . 202) nil (199 . 201) nil (193 . 199) ("ret" . -193) ((marker . 19) . -3) 196 nil (193 . 196) nil (190 . 193) nil (189 . 190) nil (187 . 189) nil (177 . 187) ("sav" . -177) ((marker . 19) . -3) 180 nil (175 . 180) nil (172 . 175) nil (171 . 172) nil (169 . 171) nil (163 . 169) nil (160 . 163) nil (159 . 160) nil (158 . 159) nil (156 . 158) nil (155 . 156) nil (149 . 155) ("supp" . -149) ((marker . 19) . -4) 153 nil (147 . 153) nil (144 . 147) nil (143 . 144) nil (141 . 143) nil (131 . 141) ("CA" . -131) ((marker . 19) . -2) 133 nil (131 . 133) nil (128 . 131) nil (127 . 128) nil (125 . 127) nil (119 . 125) nil (116 . 119) nil (115 . 116) nil (113 . 115) nil (109 . 113) nil (107 . 109) nil (104 . 107) nil (103 . 104) nil (102 . 103) nil (101 . 102) nil ("-" . -101) ((marker . 19) . -1) 102 nil (101 . 102) nil ("-" . -101) ((marker . 19) . -1) 102 nil (100 . 102) nil (99 . 100) nil (93 . 99) ("sup" . -93) ((marker . 19) . -3) 96 nil (91 . 96) nil (88 . 91) nil (87 . 88) nil (82 . 87) nil (81 . 82) nil (78 . 81) nil (77 . 78) nil (76 . 77) nil (74 . 76) nil (66 . 74) nil (" " . 65) ((marker . 19) . -1) (66 . 67) nil ("
" . 42) ((marker . 20) . -1) nil ("
" . -20) ((marker . 19) . -1) ((marker . 1) . -1) 21 nil ("int main(){
    Counter c1, c2;
    c1.count();
    c2.count();
    c2.count();
    c2.reset();
    c1.count();
    c1.count();
    c2.count();
    cout << \"c1のカウント数：\" << c1.getCount() << endl;
    cout << \"c2のカウント数：\" << c2.getCount() << endl;
    cout << \"トータルのカウント数:\" << Counter::getTotalCount() << endl;
    return 0;
}
" . 69) ((marker . 221) . -297) ((marker . 221) . -297) ((marker . 220) . -297) ((marker . 19) . -323) ((marker . 1) . -323) ((marker . 20) . -323) ((marker . 221) . -273) ((marker) . -323) 392 (t 23603 338 316233 223000) nil (364 . 366) nil (360 . 364) nil (351 . 360) nil (349 . 351) nil (342 . 349) ("Coun" . -342) ((marker) . -4) 346 nil (342 . 346) nil ("c1.getCount() + c2.getCount()" . 342) ((marker . 221) . -29) ((marker) . -29) (t 23603 267 79993 910000) nil ("
" . 1) ((marker . 20) . -1) ((marker . 1) . -1) nil ("#include <iostream>
#include \"object.h\"
 
using namespace std;
 
int main(){
    Object *o1, *o2, *o3;
    o1 = new Object();
    o2 = new Object();
    o3 = new Object();
    cout << \"オブジェクトの数:\" << Object::getObjectNum() << endl;
    delete o3;
    cout << \"オブジェクトの数:\" << Object::getObjectNum() << endl;
    delete o2;
    delete o1;
    return 0;
}
" . 1) ((marker . 19) . -19) ((marker . 1) . -350) ((marker . 1) . -350) ((marker) . -350) ((marker) . -351) ((marker . 1) . -351) ((marker) . -351) 352 nil (nil rear-nonsticky nil 747 . 748) (nil fontified nil 353 . 748) (353 . 748) nil (351 . 353) (t 23602 65398 718363 524000) nil (nil rear-nonsticky nil 350 . 351) (nil fontified nil 44 . 351) (nil fontified nil 43 . 44) (nil fontified nil 41 . 43) (nil fontified nil 22 . 41) (nil fontified nil 21 . 22) (nil fontified nil 2 . 21) (nil fontified nil 1 . 2) (1 . 351) nil ("#include <iostream>
#include \"function.h\"
 
using namespace std;
 
int main(){
    int m = 3, n = 1;
    cout << m << \"と\" << n << \"のうち、最大のものは\" << Function::max(m, n) << endl;
    cout << m << \"と\" << n << \"のうち、最大のものは\" << Function::min(m, n) << endl;
    return 0;
}" . 1) ((marker . 19) . -19) ((marker . 221) . -264) ((marker . 1) . -264) ((marker) . -264) ((marker . 20) . -20) ((marker) . -264) (t 23602 65083 537164 435000) nil (265 . 266) nil (nil rear-nonsticky nil 264 . 265) (nil fontified nil 46 . 265) (nil fontified nil 45 . 46) (nil fontified nil 43 . 45) (nil fontified nil 22 . 43) (nil fontified nil 21 . 22) (nil fontified nil 2 . 21) (nil fontified nil 1 . 2) (1 . 265) nil ("#include <iostream>
#include \"rat.h\"
 
using namespace std;
 
int main(){
  CRat *r1, *r2, *r3;
  r1 = new CRat();
  r1->squeak();
  CRat::showNum();
  r2 = new CRat();
  r3 = new CRat();
  r2->squeak();
  r3->squeak();
  delete r1;
  delete r2;
  CRat::showNum();
  delete r3;
  CRat::showNum();
      
  return 0;
}
" . 1) ((marker . 19) . -19) ((marker . 1) . -127) ((marker . 1) . -303) ((marker . 1) . -62) ((marker . 1) . -74) ((marker . 1) . -150) ((marker . 1) . -169) ((marker . 1) . -117) ((marker . 1) . -190) ((marker) . -127) ((marker) . -318) ((marker . 1) . -318) ((marker . 20) . -318) ((marker . 1) . -206) ((marker) . -318) 319 (t 23602 64675 169768 299000) nil (125 . 128) nil ("a" . -125) ((marker) . -1) ("k" . -126) ((marker) . -1) ("e" . -127) ((marker) . -1) 128 (t 23602 64614 410314 792000) nil ("r" . -217) ((marker) . -1) 218 nil (217 . 218) (t 23602 64589 182539 745000) nil (214 . 217) nil ("a" . -214) ((marker) . -1) ("k" . -215) ((marker) . -1) ("e" . -216) ((marker) . -1) 217 nil (199 . 201) nil (198 . 199) nil ("a" . -198) ((marker) . -1) ("k" . -199) ((marker) . -1) ("e" . -200) ((marker) . -1) 201 nil (199 . 201) nil ("k" . -199) ((marker) . -1) ("e" . -200) ((marker) . -1) 201 (t 23602 63250 527534 316000) nil ("
" . 300) ((marker . 20) . -1) nil (297 . 300) nil (296 . 297) nil (294 . 296) nil (287 . 294) ("show" . -287) ((marker) . -4) 291 nil (287 . 291) nil (279 . 281) (" " . 279) (285 . 286) (279 . 280) ("  " . 279) (285 . 286) nil (281 . 285) ("CRa" . -281) ((marker) . -3) 284 nil (281 . 284) nil (278 . 281) nil (277 . 278) nil (276 . 277) nil (274 . 276) nil (268 . 274) ("dele" . -268) ((marker) . -4) 272 nil (268 . 272) nil (265 . 268) nil (264 . 265) nil (262 . 264) nil (255 . 262) ("show" . -255) ((marker) . -4) 259 nil (255 . 259) nil (247 . 249) (" " . 247) (253 . 254) (247 . 248) ("  " . 247) (253 . 254) nil (249 . 253) nil (246 . 249) nil (245 . 246) nil (242 . 245) nil (236 . 242) ("dele" . -236) ((marker) . -4) 240 nil (236 . 240) nil (233 . 236) nil (232 . 233) nil (223 . 232) nil (220 . 223) nil (208 . 209) nil ("1" . -208) ((marker) . -1) 209 nil (192 . 193) nil ("1" . 192) nil (nil rear-nonsticky nil 219 . 220) (nil fontified nil 219 . 220) (nil fontified nil 218 . 219) (nil fontified nil 217 . 218) (nil fontified nil 211 . 217) (nil fontified nil 210 . 211) (nil fontified nil 209 . 210) (nil fontified nil 208 . 209) (nil fontified nil 207 . 208) (207 . 220) nil (204 . 207) nil (nil rear-nonsticky nil 203 . 204) (nil fontified nil 203 . 204) (nil fontified nil 202 . 203) (nil fontified nil 201 . 202) (nil fontified nil 195 . 201) (nil fontified nil 194 . 195) (nil fontified nil 193 . 194) (nil fontified nil 192 . 193) (nil fontified nil 191 . 192) (191 . 204) nil (nil rear-nonsticky nil 130 . 131) (nil fontified nil 130 . 131) (nil fontified nil 129 . 130) (nil fontified nil 128 . 129) (nil fontified nil 122 . 128) (nil fontified nil 121 . 122) (nil fontified nil 120 . 121) (nil fontified nil 119 . 120) (nil fontified nil 118 . 119) (118 . 131) nil ("r1->squake();" . 118) nil ("r" . -191) ((marker) . -1) ("2" . -192) ((marker) . -1) ("=" . -193) ((marker) . -1) 194 nil (191 . 194) nil (188 . 191) nil (173 . 174) nil ("2" . -173) ((marker) . -1) 174 nil (170 . 172) ("    " . 170) ((marker . 221) . -2) 190 nil (nil rear-nonsticky nil 189 . 190) (nil fontified nil 189 . 190) (nil fontified nil 188 . 189) (nil fontified nil 187 . 188) (nil fontified nil 186 . 187) (nil fontified nil 185 . 186) (nil fontified nil 184 . 185) (nil fontified nil 183 . 184) (nil fontified nil 182 . 183) (nil fontified nil 181 . 182) (nil fontified nil 180 . 181) (nil fontified nil 179 . 180) (nil fontified nil 178 . 179) (nil fontified nil 177 . 178) (nil fontified nil 176 . 177) (nil fontified nil 175 . 176) (nil fontified nil 174 . 175) (nil fontified nil 172 . 174) (172 . 190) nil (169 . 172) nil (nil rear-nonsticky nil 168 . 169) (nil fontified nil 168 . 169) (nil fontified nil 167 . 168) (nil fontified nil 166 . 167) (nil fontified nil 165 . 166) (nil fontified nil 164 . 165) (nil fontified nil 163 . 164) (nil fontified nil 162 . 163) (nil fontified nil 161 . 162) (nil fontified nil 160 . 161) (nil fontified nil 159 . 160) (nil fontified nil 158 . 159) (nil fontified nil 157 . 158) (nil fontified nil 156 . 157) (nil fontified nil 155 . 156) (nil fontified nil 154 . 155) (nil fontified nil 153 . 154) (nil fontified nil 151 . 153) (151 . 169) nil ("  r2 = new CRat();" . 151) nil (168 . 169) nil (166 . 168) nil (153 . 166) nil (150 . 153) nil (149 . 150) nil (147 . 149) nil (140 . 147) ("show" . -140) ((marker) . -4) 144 nil (140 . 144) nil (132 . 134) (" " . 132) (138 . 139) (132 . 133) ("  " . 132) (138 . 139) nil (135 . 138) nil ("r" . -135) ((marker) . -1) 136 nil (134 . 136) nil (131 . 134) nil (130 . 131) nil (128 . 130) nil (122 . 128) ("squ" . -122) ((marker) . -3) 125 nil (122 . 125) nil (121 . 122) nil (118 . 121) nil ("t" . -118) ((marker) . -1) ("1" . -119) ((marker) . -1) 120 nil (118 . 120) nil (115 . 118) nil (114 . 115) nil (112 . 114) nil (103 . 107) nil (107 . 108) nil ("t" . -107) ((marker) . -1) ("r" . -108) ((marker) . -1) 109 nil (99 . 109) nil (96 . 99) nil (95 . 96) nil (93 . 95) nil ("4" . -93) ((marker) . -1) 94 nil (93 . 94) nil (92 . 93) nil ("}" . -92) ((marker) . -1) ((marker* . 18) . 1) ((marker . 19) . -1) ("r" . -93) ((marker) . -1) ("2" . -94) ((marker) . -1) 95 nil (93 . 95) nil (92 . 93) nil (91 . 92) nil (90 . 91) nil (88 . 90) nil (87 . 88) nil (86 . 87) nil (75 . 77) (" " . 75) ((marker . 221) . -1) ((marker . 1) . -1) ((marker) . -1) (84 . 85) nil (82 . 84) nil (81 . 82) nil (76 . 81) nil (" int *num = new int[4];
  int i;
  for (i = 0; i < 4; i++) {
    num[i] = i;
  }

  for (i = 0; i < 4; i++) {
    cout << \"num[\" << i << \"]=\" << i << \" \";
  }
  cout << endl;

  delete [] num;" . 76) ((marker . 1) . -192) ((marker) . -192) ((marker) . -192) ((marker . 1) . -176) ((marker) . -192) 268 (t 23602 63150 801736 151000) nil (29 . 37) nil (22 . 29) ("inc" . -22) ((marker) . -3) 25 nil (22 . 25) nil (21 . 22) nil (20 . 21) (t 23602 62250 408754 221000) nil (250 . 251) nil (247 . 250) nil ("b" . -247) ((marker) . -1) ("u" . -248) ((marker) . -1) ("m" . -249) ((marker) . -1) 250 nil (243 . 250) nil (" " . -243) ((marker) . -1) ("[" . -244) ((marker) . -1) ((marker . 19) . -1) ((marker* . 9) . 1) ((marker . 10) . -1) ("]" . -245) ((marker) . -1) ((marker* . 18) . 1) ((marker . 19) . -1) 246 nil (244 . 246) nil ("n" . -244) ((marker) . -1) ("u" . -245) ((marker) . -1) ("m" . -246) ((marker) . -1) (";" . -247) ((marker) . -1) 248 nil (247 . 248) nil (237 . 247) nil (235 . 237) ("  " . 234) ((marker) . -2) (233 . 237) (t 23602 62234 168033 682000) nil (232 . 233) nil (227 . 232) nil (225 . 227) nil (220 . 225) nil (217 . 220) nil (214 . 216) ("    " . 214) ((marker) . -4) (218 . 219) nil (213 . 218) nil (209 . 212) nil ("e" . -209) ((marker) . -1) ("n" . -210) ((marker) . -1) ("d" . -211) ((marker) . -1) ("l" . -212) ((marker) . -1) 213 nil (213 . 214) nil (208 . 213) nil (206 . 208) nil (203 . 206) nil (201 . 203) nil (198 . 201) nil ("~" . -198) ((marker) . -1) 199 nil (198 . 199) nil ("~" . -198) ((marker) . -1) ("\"" . -199) ((marker) . -1) 200 nil (195 . 200) nil (193 . 195) nil (190 . 193) nil (188 . 190) nil (185 . 188) nil (181 . 185) nil ("n" . -181) ((marker) . -1) 182 nil (180 . 182) nil (178 . 180) nil (173 . 178) nil (168 . 173) nil (167 . 168) nil (166 . 167) nil (165 . 166) nil (161 . 165) nil (160 . 161) nil (158 . 160) nil (157 . 158) nil (156 . 157) nil ("," . -156) ((marker) . -1) 157 nil (156 . 157) nil (154 . 156) nil (153 . 154) nil (148 . 153) nil (147 . 148) nil (143 . 147) nil (141 . 143) ("  " . 140) ((marker) . -2) (139 . 143) nil (136 . 138) ("    " . 136) ((marker) . -4) (140 . 141) nil (135 . 140) nil (134 . 135) nil (124 . 134) nil (119 . 124) nil (118 . 119) nil ("[" . -118) ((marker) . -1) 119 nil (117 . 119) nil (116 . 117) nil (112 . 116) nil (111 . 112) nil (109 . 111) nil (108 . 109) nil (105 . 108) nil (104 . 105) nil (99 . 104) nil (98 . 99) nil (94 . 98) nil (91 . 94) nil (90 . 91) nil (85 . 90) nil (82 . 85) nil (81 . 82) nil (75 . 81) nil (65 . 75) nil (64 . 65) nil (60 . 64) nil (66 . 68) ("    " . 66) ((marker) . -2) 68 nil (57 . 60) nil ("//  配列を生成
    int* num = new int[4];
    int i;
    //  配列に値を代入
    for (i = 0; i < 4; i++){
        num[1] = i;
    }
    //  配列の内容を表示
    for (i = 0; i < 4; i++){
        cout << \"num[\" << i << \"]=\" << i << \" \";
    }
    cout << endl;" . 62) ((marker) . -237) ((marker . 1) . -220) ((marker) . -237) 299 (t 23602 62131 338242 203000) nil (315 . 316) nil (nil rear-nonsticky nil 314 . 315) (nil fontified nil 24 . 315) (nil fontified nil 23 . 24) (nil fontified nil 21 . 23) (nil fontified nil 2 . 21) (nil fontified nil 1 . 2) (1 . 315) nil ("#include <iostream>
#include \"hoge.h\"
 
using namespace std;
 
int main(){
    Hoge* pH;
    pH = new Hoge();
    pH->foo();
    delete pH;
    return 0;
}
" . 1) ((marker . 19) . -19) ((marker . 1) . -155) ((marker) . -155) ((marker) . -156) ((marker . 1) . -156) ((marker . 20) . -156) ((marker) . -156) 157 (t 23602 61915 416995 22000) nil (156 . 157) nil (nil rear-nonsticky nil 155 . 156) (nil fontified nil 42 . 156) (nil fontified nil 41 . 42) (nil fontified nil 39 . 41) (nil fontified nil 22 . 39) (nil fontified nil 21 . 22) (nil fontified nil 2 . 21) (nil fontified nil 1 . 2) (1 . 156) nil ("#include <iostream>
#include \"number.h\"
 
using namespace std;
 
int main(){
    Number* pN;
    pN = new Number();
    pN->setNumbers(1, 2);
    cout << pN->getAdd() << endl;
    delete pN;
    return 0;
}
" . 1) ((marker . 19) . -19) ((marker . 1) . -190) ((marker) . -190) ((marker) . -207) ((marker . 1) . -207) ((marker . 20) . -207) ((marker) . -207) 208 (t 23602 61784 422399 259000) nil (190 . 191) nil (188 . 190) nil ("p" . -188) ((marker) . -1) 189 nil (181 . 189) nil (176 . 181) (t 23602 61538 367838 602000) nil (192 . 193) nil (nil rear-nonsticky nil 191 . 192) (nil fontified nil 44 . 192) (nil fontified nil 43 . 44) (nil fontified nil 41 . 43) (nil fontified nil 22 . 41) (nil fontified nil 21 . 22) (nil fontified nil 2 . 21) (nil fontified nil 1 . 2) (1 . 192) nil ("#include <iostream>

using namespace std;

int main() {
  int *p = 0;
  int i;

  p = new int[10];
  for (i = 0; i < 10; i++) {
    p[i] = i;
    cout << p[i] << endl;
  }
  delete [] p;
  
  return 0;
}
" . 1) ((marker . 19) . -19) ((marker . 1) . -186) ((marker) . -186) ((marker) . -204) ((marker . 1) . -204) ((marker . 20) . -204) ((marker) . -204) 205 (t 23602 61417 1722 192000) nil (186 . 187) nil (182 . 186) nil (181 . 182) nil (" " . -181) ((marker) . -1) ("p" . -182) ((marker) . -1) (";" . -183) ((marker) . -1) 184 nil (183 . 184) nil (175 . 183) nil (172 . 175) nil (169 . 171) ("    " . 169) ((marker) . -4) (173 . 174) nil (168 . 173) nil (167 . 168) nil (162 . 167) nil (160 . 162) nil (154 . 160) nil (152 . 154) nil (150 . 152) nil (" " . -150) ((marker) . -1) ("t" . -151) ((marker) . -1) 152 nil (147 . 152) nil (142 . 147) nil (141 . 142) nil (133 . 141) nil (128 . 133) nil (127 . 128) nil (126 . 127) nil (125 . 126) nil (121 . 125) nil (120 . 121) nil (117 . 120) nil (116 . 117) nil (113 . 116) nil (112 . 113) nil (107 . 112) nil (106 . 107) nil (102 . 106) nil (99 . 102) nil (98 . 99) nil (94 . 98) nil (85 . 94) nil (" " . -85) ((marker) . -1) 86 nil (83 . 86) nil (81 . 83) ("  " . 80) ((marker) . -2) (82 . 83) nil ("p" . -82) ((marker) . -1) (" " . -83) ((marker) . -1) ("=" . -84) ((marker) . -1) (" " . -85) ((marker) . -1) 86 nil (82 . 86) nil (79 . 82) nil (78 . 79) nil (73 . 78) nil (70 . 73) nil (69 . 70) nil (66 . 69) nil ("0" . -66) ((marker) . -1) (" " . -67) ((marker) . -1) ("0" . -68) ((marker) . -1) 69 nil (64 . 69) nil (63 . 64) nil (59 . 63) nil (56 . 59) nil ("
" . 57) ((marker . 20) . -1) nil ("  delete p;  // メモリ解放" . 57) nil ("
" . 57) ((marker . 20) . -1) nil ("  cout << *p << endl;" . 57) nil ("
" . 57) ((marker . 20) . -1) nil ("  *p = 123;" . 57) nil ("
" . 57) ((marker . 20) . -1) nil ("  p = new int();  // int型の領域を動的確保" . 57) nil ("
" . 57) ((marker . 20) . -1) nil ("  int *p = 0; // init" . 57) (t 23602 61227 89202 460000) nil (41 . 42) nil (37 . 41) nil (28 . 37) ("name" . -28) ((marker) . -4) 32 nil (22 . 32) nil (20 . 22) (t 23602 61150 410839 287000) nil ("." . -147) ((marker) . -1) ("x" . -148) ((marker) . -1) 149 nil (147 . 149) nil ("
" . 147) ((marker . 20) . -1) nil (" " . -147) ((marker) . -1) (" " . -148) ((marker) . -1) 149 nil (146 . 149) nil ("y" . -146) ((marker) . -1) 147 nil (144 . 147) ("解放y" . -144) ((marker) . -3) (144 . 147) ("解放y" . -144) (144 . 147) ("かいほ" . -144) ((marker) . -3) (144 . 147) ("かいh" . -144) ((marker) . -3) (144 . 147) ("かい" . -144) ((marker) . -2) (144 . 146) ("か" . -144) ((marker) . -1) (144 . 145) ("k" . -144) ((marker) . -1) (141 . 145) nil ("メモリ" . -141) ((marker) . -3) (141 . 144) ("目盛" . -141) ((marker) . -2) (141 . 143) ("めもr" . -141) ((marker) . -3) (141 . 144) ("めも" . -141) ((marker) . -2) (141 . 143) ("めm" . -141) ((marker) . -2) (141 . 143) ("め" . -141) ((marker) . -1) (141 . 142) ("m" . -141) ((marker) . -1) (141 . 142) ("目" . -141) ((marker) . -1) ("盛" . -142) ((marker) . -1) 143 nil (141 . 143) ("目盛" . -141) ((marker) . -2) (141 . 143) ("めもr" . -141) ((marker) . -3) (141 . 144) ("めも" . -141) ((marker) . -2) (141 . 143) ("めm" . -141) ((marker) . -2) (141 . 143) ("め" . -141) ((marker) . -1) (141 . 142) ("m" . -141) ((marker) . -1) (140 . 142) nil (138 . 140) nil ("." . -138) ((marker) . -1) ("." . -139) ((marker) . -1) (" " . -140) ((marker) . -1) 141 nil (136 . 141) nil (135 . 136) nil (133 . 135) nil (127 . 133) nil (124 . 127) nil (123 . 124) nil (118 . 123) nil (116 . 118) nil (114 . 116) nil (113 . 114) nil (112 . 113) nil (110 . 112) nil (108 . 110) nil (" " . -108) ((marker) . -1) ("t" . -109) ((marker) . -1) ("<" . -110) ((marker) . -1) ("<" . -111) ((marker) . -1) (" " . -112) ((marker) . -1) 113 nil (112 . 113) nil (110 . 112) nil (105 . 110) nil (102 . 105) nil (101 . 102) nil (100 . 101) nil ("2" . -100) ((marker) . -1) 101 nil (94 . 101) nil (93 . 94) nil (91 . 93) ("  " . 91) (90 . 91) nil (86 . 90) ("動的確保" . -86) ((marker) . -4) 90 nil (86 . 90) ("どう的確h" . -86) ((marker) . -5) (86 . 91) ("どう的確" . -86) ((marker) . -4) (86 . 90) ("どうてきかk" . -86) ((marker) . -6) (86 . 92) ("動的か" . -86) ((marker) . -3) (86 . 89) ("動的k" . -86) ((marker) . -3) (86 . 89) ("動的" . -86) ((marker) . -2) (86 . 88) ("どうてk" . -86) ((marker) . -4) (86 . 90) ("どうて" . -86) ((marker) . -3) (86 . 89) ("どうて" . -86) (86 . 89) ("どう" . -86) ((marker) . -2) (86 . 88) ("ど" . -86) ((marker) . -1) (86 . 87) ("d" . -86) ((marker) . -1) (83 . 87) ("領域を" . -83) ((marker) . -3) (83 . 86) ("領域w" . -83) ((marker) . -3) (83 . 86) ("領域" . -83) ((marker) . -2) (83 . 85) ("りょういk" . -83) ((marker) . -5) (83 . 88) ("りょうい" . -83) ((marker) . -4) (83 . 87) ("りょう" . -83) ((marker) . -3) (83 . 86) ("りょうき" . -83) ((marker) . -4) (83 . 87) ("りょうk" . -83) ((marker) . -4) (83 . 87) ("量" . -83) ((marker) . -1) (83 . 84) ("りょ" . -83) ((marker) . -2) (83 . 85) ("ry" . -83) ((marker) . -2) (83 . 85) ("r" . -83) ((marker) . -1) (81 . 84) nil ("型の" . -81) ((marker) . -2) (81 . 83) ("型n" . -81) ((marker) . -2) (81 . 83) ("型" . -81) ((marker) . -1) (81 . 82) ("がt" . -81) ((marker) . -2) (81 . 83) ("が" . -81) ((marker) . -1) (81 . 82) ("g" . -81) ((marker) . -1) (81 . 82) (" " . -81) ((marker) . -1) 82 nil (77 . 82) nil (75 . 77) nil (73 . 75) nil (72 . 73) nil (70 . 72) nil (59 . 70) nil ("
" . 59) ((marker . 20) . -1) nil (56 . 59) nil (51 . 56) nil (49 . 51) nil (48 . 49) nil (48 . 51) nil (47 . 48) nil (44 . 47) nil (" " . -44) ((marker) . -1) 45 nil (42 . 45) nil ("P" . -42) ((marker) . -1) (" " . -43) ((marker) . -1) ("=" . -44) ((marker) . -1) 45 nil (42 . 45) nil (41 . 42) nil (37 . 41) nil (19 . 20) nil (11 . 19) ("ios" . -11) ((marker . 19) . -3) ((marker) . -3) 14 nil (11 . 14) nil (10 . 11) nil (9 . 10) nil (" \"car.h\"" . -9) ((marker . 19) . -8) ((marker) . -8) 17 nil (31 . 34) nil ("CCar *pC = 0;
  pC = new CCar();
  pC->supply(10);
  pC->move();
  pC->move();
  delete pC;
  cout << \"インスタンスの消去終了\" << endl;
  " . 34) ((marker) . -127) ((marker . 1) . -125) ((marker) . -127) 161 (t 23602 60729 682079 404000) nil (157 . 158) nil (152 . 157) nil (150 . 152) nil (137 . 150) ("インスタンスの消去終了" . -137) ((marker) . -11) (137 . 148) ("インスタンスの消去修理" . -137) (137 . 148) ("インスタンスの消去しゅうry" . -137) ((marker) . -14) (137 . 151) ("インスタンスの消去しゅうr" . -137) ((marker) . -13) (137 . 150) ("インスタンスの消去集" . -137) ((marker) . -10) (137 . 147) ("インスタンスの消去しゅ" . -137) ((marker) . -11) (137 . 148) ("インスタンスの消去sy" . -137) ((marker) . -11) (137 . 148) ("インスタンスの消去s" . -137) ((marker) . -10) (137 . 147) ("インスタンスの消去" . -137) ((marker) . -9) (137 . 146) ("インスタンスのしょうky" . -137) ((marker) . -12) (137 . 149) ("インスタンスのしょうk" . -137) ((marker) . -11) (137 . 148) ("インスタンスの小" . -137) ((marker) . -8) (137 . 145) ("インスタンスの書" . -137) ((marker) . -8) (137 . 145) ("インスタンスのsy" . -137) (137 . 146) ("インスタンスのs" . -137) ((marker) . -8) (137 . 145) ("インスタンスの" . -137) ((marker) . -7) (137 . 144) ("インスタンスn" . -137) ((marker) . -7) (137 . 144) ("インスタンス" . -137) ((marker) . -6) (137 . 143) ("インスタンs" . -137) ((marker) . -6) (137 . 143) ("インスタン" . -137) ((marker) . -5) (137 . 142) ("インスタn" . -137) ((marker) . -5) (137 . 142) ("インスタ" . -137) ((marker) . -4) (137 . 141) ("インスt" . -137) ((marker) . -4) (137 . 141) ("インス" . -137) (137 . 140) ("インス" . -137) (137 . 140) ("インス" . -137) (137 . 140) ("インス" . -137) (137 . 140) ("インス" . -137) ((marker) . -3) (135 . 140) nil (133 . 135) nil (131 . 133) nil (" " . -131) ((marker) . -1) ("t" . -132) ((marker) . -1) ("<" . -133) ((marker) . -1) 134 nil (133 . 134) nil (128 . 133) nil (125 . 128) nil (124 . 125) nil (115 . 124) nil (112 . 115) nil (111 . 112) nil (109 . 111) nil (105 . 109) nil (104 . 105) nil (101 . 104) nil (98 . 101) nil (97 . 98) nil (95 . 97) nil (91 . 95) nil (90 . 91) nil (87 . 90) nil (84 . 87) nil (83 . 84) nil (82 . 83) nil (80 . 82) nil (79 . 80) nil (73 . 79) ("sup" . -73) ((marker) . -3) 76 nil (73 . 76) nil (72 . 73) nil (71 . 72) nil ("^" . -71) ((marker) . -1) (">" . -72) ((marker) . -1) 73 nil (72 . 73) nil (71 . 72) nil ("0" . -71) ((marker) . -1) (">" . -72) ((marker) . -1) 73 nil (72 . 73) nil (71 . 72) nil ("=" . -71) ((marker) . -1) 72 nil (69 . 72) nil ("C" . -69) ((marker) . -1) 70 nil (69 . 70) nil (66 . 69) nil (65 . 66) nil (63 . 65) nil (59 . 63) nil (50 . 59) nil (47 . 50) nil (41 . 42) nil ("c" . -41) ((marker) . -1) 42 nil (46 . 47) nil (40 . 46) nil (39 . 40) nil (34 . 39) nil (32 . 34) nil (33 . 35) ("  " . 32) ((marker) . -2) (31 . 35) nil (32 . 34) ("   " . 32) ((marker) . -1) 33 nil ("
" . 33) ((marker . 20) . -1) nil ("  c.move();" . 33) nil ("
" . 33) ((marker . 20) . -1) nil ("  c.move();" . 33) nil ("
" . 33) ((marker . 20) . -1) nil ("  c.supply(10);" . 33) nil ("
" . 33) ((marker . 20) . -1) nil (" CCar c;" . 33) (t 23602 59172 872223 403000) nil (95 . 96) nil ("  " . 94) ((marker) . -2) ((marker . 20) . -2) (96 . 97) nil (93 . 96) nil (92 . 93) nil (84 . 92) nil (81 . 84) nil (80 . 81) nil (78 . 80) nil (72 . 78) nil (69 . 72) nil (68 . 69) nil (66 . 68) nil (60 . 66) nil (57 . 60) nil (56 . 57) nil (55 . 56) nil (53 . 55) nil (52 . 53) nil (46 . 52) ("supp" . -46) ((marker) . -4) ((marker . 20) . -4) 50 nil (47 . 50) nil (44 . 47) nil (41 . 44) nil (40 . 41) nil (36 . 40) nil ("A" . -36) ((marker) . -1) ((marker . 20) . -1) ("r" . -37) ((marker) . -1) ((marker . 20) . -1) 38 nil (34 . 38) nil (31 . 34) nil (30 . 31) nil (29 . 30) nil (27 . 29) nil (19 . 27) nil (17 . 19) nil (9 . 17) nil (2 . 9) ("inclu" . -2) ((marker . 19) . -5) ((marker) . -5) ((marker . 20) . -5) 7 nil (2 . 7) nil (1 . 2) (t 23602 58657 942670 0) nil ("#include <iostream>
#include \"calculation.h\"
 
using namespace std;
 
int main(){
    Calculation c;
    c.setNumber1(8);    //  一つ目の数をセット
    c.setNumber2(9);    //  二つ目の数をセット
    //  二つの数の和を表示
    cout << c.getNumber1() << \" + \" << c.getNumber2() << \" = \" << c.add() << endl;
    //  二つの数の差を表示
    cout << c.getNumber1() << \" - \" << c.getNumber2() << \" = \" << c.sub() << endl;
    return 0;
}" . 1) ((marker . 19) . -19) ((marker . 221) . -394) ((marker . 1) . -394) ((marker) . -394) ((marker . 20) . -20) ((marker) . -394) nil ("
" . 395) ((marker . 20) . -1) (t 23602 58001 108998 718000) nil (nil rear-nonsticky nil 394 . 395) (nil fontified nil 302 . 395) (nil fontified nil 301 . 302) (nil fontified nil 297 . 301) (nil fontified nil 284 . 297) (nil fontified nil 279 . 284) (nil fontified nil 201 . 279) (nil fontified nil 200 . 201) (nil fontified nil 196 . 200) (nil fontified nil 165 . 196) (nil fontified nil 160 . 165) (nil fontified nil 49 . 160) (nil fontified nil 48 . 49) (nil fontified nil 46 . 48) (nil fontified nil 22 . 46) (nil fontified nil 21 . 22) (nil fontified nil 2 . 21) (nil fontified nil 1 . 2) (1 . 395) (t 23602 57991 827887 751000) nil ("#include <iostream>
#include \"twostrings.h\"
 
using namespace std;
 
int main(){
    TwoStrings s;
    s.setString1(\"Hello\");
    s.setString2(\"World\");
    cout << \"一つ目の文字列は\" << s.getString1() << endl;
    cout << \"二つ目の文字列は\" << s.getString2() << endl;
    cout << \"二つの文字列を合成したものは\" << s.getConnectedString() << endl;
    cout << \"合成した文字列の長さは\" << s.getConnectedLength() << \"文字\" << endl;
    return 0;
}" . 1) ((marker . 19) . -19) ((marker . 221) . -401) ((marker . 1) . -401) ((marker) . -401) ((marker . 20) . -20) ((marker) . -401) (t 23602 57603 461070 514000) nil (402 . 403) nil (nil rear-nonsticky nil 401 . 402) (nil fontified nil 48 . 402) (nil fontified nil 47 . 48) (nil fontified nil 45 . 47) (nil fontified nil 22 . 45) (nil fontified nil 21 . 22) (nil fontified nil 2 . 21) (nil fontified nil 1 . 2) (1 . 402) nil ("#include <iostream>
#include \"data.h\"
 
using namespace std;
 
int main(){
    CData d;
    d.init();   //  パラメータを初期化
    d.setNumber(100);
    d.setComment(\"Programming C++\");
    cout << \"number = \" << d.getNumber() << \" comment = \" << d.getComment() << endl;
    return 0;
}
" . 1) ((marker . 19) . -19) ((marker . 1) . -1) ((marker) . -1) ((marker) . -278) ((marker . 1) . -278) ((marker . 20) . -278) ((marker) . -278) 279 (t 23602 57132 788341 15000) nil undo-tree-canary))
