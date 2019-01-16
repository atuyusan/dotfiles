
((digest . "d41d8cd98f00b204e9800998ecf8427e") (undo-list nil ("#include<iostream>
#include<string>

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

// 文字->数字
int getChar(char ch) {
  if (ch == 'A') return 1;
  else if (ch == 'B') return 2;
  else if (ch == 'C') return 3;
  else if (ch == 'D') return 4;
  else return 0;
}

// key生成
long long getKey(char str[]) {
  long long sum = 0, p = 1, i;
  for (i = 0; i< strlen(str); i++) {
    sum += p * (getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key) {
  return key % M;
}

int h2(int key) {
  return 1 + (key % (M - 1));
}

int find(char str[]) {
  long long key, i, h;
  key = getKey(str);
  for (i = 0;;i++) {
    h = (h1(key) + i * h2(key)) % M;
    if (H[h] == str) return 1;
    else if strlen(H[h] == 0) return 0;
  }
  return 0;
}

int insert(char str[]) {
  long long key, i, h;
  key = getKey(str);
  for (i = 0; ; i++) {
    h = (h1(key) + i * h2(key)) % M;
    if (H[h] == str) return 1;
    else if (strlen(H[h]) == 0) {
      H[h] = str;
      return 0;
    }
  }
  return 0;
}

int main() {
  int i, n, h;
  char str[L], com[9];
  for (i = 0; i < M; i++) H[i][0] = '\\0';
  scanf(\"%d\", &n);
  for (i = 0; i < n; i++) {
    scanf(\"%s %s\", com, str);

    if (com[0] == 'i') {
      insert(str);
    } else {
      if (find(str)) {
        printf(\"yes\\n\");
      } else {
        printf(\"no\\n\");
      }
    }
  }
  return 0;
}
" . 1) ((marker . 1) . -18) ((marker . 1) . -1357) ((marker . 1) . -1357) ((marker . 1) . -491) ((marker . 1) . -1010) ((marker . 1) . -1357) ((marker) . -969) ((marker) . -969) ((marker) . -985) ((marker) . -985) ((marker) . -991) ((marker) . -991) ((marker) . -995) ((marker) . -995) ((marker) . -1010) ((marker) . -1010) ((marker) . -1009) ((marker) . -1009) ((marker) . -1007) ((marker) . -1007) ((marker) . -951) ((marker) . -951) ((marker) . -917) ((marker) . -917) ((marker) . -1325) ((marker) . -1325) ((marker) . -1180) ((marker) . -1180) ((marker) . -1333) ((marker) . -1333) ((marker) . -757) ((marker) . -757) ((marker) . -1339) ((marker) . -1339) ((marker) . -1181) ((marker) . -1181) ((marker) . -742) ((marker) . -742) ((marker) . -738) ((marker) . -738) ((marker) . -698) ((marker) . -698) ((marker) . -886) ((marker) . -886) ((marker) . -849) ((marker) . -849) ((marker) . -826) ((marker) . -826) ((marker) . -805) ((marker) . -805) ((marker) . -782) ((marker) . -782) ((marker) . -756) ((marker) . -756) ((marker) . -754) ((marker) . -754) ((marker) . -667) ((marker) . -667) ((marker) . -630) ((marker) . -630) ((marker) . -609) ((marker) . -609) ((marker) . -1206) ((marker) . -1206) ((marker) . -1225) ((marker) . -1225) ((marker) . -565) ((marker) . -565) ((marker) . -542) ((marker) . -542) ((marker) . -541) ((marker) . -541) ((marker) . -588) ((marker) . -588) ((marker) . -539) ((marker) . -539) ((marker) . -509) ((marker) . -509) ((marker) . -491) ((marker) . -491) ((marker) . -1023) ((marker) . -1023) ((marker) . -1038) ((marker) . -1038) ((marker) . -1061) ((marker) . -1061) ((marker) . -1103) ((marker) . -1103) ((marker) . -1122) ((marker) . -1122) ((marker) . -1150) ((marker) . -1150) ((marker) . -1238) ((marker) . -1238) ((marker) . -1261) ((marker) . -1261) ((marker) . -1286) ((marker) . -1286) ((marker) . -1301) ((marker) . -1301) ((marker) . -1343) ((marker) . -1343) ((marker) . -1355) ((marker) . -1355) ((marker) . -1357) ((marker) . -1357) 1358 (t 23612 30235 752219 184000) nil (1357 . 1358) nil ("    
" . 1357) ((marker . 1) . -5) nil ("                            
" . 1357) ((marker . 1) . -29) nil ("    
" . 1357) ((marker . 1) . -5) nil ("
" . 1357) ((marker . 1) . -1) (t 23612 30233 288542 506000) nil ("    " . 1356) ((marker . 1) . -4) (1360 . 1361) nil (1354 . 1355) nil (1353 . 1354) nil ("0" . -1353) ((marker . 1) . -1) ("-" . -1354) ((marker . 1) . -1) 1355 nil (1346 . 1355) nil (1343 . 1346) nil (1340 . 1342) ("    " . 1340) ((marker . 1) . -4) (1344 . 1345) nil (1339 . 1344) nil (1339 . 1344) nil (1334 . 1338) ("      " . 1334) ((marker . 1) . -6) (1340 . 1341) nil (1333 . 1340) nil (1326 . 1332) ("        " . 1326) ((marker . 1) . -8) (1334 . 1335) nil (1325 . 1334) nil (1324 . 1325) nil (1323 . 1324) nil (1317 . 1323) nil (1316 . 1317) nil (1310 . 1316) nil (1301 . 1310) nil (1300 . 1301) nil (1299 . 1300) ("else" . 1299) ((marker . 1) . -4) (1295 . 1299) 1299 nil (1294 . 1299) nil (1287 . 1293) ("        " . 1287) 1296 nil (1262 . 1270) ("          " . 1262) 1282 nil (1258 . 1259) nil (" " . -1297) ((marker . 1) . -1) ("e" . -1298) ((marker . 1) . -1) 1299 nil (1297 . 1299) nil (1288 . 1296) ("          " . 1288) ((marker . 1) . -10) (1298 . 1299) nil (1287 . 1298) nil (1286 . 1287) nil (1285 . 1286) nil (1282 . 1284) nil (1278 . 1283) nil (1277 . 1278) nil (1271 . 1277) nil ("p" . -1271) ((marker . 1) . -1) 1272 nil ("r" . -1272) ((marker . 1) . -1) ("i" . -1273) ((marker . 1) . -1) ("n" . -1274) ((marker . 1) . -1) ("t" . -1275) ((marker . 1) . -1) 1276 nil (1271 . 1276) nil (1260 . 1271) nil (1259 . 1260) nil (1258 . 1259) nil (1257 . 1258) nil (1254 . 1257) nil (1253 . 1254) nil (1249 . 1253) nil (1248 . 1249) nil (1245 . 1248) nil (1238 . 1245) nil (1237 . 1238) nil (1236 . 1237) ("else" . 1236) ((marker . 1) . -4) (1232 . 1236) 1236 nil (1231 . 1236) nil (1226 . 1230) ("      " . 1226) ((marker . 1) . -6) (1232 . 1233) nil (1225 . 1232) nil (1224 . 1225) nil (1223 . 1224) nil (1220 . 1223) nil (1219 . 1220) nil (1213 . 1219) nil (1206 . 1213) nil (1205 . 1206) nil (1204 . 1205) nil (1203 . 1204) nil (1202 . 1203) nil ("(" . -1202) ((marker . 1) . -1) 1203 nil (1202 . 1203) nil (1190 . 1202) nil (1189 . 1190) nil (1186 . 1189) nil (1182 . 1186) ("    " . 1181) ((marker . 1) . -4) (1185 . 1186) nil (1180 . 1185) nil (1179 . 1180) nil (1178 . 1179) nil (1174 . 1178) nil (1173 . 1174) nil (1169 . 1173) nil (1168 . 1169) nil (1161 . 1168) nil (1160 . 1161) nil (1155 . 1160) nil (1150 . 1155) nil ("s" . -1155) ((marker . 1) . -1) ("c" . -1156) ((marker . 1) . -1) ("a" . -1157) ((marker . 1) . -1) ("n" . -1158) ((marker . 1) . -1) ("f" . -1159) ((marker . 1) . -1) 1160 nil (1155 . 1160) nil (1150 . 1155) nil (1149 . 1150) nil (1148 . 1149) nil (1147 . 1148) nil (1145 . 1147) nil ("*" . -1145) ((marker . 1) . -1) ("+" . -1146) ((marker . 1) . -1) ("*" . -1147) ((marker . 1) . -1) 1148 nil (1147 . 1148) nil (1146 . 1147) nil (1145 . 1146) nil (1143 . 1145) nil (1142 . 1143) nil (1140 . 1142) nil (1139 . 1140) nil (1136 . 1139) nil (1135 . 1136) nil (1130 . 1135) nil (" " . -1130) ((marker . 1) . -1) 1131 nil (1130 . 1131) nil (1129 . 1130) nil (1125 . 1129) nil (1122 . 1125) nil (1121 . 1122) nil (1120 . 1121) nil (1117 . 1120) nil (1116 . 1117) nil (" " . -1116) ((marker . 1) . -1) 1117 nil (1112 . 1117) nil ("%" . -1112) ((marker . 1) . -1) 1113 nil ("d" . -1113) ((marker . 1) . -1) ("\"" . -1114) ((marker . 1) . -1) 1115 nil (1112 . 1115) nil (1111 . 1112) nil (1106 . 1111) nil (1103 . 1106) nil (1102 . 1103) nil (1099 . 1102) nil ("^" . -1099) ((marker . 1) . -1) 1100 nil (1098 . 1100) nil (1092 . 1098) nil (1092 . 1121) nil (1090 . 1092) nil (1088 . 1090) nil ("{" . -1088) ((marker . 1) . -1) 1089 nil (1089 . 1094) nil (1088 . 1089) nil ("[" . -1088) ((marker . 1) . -1) 1089 nil (1087 . 1089) nil (1086 . 1087) nil (1082 . 1086) nil (1081 . 1082) nil (1080 . 1081) nil ("N" . -1080) ((marker . 1) . -1) 1081 nil (1079 . 1081) nil (1078 . 1079) nil (1075 . 1078) nil (1074 . 1075) nil (1069 . 1074) nil (1068 . 1069) nil (1064 . 1068) nil (1061 . 1064) nil (1060 . 1061) nil (1053 . 1060) nil (1052 . 1053) nil (1049 . 1052) nil (1041 . 1049) nil (1038 . 1041) nil (1037 . 1038) nil (1035 . 1037) nil (1034 . 1035) nil (1032 . 1034) nil (1031 . 1032) nil (1026 . 1031) nil (1023 . 1026) nil (1022 . 1023) nil (1021 . 1022) nil (1019 . 1021) nil (1011 . 1019) nil (1009 . 1011) (t 23612 29941 455706 15000) nil ("  " . 1008) ((marker . 1) . -2) (1010 . 1011) nil (1007 . 1010) nil (1006 . 1007) nil (998 . 1006) nil (995 . 998) nil ("*" . -995) ((marker . 1) . -1) 996 nil (995 . 996) nil (992 . 994) ("    " . 992) ((marker . 1) . -4) (996 . 997) nil (991 . 996) nil (986 . 990) ("      " . 986) ((marker . 1) . -6) (992 . 993) nil (985 . 992) nil (984 . 985) nil (976 . 984) nil (969 . 976) nil (968 . 969) nil (965 . 968) nil ("\"" . -965) ((marker . 1) . -1) 966 nil (965 . 966) nil (958 . 965) nil (951 . 958) nil (950 . 951) nil (949 . 950) nil (948 . 949) nil (943 . 948) nil (942 . 943) nil (938 . 942) nil (937 . 938) nil (931 . 937) nil (930 . 931) nil (927 . 930) nil (926 . 927) (" x" . -926) (926 . 928) ("else" . 926) ((marker . 1) . -4) (922 . 926) 926 nil (922 . 926) nil (917 . 922) nil (916 . 917) nil (907 . 916) nil (906 . 907) nil (903 . 906) nil (895 . 903) nil ("s" . -895) ((marker . 1) . -1) 896 nil (895 . 896) nil (894 . 895) nil (891 . 894) nil (886 . 891) nil (885 . 886) nil (881 . 885) nil (879 . 881) nil (876 . 879) nil (875 . 876) nil (872 . 875) nil (871 . 872) nil (870 . 871) nil ("*" . -870) ((marker . 1) . -1) 871 nil (870 . 871) nil (866 . 870) nil (865 . 866) nil (862 . 865) nil (861 . 862) nil (859 . 861) nil (858 . 859) nil (854 . 858) nil (849 . 854) nil (848 . 849) nil (847 . 848) nil (846 . 847) nil (842 . 846) nil (841 . 842) nil ("i" . -841) ((marker . 1) . -1) (" " . -842) ((marker . 1) . -1) 843 nil (841 . 843) nil (840 . 841) nil (839 . 840) nil (834 . 839) nil (833 . 834) nil (829 . 833) nil (826 . 829) nil (825 . 826) nil (824 . 825) nil (821 . 824) nil (820 . 821) nil (814 . 820) ("get" . -814) ((marker . 1) . -3) 817 nil (808 . 817) nil (805 . 808) nil (804 . 805) nil (802 . 804) nil (801 . 802) nil (799 . 801) nil (798 . 799) nil (785 . 798) nil (782 . 785) nil (781 . 782) nil (780 . 781) nil (779 . 780) nil (772 . 779) nil (769 . 772) nil (768 . 769) nil (758 . 768) nil (756 . 758) nil ("  " . 755) ((marker . 1) . -2) (757 . 758) nil (754 . 757) nil (753 . 754) nil (745 . 753) nil (742 . 745) nil (739 . 741) ("    " . 739) ((marker . 1) . -4) (743 . 744) nil (738 . 743) nil (737 . 738) nil (736 . 737) nil ("1" . -736) ((marker . 1) . -1) 737 nil (731 . 737) nil ("r" . -731) ((marker . 1) . -1) ("u" . -732) ((marker . 1) . -1) ("n" . -733) ((marker . 1) . -1) 734 nil (728 . 734) nil (727 . 728) nil (")" . -722) ((marker . 1) . -1) ((marker*) . 1) ((marker) . -1) 723 nil (")" . -728) ((marker . 1) . -1) ((marker*) . 1) ((marker) . -1) 729 nil (728 . 729) nil ("-" . -728) ((marker . 1) . -1) 729 nil (723 . 729) nil (722 . 723) nil (717 . 718) nil (716 . 717) nil ("(" . -716) ((marker . 1) . -1) 717 nil (716 . 717) nil (711 . 716) (t 23612 29755 496537 788000) nil (713 . 715) nil ("j" . -713) ((marker . 1) . -1) ((marker) . -1) ("]" . -714) ((marker . 1) . -1) ((marker*) . 1) ((marker) . -1) 715 nil (711 . 715) nil ("G" . -711) ((marker . 1) . -1) ("H" . -712) ((marker . 1) . -1) 713 nil (711 . 713) nil (708 . 711) nil (707 . 708) (" x" . -707) (707 . 709) ("else" . 707) ((marker . 1) . -4) (703 . 707) 707 nil (703 . 707) nil (698 . 703) nil (697 . 698) nil (688 . 697) nil (687 . 688) nil (678 . 687) nil ("j" . -678) ((marker . 1) . -1) ((marker) . -1) ("]" . -679) ((marker . 1) . -1) ((marker*) . 1) ((marker) . -1) 680 nil (676 . 680) nil ("s" . -676) ((marker . 1) . -1) ("t" . -677) ((marker . 1) . -1) ("r" . -678) ((marker . 1) . -1) 679 nil (676 . 679) nil (675 . 676) nil (672 . 675) nil (667 . 672) nil (666 . 667) nil (662 . 666) nil (660 . 662) nil (657 . 660) nil ("e" . -657) ((marker . 1) . -1) ("y" . -658) ((marker . 1) . -1) 659 nil (657 . 659) nil (656 . 657) nil (654 . 656) nil ("s" . -654) ((marker . 1) . -1) ("h" . -655) ((marker . 1) . -1) 656 nil (653 . 656) nil (652 . 653) nil (647 . 652) nil (646 . 647) nil (643 . 646) nil (642 . 643) nil (640 . 642) nil (639 . 640) nil (637 . 639) nil ("-" . -637) ((marker . 1) . -1) (" " . -638) ((marker . 1) . -1) 639 nil (635 . 639) nil (630 . 635) nil (629 . 630) nil (628 . 629) nil (627 . 628) nil (624 . 627) nil (623 . 624) nil (622 . 623) nil (621 . 622) nil (" " . -621) ((marker . 1) . -1) ("0" . -622) ((marker . 1) . -1) 623 nil (617 . 623) nil ("i" . -617) ((marker . 1) . -1) 618 nil (617 . 618) nil (616 . 617) nil (612 . 616) nil (609 . 612) nil (608 . 609) nil (607 . 608) nil (604 . 607) nil (603 . 604) nil (597 . 603) ("getKe" . -597) ((marker . 1) . -5) 602 nil (601 . 602) nil ("8" . -601) ((marker . 1) . -1) 602 nil (591 . 602) nil (588 . 591) nil (587 . 588) nil (585 . 587) nil (584 . 585) nil (582 . 584) nil (581 . 582) nil (568 . 581) nil (565 . 568) nil (564 . 565) nil (563 . 564) nil (562 . 563) nil (552 . 562) nil (551 . 552) nil (543 . 551) nil (541 . 543) nil ("  " . 540) ((marker . 1) . -2) (542 . 543) nil (539 . 542) nil (538 . 539) nil (536 . 538) nil (534 . 536) nil ("1" . -534) ((marker . 1) . -1) ((marker) . -1) 535 nil (" " . -535) ((marker . 1) . -1) ((marker) . -1) (")" . -536) ((marker . 1) . -1) ((marker*) . 1) ((marker) . -1) 537 nil (536 . 537) nil (531 . 536) nil (530 . 531) nil (527 . 530) nil (523 . 524) nil (522 . 526) nil (512 . 522) nil (509 . 512) nil (508 . 509) nil (507 . 508) nil (506 . 507) nil (499 . 506) nil (498 . 499) nil (" " . -498) ((marker . 1) . -1) 499 nil (497 . 499) nil (492 . 497) nil (490 . 492) nil ("  " . 489) ((marker . 1) . -2) (491 . 492) nil (488 . 491) nil (487 . 488) nil (473 . 487) nil (470 . 473) nil (469 . 470) nil (468 . 469) nil (467 . 468) nil (460 . 467) nil (459 . 460) nil (453 . 459) nil (451 . 453) (t 23612 29503 692944 421000) nil ("  " . 450) ((marker . 1) . -2) (452 . 453) nil (449 . 452) nil (448 . 449) nil (438 . 448) nil (435 . 438) nil (432 . 434) ("    " . 432) ((marker . 1) . -4) (436 . 437) nil (431 . 436) nil (430 . 431) nil (427 . 430) nil (426 . 427) nil (424 . 426) nil (419 . 424) nil (418 . 419) nil (417 . 418) nil ("0" . -417) ((marker . 1) . -1) 418 nil (417 . 418) nil (416 . 417) nil (410 . 416) nil (409 . 410) nil (402 . 409) ("getCha" . -402) ((marker . 1) . -6) 408 nil (402 . 408) nil (401 . 402) nil (400 . 401) nil (399 . 400) nil (397 . 399) nil (390 . 397) nil (385 . 390) nil (384 . 385) nil (383 . 384) nil (382 . 383) nil (378 . 382) nil (377 . 378) nil (" " . -377) ((marker . 1) . -1) 378 nil (377 . 378) nil (376 . 377) nil (")" . -376) ((marker . 1) . -1) (" " . -377) ((marker . 1) . -1) 378 nil ("      for " . 378) nil ("{" . -378) ((marker . 1) . -1) 379 nil ("
" . 379) ((marker . 1) . -1) nil (386 . 390) nil (379 . 386) nil (378 . 379) nil (377 . 378) nil (376 . 377) nil (373 . 376) nil (372 . 373) nil ("8" . -372) ((marker . 1) . -1) 373 nil (367 . 373) nil ("g" . -367) ((marker . 1) . -1) ("r" . -368) ((marker . 1) . -1) ("l" . -369) ((marker . 1) . -1) ("e" . -370) ((marker . 1) . -1) ("n" . -371) ((marker . 1) . -1) 372 nil (366 . 372) (t 23612 29398 354306 340000) nil (366 . 367) nil ("s" . -366) ((marker . 1) . -1) ((marker . 1) . -1) ("t" . -367) ((marker . 1) . -1) ((marker . 1) . -1) 368 nil ("r" . -368) ((marker . 1) . -1) ((marker . 1) . -1) ("l" . -369) ((marker . 1) . -1) ((marker . 1) . -1) ("e" . -370) ((marker . 1) . -1) ((marker . 1) . -1) ("n" . -371) ((marker . 1) . -1) ((marker . 1) . -1) ("(" . -372) ((marker . 1) . -1) ((marker . 1) . -1) 373 nil (372 . 373) nil (365 . 372) nil (364 . 365) nil (362 . 364) nil (361 . 362) nil (359 . 361) nil ("0" . -359) ((marker . 1) . -1) ((marker . 1) . -1) 360 nil (356 . 360) nil (355 . 356) nil (351 . 355) nil (348 . 351) nil (347 . 348) nil (345 . 347) nil (344 . 345) nil (339 . 344) nil (" " . -339) ((marker . 1) . -1) ((marker . 1) . -1) 340 nil (338 . 340) nil (337 . 338) nil (320 . 337) nil (317 . 320) nil (316 . 317) nil (315 . 316) nil (314 . 315) nil (304 . 314) nil (303 . 304) nil (302 . 303) nil (289 . 302) nil ("g" . -289) ((marker . 1) . -1) ((marker . 1) . -1) 290 nil (287 . 290) nil (286 . 287) nil (284 . 286) nil ("生成" . -284) ((marker . 1) . -2) (284 . 286) ("せいせ" . -284) ((marker . 1) . -3) (284 . 287) ("姓s" . -284) ((marker . 1) . -2) (284 . 286) ("姓" . -284) ((marker . 1) . -1) (284 . 285) ("せ" . -284) ((marker . 1) . -1) (284 . 285) ("s" . -284) ((marker . 1) . -1) (284 . 285) ("汗" . -284) ((marker . 1) . -1) ((marker . 1) . -1) ("生" . -285) ((marker . 1) . -1) ((marker . 1) . -1) ("　" . -286) ((marker . 1) . -1) ((marker . 1) . -1) 287 nil (286 . 287) nil (281 . 286) ("も" . -281) ((marker . 1) . -1) (281 . 282) ("もっ" . -281) ((marker . 1) . -2) (281 . 283) ("もっj" . -281) ((marker . 1) . -3) (281 . 284) ("もj" . -281) ((marker . 1) . -2) (281 . 283) ("も" . -281) ((marker . 1) . -1) (281 . 282) ("m" . -281) ((marker . 1) . -1) (280 . 282) nil (278 . 280) (t 23612 29221 635499 72000) nil (276 . 278) nil ("  " . 275) ((marker . 1) . -2) ((marker . 1) . -2) (277 . 278) nil (274 . 277) nil (273 . 274) nil (265 . 273) nil (264 . 265) (" x" . -264) (264 . 266) ("else" . 264) ((marker . 1) . -4) ((marker . 1) . -4) (260 . 264) 264 nil (260 . 264) nil ("*" . -260) ((marker . 1) . -1) ((marker . 1) . -1) 261 nil (260 . 261) nil (257 . 260) nil (256 . 257) nil (247 . 256) nil (246 . 247) nil (243 . 246) nil (237 . 243) nil (236 . 237) nil (235 . 236) nil ("(" . -235) ((marker . 1) . -1) ((marker . 1) . -1) 236 nil (235 . 236) nil (233 . 235) nil (232 . 233) (" x" . -232) (232 . 234) ("else" . 232) ((marker . 1) . -4) ((marker . 1) . -4) (228 . 232) 232 nil (228 . 232) nil (225 . 228) nil (224 . 225) nil (215 . 224) nil (214 . 215) nil (205 . 214) nil (204 . 205) nil (202 . 204) nil (201 . 202) nil (200 . 201) (" x" . -200) (200 . 202) ("else" . 200) ((marker . 1) . -4) ((marker . 1) . -4) (196 . 200) 200 nil (196 . 200) nil (193 . 196) nil (192 . 193) nil (183 . 192) nil (182 . 183) nil (173 . 182) nil (172 . 173) nil (169 . 172) nil (168 . 169) (" x" . -168) (168 . 170) ("else" . 168) ((marker . 1) . -4) ((marker . 1) . -4) (164 . 168) 168 nil (164 . 168) nil ("i" . -164) ((marker . 1) . -1) ((marker . 1) . -1) 165 nil (164 . 165) nil (162 . 164) ("  " . 162) ((marker . 1) . -2) (161 . 162) nil (160 . 161) nil (151 . 160) nil (150 . 151) nil (146 . 150) nil (141 . 146) nil (140 . 141) nil (137 . 140) nil ("
" . 137) ((marker . 1) . -1) nil (134 . 137) nil (133 . 134) nil (132 . 133) nil (132 . 135) nil (109 . 111) nil ("数字" . -109) ((marker . 1) . -2) (109 . 111) ("数j" . -109) ((marker . 1) . -2) (109 . 111) ("数" . -109) ((marker . 1) . -1) (109 . 110) ("す" . -109) ((marker . 1) . -1) (109 . 110) ("s" . -109) ((marker . 1) . -1) (108 . 110) nil (105 . 108) ("文字" . -105) ((marker . 1) . -2) 107 nil (105 . 107) ("もj" . -105) ((marker . 1) . -2) (105 . 107) ("も" . -105) ((marker . 1) . -1) (105 . 106) ("m" . -105) ((marker . 1) . -1) (104 . 106) nil (102 . 104) nil ("#" . -102) ((marker . 1) . -1) (" " . -103) ((marker . 1) . -1) 104 nil (103 . 104) nil (102 . 103) nil (101 . 102) nil (121 . 122) nil (114 . 121) nil ("C" . -114) ((marker . 1) . -1) ((marker . 1) . -1) ("h" . -115) ((marker . 1) . -1) ((marker . 1) . -1) ("a" . -116) ((marker . 1) . -1) ((marker . 1) . -1) ("r" . -117) ((marker . 1) . -1) ((marker . 1) . -1) 118 nil (114 . 118) nil (113 . 114) nil (102 . 113) nil (100 . 102) nil (99 . 100) nil (95 . 99) nil ("}" . -95) ((marker . 1) . -1) ((marker . 1) . -1) ((marker*) . 1) ((marker) . -1) 96 nil (95 . 96) nil (87 . 95) nil ("c" . -87) ((marker . 1) . -1) ((marker . 1) . -1) ("a" . -88) ((marker . 1) . -1) ((marker . 1) . -1) ("h" . -89) ((marker . 1) . -1) ((marker . 1) . -1) ("r" . -90) ((marker . 1) . -1) ((marker . 1) . -1) 91 nil (87 . 91) (t 23612 29084 22397 486000) nil (85 . 87) nil (81 . 85) nil (74 . 81) nil (73 . 74) nil (72 . 73) nil (71 . 72) nil (69 . 71) nil (68 . 69) nil (58 . 68) nil ("d" . -58) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 59 nil (57 . 59) nil (56 . 57) nil (55 . 56) nil (49 . 55) nil (46 . 49) nil ("N" . -46) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 47 nil (39 . 47) nil ("d" . -39) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ("f" . -40) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ("i" . -41) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ("n" . -42) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ("e" . -43) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 44 nil (41 . 44) nil ("f" . -41) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ("i" . -42) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ("n" . -43) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 44 nil (39 . 44) nil (" " . -39) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ("d" . -40) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 41 nil (39 . 41) nil (38 . 39) nil (36 . 38) nil (35 . 36) nil (32 . 35) nil ("i" . -32) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 33 nil ("
" . -33) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 34 nil (33 . 34) nil (29 . 33) nil (28 . 29) nil (21 . 28) ("inc" . -21) ((marker . 1) . -3) ((marker . 1) . -3) ((marker . 1) . -3) 24 nil (21 . 24) nil (20 . 21) nil (19 . 20) nil (18 . 19) nil (10 . 18) ("ios" . -10) ((marker . 1) . -3) ((marker . 1) . -3) ((marker . 1) . -3) 13 nil (10 . 13) nil ("s" . -10) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 11 nil (10 . 11) nil (9 . 10) nil (2 . 9) ("inc" . -2) ((marker . 1) . -3) ((marker . 1) . -3) ((marker . 1) . -3) 5 nil (2 . 5) nil (1 . 2) nil ("# include<" . 1) ((marker . 1) . -10) ((marker . 1) . -10) nil (10 . 11) nil (3 . 10) ("inc" . -3) ((marker . 1) . -3) ((marker . 1) . -3) ((marker . 1) . -3) 6 nil (2 . 6) nil (1 . 2) nil ("#" . -1) ((marker . 1) . -1) ((marker . 1) . -1) 2 nil (1 . 2) (t 23612 23778 537678 549000) nil ("#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;

class Dictionary {
public:
  void insert(string str) {
    dict.push_back(str);
  };

  string find(string str) {
    for (int i = 0; i < dict.size(); i++) {
      if (str ==  dict[i]) return \"yes\";
    }
    return \"no\";
  };

private:
  vector<string> dict;
};
    
int main() {
  int i, n;
  string s1, s2;
  vector<string> command, str;
  Dictionary dict;

  cin >> n;
  for (i = 0; i < n; i++) {
    scanf(\"%s %s\", &s1[0], &s2[0]);
    command.push_back(s1);
    str.push_back(s2);
  }  

  for (i = 0; i < n; i++) {
    if (command[i] == \"insert\") dict.insert(str[i]);
    else if (command[i] == \"find\") cout << dict.find(str[i]) << endl;
  }

  return 0;
}
" . 1) ((marker . 1) . -53) ((marker . 1) . -69) ((marker . 1) . -614) ((marker) . -614) ((marker . 1) . -90) ((marker . 1) . -90) ((marker . 1) . -90) ((marker . 1) . -614) ((marker . 1) . -614) ((marker . 1) . -375) ((marker . 1) . -90) ((marker . 1) . -384) ((marker . 1) . -90) ((marker . 1) . -53) ((marker . 1) . -111) ((marker . 1) . -756) ((marker . 1) . -756) ((marker . 1) . -90) ((marker . 1) . -432) ((marker . 1) . -90) ((marker . 1) . -337) ((marker . 1) . -756) ((marker . 1) . -90) ((marker . 1) . -118) ((marker) . -756) 757 (t 23612 23643 677758 905000) nil ("  
" . 743) ((marker . 1) . -3) nil ("
" . 743) ((marker . 1) . -1) nil ("  cout << \"check\" << endl;" . 743) (t 23612 23630 66374 527000) nil (768 . 769) nil (764 . 768) nil (763 . 764) nil (761 . 763) nil (757 . 761) nil ("k" . -757) ((marker . 1) . -1) 758 nil (752 . 758) nil (750 . 752) nil (748 . 750) nil (" " . -748) ((marker . 1) . -1) 749 nil (745 . 749) nil (743 . 745) ("  " . 742) ((marker . 1) . -2) (741 . 745) (t 23612 23560 443483 250000) nil ("'" . -522) ((marker . 1) . -1) 523 nil (521 . 523) nil (513 . 514) (t 23612 23528 414112 499000) nil (522 . 525) nil (515 . 518) nil (401 . 402) nil (398 . 401) nil (397 . 398) nil (" " . -397) ((marker . 1) . -1) 398 nil (388 . 398) nil ("c" . -388) ((marker . 1) . -1) ("h" . -389) ((marker . 1) . -1) ("a" . -390) ((marker . 1) . -1) ("r" . -391) ((marker . 1) . -1) (" " . -392) ((marker . 1) . -1) ("*" . -393) ((marker . 1) . -1) 394 nil ("s1, *s2;" . -394) ((marker . 1) . -8) 402 (t 23612 23368 995892 734000) nil (401 . 402) (t 23612 23361 316904 535000) nil ("  string s1, s2;" . 401) nil ("
" . 401) ((marker . 1) . -1) nil (399 . 401) nil (398 . 399) nil (397 . 398) nil (396 . 397) nil (394 . 396) nil (393 . 394) nil (392 . 393) nil (388 . 392) nil ("c" . -388) ((marker . 1) . -1) (388 . 389) ("cあ" . -388) ((marker . 1) . -2) (388 . 390) ("c" . -388) ((marker . 1) . -1) (385 . 389) (t 23612 23224 259484 392000) nil ("&" . -517) ((marker . 1) . -1) 518 nil ("&" . -513) ((marker . 1) . -1) 514 (t 23612 23186 703889 331000) nil ("    cin >> s1 >> s2;" . 523) nil ("
" . 523) ((marker . 1) . -1) nil (522 . 523) nil (521 . 522) nil (517 . 521) nil (516 . 517) nil (514 . 516) nil ("a" . -514) ((marker . 1) . -1) 515 nil (512 . 515) nil (511 . 512) nil (509 . 511) nil ("S" . -509) ((marker . 1) . -1) ("A" . -510) ((marker . 1) . -1) 511 nil (508 . 511) nil (" " . -508) ((marker . 1) . -1) ("%" . -509) ((marker . 1) . -1) 510 nil (504 . 510) nil (503 . 504) nil (500 . 503) nil (498 . 500) nil (493 . 498) nil (35 . 36) nil (29 . 35) nil (28 . 29) nil (21 . 28) ("inc" . -21) ((marker . 1) . -3) 24 nil (21 . 24) nil (20 . 21) nil (19 . 20) (t 23612 23029 730885 65000) nil (383 . 384) nil ("1" . -383) ((marker . 1) . -1) 384 (t 23612 23013 795400 541000) nil ("
" . 551) ((marker . 1) . -1) nil (548 . 550) ("    " . 548) ((marker . 1) . -4) (552 . 553) nil (547 . 552) nil (546 . 547) nil (545 . 546) nil (543 . 545) nil (542 . 543) nil (533 . 542) ("push" . -533) ((marker . 1) . -4) 537 nil (533 . 537) nil (529 . 533) nil (524 . 529) nil (523 . 524) nil (522 . 523) nil (520 . 522) nil (519 . 520) nil (510 . 519) ("pus" . -510) ((marker . 1) . -3) 513 nil (509 . 513) nil (502 . 509) ("comm" . -502) ((marker . 1) . -4) 506 nil (502 . 506) nil (497 . 502) nil (476 . 481) nil (475 . 476) nil (491 . 494) nil (490 . 491) nil (487 . 490) nil (485 . 487) nil (482 . 485) nil ("command[i] >> str[i];" . 482) nil (384 . 385) nil (381 . 384) nil (380 . 381) nil (371 . 380) nil (368 . 371) nil ("  string command[1000000], str[1000000];" . 399) ((marker . 1) . -9) nil ("
" . 399) ((marker . 1) . -1) nil (398 . 399) nil (394 . 398) nil (393 . 394) nil (385 . 393) nil (384 . 385) nil (378 . 384) nil (377 . 378) nil (371 . 377) ("ve" . -371) ((marker . 1) . -2) 373 nil (371 . 373) nil (368 . 371) (t 23612 22896 845159 596000) nil ("  
" . 343) ((marker . 1) . -3) nil ("
" . 343) ((marker . 1) . -1) (t 23612 22866 62081 731000) nil ("
" . -74) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) ((marker . 1) . -1) 75 nil ("
vector<string> split(string str, char separator) {
  int i;
  char c;
  string s = \"\";
  vector<string> str_vec;

  for (i = 0; i < str.size(); i++) {
    c = str[i];
    if (c == separator) {
      str_vec.push_back(s);
      s = \"\";
    } else if (i == str.size() - 1) {
      s += c;
      str_vec.push_back(s);
    } else {              
      s += c;      
    }
  }

  return str_vec;
}" . 75) ((marker . 1) . -54) ((marker . 1) . -60) ((marker . 1) . -87) ((marker . 1) . -274) ((marker . 1) . -393) ((marker . 1) . -392) ((marker . 1) . -190) ((marker*) . 1) ((marker) . -393) ((marker*) . 343) ((marker) . -51) ((marker . 1) . -1) ((marker) . -393) 468 (t 23612 22815 780429 229000) nil undo-tree-canary))
