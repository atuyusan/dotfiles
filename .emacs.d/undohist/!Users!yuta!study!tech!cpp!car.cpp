
((digest . "1b3038a532c1cff97a1218479190bd63") (undo-list (570 . 571) nil (nil rear-nonsticky nil 569 . 570) (nil fontified nil 41 . 570) (nil fontified nil 40 . 41) (nil fontified nil 38 . 40) (nil fontified nil 19 . 38) (nil fontified nil 18 . 19) (nil fontified nil 2 . 18) (nil fontified nil 1 . 2) (1 . 570) nil ("#include<iostream>
#include \"car.h\"
using namespace std;

CCar::CCar() : m_fuel(0), m_migration(0) {
  cout << \"CCarオブジェクト生成\" << endl;
}

CCar::~CCar() {
  cout << \"CCarオブジェクト破棄\" << endl;
}

void CCar::move() {
  if (m_fuel >= 0) {
    m_migration++;
    m_fuel--;
  }
  cout << \"移動距離:\" << m_migration << endl;
  cout << \"燃料:\" << m_fuel << endl;
}

void CCar::supply(int fuel) {
  if (fuel > 0) {
    m_fuel += fuel;
  }
  cout << \"燃料\" << m_fuel << endl;
}
" . 1) ((marker . 17) . -18) ((marker . 1) . -457) ((marker . 1) . -457) ((marker . 1) . -457) ((marker . 1) . -457) ((marker . 1) . -457) ((marker) . -19) ((marker) . -19) ((marker) . -36) ((marker) . -36) ((marker) . -57) ((marker) . -57) ((marker) . -58) ((marker) . -58) ((marker) . -101) ((marker) . -101) ((marker) . -135) ((marker) . -135) ((marker) . -137) ((marker) . -137) ((marker) . -138) ((marker) . -138) ((marker) . -154) ((marker) . -154) ((marker) . -188) ((marker) . -188) ((marker) . -190) ((marker) . -190) ((marker) . -191) ((marker) . -191) ((marker) . -211) ((marker) . -211) ((marker) . -232) ((marker) . -232) ((marker) . -251) ((marker) . -251) ((marker) . -265) ((marker) . -265) ((marker) . -269) ((marker) . -269) ((marker) . -311) ((marker) . -311) ((marker) . -346) ((marker) . -346) ((marker) . -348) ((marker) . -348) ((marker) . -349) ((marker) . -349) ((marker) . -379) ((marker) . -379) ((marker) . -397) ((marker) . -397) ((marker) . -417) ((marker) . -417) ((marker) . -421) ((marker) . -421) ((marker) . -455) ((marker) . -455) ((marker . 1) . -457) ((marker . 570) . -19) ((marker . 1) . -457) ((marker) . -457) (t 23605 54717 247640 536000) nil (457 . 458) nil ("  " . 456) ((marker . 570) . -2) ((marker . 570) . -2) (458 . 459) nil (455 . 458) nil (454 . 455) nil (449 . 454) nil (448 . 449) nil (447 . 448) nil (446 . 447) nil (440 . 446) ("m_fu" . -440) ((marker . 570) . -4) ((marker . 570) . -4) 444 nil (439 . 444) nil (437 . 439) nil (433 . 437) ("燃料" . -433) ((marker . 570) . -2) (433 . 435) ("ねんりょ" . -433) ((marker . 570) . -4) (433 . 437) ("ねんry" . -433) ((marker . 570) . -4) (433 . 437) ("ねんr" . -433) ((marker . 570) . -3) (433 . 436) ("年" . -433) ((marker . 570) . -1) (433 . 434) ("ねn" . -433) ((marker . 570) . -2) (433 . 435) ("ね" . -433) ((marker . 570) . -1) (433 . 434) ("n" . -433) ((marker . 570) . -1) (431 . 434) nil (429 . 431) nil (424 . 429) nil (421 . 424) nil (418 . 420) ("    " . 418) ((marker . 570) . -4) ((marker . 570) . -4) (422 . 423) nil (417 . 422) nil (416 . 417) nil (402 . 416) nil (397 . 402) nil (396 . 397) nil (395 . 396) nil (394 . 395) nil (393 . 394) nil ("-" . -393) ((marker . 570) . -1) ((marker . 570) . -1) ((marker . 570) . -1) (")" . -394) ((marker . 570) . -1) ((marker . 570) . -1) ((marker* . 569) . 1) ((marker . 570) . -1) 395 nil (394 . 395) nil (392 . 394) nil (391 . 392) nil (386 . 391) nil (385 . 386) nil (382 . 385) nil (379 . 382) nil (378 . 379) nil (377 . 378) nil (376 . 377) nil (368 . 376) nil (367 . 368) nil (361 . 367) nil (359 . 361) nil (350 . 359) nil (349 . 350) nil (348 . 349) nil ("  " . 347) ((marker . 570) . -2) ((marker . 570) . -2) (349 . 350) nil (346 . 349) nil (345 . 346) nil (340 . 345) nil (338 . 340) nil (330 . 338) nil (328 . 330) nil (327 . 328) nil (325 . 326) nil (325 . 326) nil (323 . 325) ("燃料" . -323) ((marker . 570) . -2) (323 . 325) ("ねんりょ" . -323) ((marker . 570) . -4) (323 . 327) ("ねんry" . -323) ((marker . 570) . -4) (323 . 327) ("ねんr" . -323) ((marker . 570) . -3) (323 . 326) ("ねn" . -323) ((marker . 570) . -2) (323 . 325) ("ね" . -323) ((marker . 570) . -1) (323 . 324) ("n" . -323) ((marker . 570) . -1) (321 . 324) nil (319 . 321) nil (318 . 319) nil ("n" . -318) ((marker . 570) . -1) ((marker . 570) . -1) (" " . -319) ((marker . 570) . -1) ((marker . 570) . -1) ("<" . -320) ((marker . 570) . -1) ((marker . 570) . -1) ("<" . -321) ((marker . 570) . -1) ((marker . 570) . -1) (" " . -322) ((marker . 570) . -1) ((marker . 570) . -1) 323 nil (322 . 323) nil (320 . 322) nil (314 . 320) nil (311 . 314) nil (310 . 311) nil (306 . 310) nil (305 . 306) nil (303 . 305) nil (302 . 303) nil (291 . 302) ("m_mi" . -291) ((marker . 570) . -4) ((marker . 570) . -4) 295 nil (290 . 295) nil (288 . 290) nil (285 . 286) nil (285 . 287) nil (281 . 285) ("移動距離" . -281) ((marker . 570) . -4) (281 . 285) ("移動きょr" . -281) ((marker . 570) . -5) (281 . 286) ("移動きょ" . -281) ((marker . 570) . -4) (281 . 285) ("移動ky" . -281) (281 . 285) ("移動ky" . -281) (281 . 285) ("移動ky" . -281) (281 . 285) ("移動ky" . -281) (281 . 285) ("移動ky" . -281) (281 . 285) ("移動ky" . -281) ((marker . 570) . -4) (279 . 285) nil (277 . 279) nil (272 . 277) nil (269 . 272) nil (266 . 268) ("    " . 266) ((marker . 570) . -4) ((marker . 570) . -4) (270 . 271) nil (265 . 270) nil (264 . 265) nil (263 . 264) nil ("0" . -263) ((marker . 570) . -1) ((marker . 570) . -1) 264 nil (262 . 264) nil (256 . 262) ("m_fu" . -256) ((marker . 570) . -4) ((marker . 570) . -4) 260 nil (256 . 260) nil (251 . 256) nil (250 . 251) nil (248 . 250) nil (237 . 248) ("m_mi" . -237) ((marker . 570) . -4) ((marker . 570) . -4) 241 nil (237 . 241) nil (232 . 237) nil (231 . 232) nil (230 . 231) nil (229 . 230) nil (226 . 229) nil (" " . -226) ((marker . 570) . -1) ((marker . 570) . -1) 227 nil (226 . 227) nil (225 . 226) nil (224 . 225) nil (218 . 224) ("m_fu" . -218) ((marker . 570) . -4) ((marker . 570) . -4) 222 nil (218 . 222) nil (217 . 218) nil (214 . 217) nil (211 . 214) nil (210 . 211) nil (209 . 210) nil (207 . 209) nil (203 . 207) nil (201 . 203) nil (197 . 201) nil (192 . 197) nil (190 . 192) nil ("  " . 189) ((marker . 570) . -2) ((marker . 570) . -2) (191 . 192) nil (188 . 191) nil (187 . 188) nil (182 . 187) nil (180 . 182) nil (176 . 180) nil ("破棄" . -176) ((marker . 570) . -2) (176 . 178) ("履き" . -176) ((marker . 570) . -2) (176 . 178) ("吐き" . -176) ((marker . 570) . -2) (176 . 178) ("はき" . -176) ((marker . 570) . -2) (176 . 178) ("はk" . -176) ((marker . 570) . -2) (176 . 178) ("は" . -176) ((marker . 570) . -1) 177 nil (176 . 177) ("h" . -176) ((marker . 570) . -1) (176 . 177) nil (170 . 176) nil ("オブジェクト" . -170) ((marker . 570) . -6) (170 . 176) ("オブジェクt" . -170) ((marker . 570) . -6) (170 . 176) ("オブジェク" . -170) ((marker . 570) . -5) (170 . 175) ("オブジェk" . -170) ((marker . 570) . -5) (170 . 175) ("オブジェ" . -170) ((marker . 570) . -4) (170 . 174) ("オブj" . -170) ((marker . 570) . -3) (170 . 173) ("オブ" . -170) ((marker . 570) . -2) (170 . 172) ("おb" . -170) ((marker . 570) . -2) (170 . 172) ("お" . -170) ((marker . 570) . -1) (170 . 171) 166 nil ("e" . -166) ((marker . 570) . -1) 167 nil (165 . 167) nil (164 . 169) nil (162 . 164) nil (157 . 162) nil (154 . 157) nil (153 . 154) nil (152 . 153) nil (150 . 152) nil (147 . 150) nil ("a" . -147) ((marker . 570) . -1) ((marker . 570) . -1) 148 nil (145 . 148) nil ("=" . -145) ((marker . 570) . -1) ((marker . 570) . -1) 146 nil (145 . 146) nil (143 . 145) nil (139 . 143) nil (137 . 139) nil ("  " . 136) ((marker . 570) . -2) ((marker . 570) . -2) (138 . 139) nil (135 . 138) nil (134 . 135) nil (129 . 134) nil (127 . 129) nil (123 . 127) nil ("生成" . -123) ((marker . 570) . -2) (123 . 125) ("生成" . -123) (123 . 125) ("姓s" . -123) ((marker . 570) . -2) (123 . 125) ("姓" . -123) ((marker . 570) . -1) (123 . 124) ("姓" . -123) (123 . 124) ("s" . -123) ((marker . 570) . -1) (123 . 124) ("シ" . -123) ((marker . 570) . -1) ((marker . 570) . -1) ("エ" . -124) ((marker . 570) . -1) ((marker . 570) . -1) ("生" . -125) ((marker . 570) . -1) ((marker . 570) . -1) 126 nil (123 . 126) ("シエ生" . -123) ((marker . 570) . -3) (123 . 126) ("しえせ" . -123) ((marker . 570) . -3) (123 . 126) ("しえs" . -123) ((marker . 570) . -3) (123 . 126) ("しえ" . -123) ((marker . 570) . -2) (123 . 125) ("しえ" . -123) (123 . 125) ("s" . -123) ((marker . 570) . -1) (123 . 124) nil (117 . 123) nil ("オブジェクト" . -117) ((marker . 570) . -6) (117 . 123) ("オブジェクt" . -117) ((marker . 570) . -6) (117 . 123) ("オブジェクt" . -117) (117 . 123) ("オブジェk" . -117) ((marker . 570) . -5) (117 . 122) ("オブジェ" . -117) ((marker . 570) . -4) (117 . 121) ("オブj" . -117) ((marker . 570) . -3) (117 . 120) ("オブ" . -117) ((marker . 570) . -2) (117 . 119) ("おb" . -117) ((marker . 570) . -2) (117 . 119) ("お" . -117) ((marker . 570) . -1) (116 . 118) nil ("r" . -116) ((marker . 570) . -1) ((marker . 570) . -1) 117 nil ("お" . -117) ((marker . 570) . -1) (117 . 118) ("オブ" . -117) ((marker . 570) . -2) (117 . 119) ("おb" . -117) ((marker . 570) . -2) (117 . 119) ("お" . -117) ((marker . 570) . -1) (117 . 118) nil (114 . 117) nil ("a" . -114) ((marker . 570) . -1) ((marker . 570) . -1) ("r" . -115) ((marker . 570) . -1) ((marker . 570) . -1) 116 nil (111 . 116) nil (109 . 111) nil (104 . 109) nil (101 . 104) nil (100 . 101) nil (99 . 100) nil (98 . 99) nil (97 . 98) nil (96 . 97) nil (84 . 96) nil (83 . 84) nil (82 . 83) nil (81 . 82) nil (80 . 81) nil (74 . 80) nil (73 . 74) nil (72 . 73) nil (71 . 72) nil (69 . 71) nil (65 . 69) nil (63 . 65) nil (59 . 63) nil (57 . 59) nil ("
" . 37) ((marker . 570) . -1) nil (57 . 58) nil (53 . 57) nil (44 . 53) ("nam" . -44) ((marker . 570) . -3) ((marker . 570) . -3) 47 nil (38 . 47) nil (36 . 38) nil (28 . 29) nil (32 . 35) nil (28 . 32) nil (21 . 28) ("inc" . -21) ((marker . 570) . -3) ((marker . 570) . -3) 24 nil (21 . 24) nil (20 . 21) nil (19 . 20) nil (18 . 19) nil (10 . 18) ("ios" . -10) ((marker . 17) . -3) ((marker . 570) . -3) ((marker . 570) . -3) 13 nil (10 . 13) nil (9 . 10) nil ("<" . -9) ((marker . 17) . -1) ((marker . 570) . -1) ((marker . 570) . -1) 10 nil (9 . 10) nil (2 . 9) ("inc" . -2) ((marker . 17) . -3) ((marker . 570) . -3) ((marker . 570) . -3) 5 nil (2 . 5) nil (1 . 2) nil ("#include <iostream>
#include \"car.h\"

using namespace std;

CCar::CCar() : m_fuel(0), m_migration(0) {
  cout << \"CCarオブジェクト生成\" << endl;
}

CCar::~CCar() {
  cout << \"CCarオブジェクト破棄\" << endl;
}

void CCar::move() {
  if (m_fuel >= 0) {
    m_migration++;
    m_fuel--;
  }
  cout << \"移動距離:\" << m_migration << endl;
  cout << \"燃料:\" << m_fuel << endl;
}

void CCar::supply(int fuel) {
  if (fuel > 0) {
    m_fuel += fuel;
  }
  cout << \"燃料\" << m_fuel << endl;
}
" . 1) ((marker . 17) . -19) ((marker . 1) . -454) ((marker . 1) . -418) ((marker . 1) . -454) ((marker . 570) . -459) ((marker . 569) . -459) ((marker . 570) . -459) ((marker . 1) . -458) ((marker) . -459) 460 (t 23602 59212 700658 664000) nil (454 . 455) nil ("f" . -454) ((marker) . -1) ((marker) . -1) 455 (t 23602 59125 790251 716000) nil (459 . 460) nil ("  " . 458) ((marker) . -2) ((marker . 570) . -2) (460 . 461) nil (457 . 460) nil (456 . 457) nil (451 . 456) nil (449 . 451) nil (448 . 449) nil (442 . 448) ("m_fu" . -442) ((marker) . -4) ((marker . 570) . -4) 446 nil (441 . 446) nil (439 . 441) nil (435 . 439) ("燃料" . -435) ((marker) . -2) (435 . 437) ("ねんりょ" . -435) ((marker) . -4) (435 . 439) ("ねんry" . -435) ((marker) . -4) (435 . 439) ("ねんr" . -435) ((marker) . -3) (435 . 438) ("年" . -435) ((marker) . -1) (435 . 436) ("ねn" . -435) ((marker) . -2) (435 . 437) ("ね" . -435) ((marker) . -1) (435 . 436) ("n" . -435) ((marker) . -1) (433 . 436) nil (431 . 433) nil (429 . 431) nil (" " . -429) ((marker) . -1) ((marker . 570) . -1) 430 nil ("t" . -430) ((marker) . -1) ((marker . 570) . -1) 431 nil (426 . 431) nil (423 . 426) nil (" " . -423) ((marker) . -1) ((marker . 570) . -1) 424 nil (423 . 424) nil (420 . 422) ("    " . 420) ((marker) . -4) ((marker . 570) . -4) (424 . 425) nil (419 . 424) nil (418 . 419) nil (414 . 418) nil (404 . 414) nil (399 . 404) nil (398 . 399) nil (397 . 398) nil (396 . 397) nil (394 . 396) nil (393 . 394) nil (388 . 393) nil (387 . 388) nil ("'" . -387) ((marker) . -1) ((marker . 570) . -1) ("f" . -388) ((marker) . -1) ((marker . 570) . -1) 389 nil (384 . 389) nil (381 . 384) nil (380 . 381) nil (379 . 380) nil (378 . 379) nil (370 . 378) nil (369 . 370) nil (363 . 369) nil (361 . 363) nil (356 . 361) nil (352 . 356) nil (350 . 352) nil ("  " . 349) ((marker) . -2) ((marker . 570) . -2) (351 . 352) nil (348 . 351) nil (347 . 348) nil (342 . 347) nil (340 . 342) nil (339 . 340) nil (333 . 339) ("m_fu" . -333) ((marker) . -4) ((marker . 570) . -4) 337 nil (335 . 337) nil ("e" . -335) ((marker) . -1) ((marker . 570) . -1) 336 nil (332 . 336) nil (330 . 332) nil (328 . 330) nil (327 . 328) nil (325 . 327) ("燃料" . -325) ((marker) . -2) (325 . 327) ("ねんりょ" . -325) ((marker) . -4) (325 . 329) ("年ry" . -325) ((marker) . -3) (325 . 328) ("年r" . -325) ((marker) . -2) (325 . 327) ("年" . -325) ((marker) . -1) (325 . 326) ("ねn" . -325) ((marker) . -2) (325 . 327) ("ね" . -325) ((marker) . -1) (325 . 326) ("n" . -325) ((marker) . -1) (323 . 326) nil (321 . 323) nil (316 . 321) nil (313 . 316) nil (312 . 313) nil (307 . 312) nil (305 . 307) nil (304 . 305) nil (293 . 304) ("m_mi" . -293) ((marker) . -4) ((marker . 570) . -4) 297 nil (293 . 297) nil (287 . 288) nil (291 . 292) nil (289 . 291) nil (283 . 289) ("移動距離" . -283) ((marker) . -4) (283 . 287) ("移動きょr" . -283) ((marker) . -5) (283 . 288) ("移動きょ" . -283) ((marker) . -4) (283 . 287) ("移動ky" . -283) ((marker) . -4) (283 . 287) ("移動ky" . -283) (283 . 287) ("移動ky" . -283) (283 . 287) ("移動ky" . -283) (283 . 287) ("移動ky" . -283) (283 . 287) ("移動ky" . -283) ((marker) . -4) (281 . 287) nil (279 . 281) nil (274 . 279) nil (271 . 274) nil (268 . 270) ("    " . 268) ((marker) . -4) ((marker . 570) . -4) (272 . 273) nil (267 . 272) nil (266 . 267) nil (264 . 266) nil (";" . -264) ((marker) . -1) ((marker . 570) . -1) (";" . -265) ((marker) . -1) ((marker . 570) . -1) 266 nil (264 . 266) nil (" " . -264) ((marker) . -1) ((marker . 570) . -1) 265 nil (264 . 265) nil (258 . 264) ("m_fu" . -258) ((marker) . -4) ((marker . 570) . -4) 262 nil (260 . 262) nil ("e" . -260) ((marker) . -1) ((marker . 570) . -1) 261 nil (258 . 261) nil (253 . 258) nil (252 . 253) nil (251 . 252) nil (250 . 251) nil (239 . 250) ("m_mig" . -239) ((marker) . -5) ((marker . 570) . -5) 244 nil (239 . 244) nil (234 . 239) nil (233 . 234) nil (232 . 233) nil (231 . 232) nil (";" . -231) ((marker) . -1) ((marker . 570) . -1) 232 nil (231 . 232) nil (228 . 231) nil (227 . 228) nil (226 . 227) nil (")" . -226) ((marker) . -1) ((marker . 570) . -1) ((marker* . 569) . 1) ((marker . 570) . -1) 227 nil (226 . 227) nil (220 . 226) ("m_fu" . -220) ((marker) . -4) ((marker . 570) . -4) 224 nil (220 . 224) nil (219 . 220) nil (216 . 219) nil (213 . 216) nil (212 . 213) nil (211 . 212) nil (209 . 211) nil (205 . 209) nil (203 . 205) nil (195 . 203) nil ("i" . -195) ((marker) . -1) ((marker . 570) . -1) ("d" . -196) ((marker) . -1) ((marker . 570) . -1) 197 nil (194 . 197) nil (192 . 194) nil ("  " . 191) ((marker) . -2) ((marker . 570) . -2) (193 . 194) nil (190 . 193) nil (189 . 190) nil (184 . 189) nil (182 . 184) nil (178 . 182) nil ("破棄" . -178) ((marker) . -2) (178 . 180) ("履き" . -178) ((marker) . -2) (178 . 180) ("吐き" . -178) ((marker) . -2) (178 . 180) ("はき" . -178) ((marker) . -2) (178 . 180) ("はk" . -178) ((marker) . -2) (178 . 180) ("は" . -178) ((marker) . -1) (178 . 179) ("h" . -178) ((marker) . -1) (178 . 179) ("生" . -178) ((marker) . -1) ((marker . 570) . -1) ("成" . -179) ((marker) . -1) ((marker . 570) . -1) 180 nil (172 . 180) nil (168 . 172) ("C" . -168) ((marker) . -1) (166 . 169) nil (164 . 166) nil (162 . 164) nil (" " . -162) ((marker) . -1) ((marker . 570) . -1) ("t" . -163) ((marker) . -1) ((marker . 570) . -1) 164 nil (159 . 164) nil (156 . 159) nil (155 . 156) nil (154 . 155) nil (" " . -154) ((marker) . -1) ((marker . 570) . -1) (":" . -155) ((marker) . -1) ((marker . 570) . -1) (" " . -156) ((marker) . -1) ((marker . 570) . -1) 157 nil (156 . 157) nil (155 . 156) nil (154 . 155) nil (152 . 154) nil (150 . 152) nil ("r" . -150) ((marker) . -1) ((marker . 570) . -1) 151 nil (147 . 151) nil ("=" . -147) ((marker) . -1) ((marker . 570) . -1) 148 nil (147 . 148) nil ("=" . -147) ((marker) . -1) ((marker . 570) . -1) 148 nil (147 . 148) nil (145 . 147) nil (141 . 145) nil (139 . 141) nil ("  " . 138) ((marker) . -2) ((marker . 570) . -2) (140 . 141) nil (137 . 140) nil (136 . 137) nil (131 . 136) nil (129 . 131) nil (127 . 129) nil ("　" . -127) ((marker) . -1) ((marker . 570) . -1) 128 nil ("”" . -128) ((marker) . -1) (128 . 129) ("”h" . -128) ((marker) . -2) (128 . 130) ("”" . -128) ((marker) . -1) (125 . 129) ("生成" . -125) ((marker) . -2) (125 . 127) ("せいせ" . -125) ((marker) . -3) (125 . 128) ("せいs" . -125) ((marker) . -3) (125 . 128) ("姓" . -125) ((marker) . -1) (125 . 126) ("せ" . -125) ((marker) . -1) (125 . 126) ("s" . -125) ((marker) . -1) (119 . 126) nil ("オブジェクト" . -119) ((marker) . -6) 125 nil (119 . 125) ("オブジェクt" . -119) ((marker) . -6) (119 . 125) ("オブジェク" . -119) ((marker) . -5) (119 . 124) ("オブジェk" . -119) ((marker) . -5) (119 . 124) ("オブジェ" . -119) ((marker) . -4) (119 . 123) ("オブj" . -119) ((marker) . -3) (119 . 122) ("オブ" . -119) ((marker) . -2) (119 . 121) ("お" . -119) ((marker) . -1) ((marker . 570) . -1) (119 . 120) nil (113 . 119) nil (111 . 113) nil (106 . 111) nil (103 . 106) nil (102 . 103) nil (101 . 102) nil (100 . 101) nil (99 . 100) nil (98 . 99) nil (86 . 98) nil (85 . 86) nil (84 . 85) nil (83 . 84) nil (82 . 83) nil (78 . 82) nil ("e" . -78) ((marker) . -1) ((marker . 570) . -1) ("u" . -79) ((marker) . -1) ((marker . 570) . -1) ("f" . -80) ((marker) . -1) ((marker . 570) . -1) ("l" . -81) ((marker) . -1) ((marker . 570) . -1) 82 nil (78 . 82) nil (75 . 78) nil (74 . 75) nil (73 . 74) nil (71 . 73) nil (69 . 71) nil (67 . 69) nil (65 . 67) nil (61 . 65) nil (59 . 61) nil (58 . 59) nil (54 . 58) nil (45 . 54) ("name" . -45) ((marker) . -4) ((marker . 570) . -4) 49 nil (39 . 49) nil (38 . 39) nil (37 . 38) nil (29 . 37) nil (22 . 29) ("inc" . -22) ((marker) . -3) ((marker . 570) . -3) ((marker . 17) . -3) 25 nil (22 . 25) nil (21 . 22) nil (20 . 21) nil (19 . 20) nil (11 . 19) nil (10 . 11) nil ("\"" . -10) ((marker) . -1) ((marker . 570) . -1) ((marker . 17) . -1) 11 nil (9 . 11) nil (2 . 9) ("inc" . -2) ((marker) . -3) ((marker . 570) . -3) ((marker . 17) . -3) 5 nil (2 . 5) nil (1 . 2) (t . -1)))