#include <string.h>
#include "pipeline.h"
void pipeline(UCHAR * x0, UCHAR * x1, int32_t x2, int32_t x3) {
int32_t x4 = x2 * x3;
int32_t x5 = x4 * 12;
float *x1115 = malloc(sizeof(float) * x5);
for(int x8=0; x8 < x5; x8++) {
x1115[x8] = 0.0f;

}
float *x1119 = malloc(sizeof(float) * x5);
for(int x13=0; x13 < x5; x13++) {
x1119[x13] = 0.0f;

}
float *x1123 = malloc(sizeof(float) * x5);
for(int x26=0; x26 < x5; x26++) {
x1123[x26] = 0.0f;

}
float *x1127 = malloc(sizeof(float) * x5);
for(int x31=0; x31 < x5; x31++) {
x1127[x31] = 0.0f;

}
float *x1131 = malloc(sizeof(float) * x5);
for(int x36=0; x36 < x5; x36++) {
x1131[x36] = 0.0f;

}
float *x1135 = malloc(sizeof(float) * x5);
for(int x41=0; x41 < x5; x41++) {
x1135[x41] = 0.0f;

}
int32_t x47 = x4 * 3;
float *x1139 = malloc(sizeof(float) * x47);
int32_t x17 = x2 - 1;
int32_t x21 = x3 - 1;
for(int x50=0; x50 < x3; x50++) {
int32_t x55 = MIN(x50, x21);
int32_t x56 = MAX(0, x55);
int32_t x57 = x2 * x56;
int32_t x69 = x2 * x50;
for(int x52=0; x52 < x2; x52++) {
int32_t x53 = MIN(x52, x17);
int32_t x54 = MAX(0, x53);
int32_t x58 = x54 + x57;
int32_t x59 = 3 * x58;
int32_t x60 = x59 + 2;
UCHAR x61 = x0[x60];
float x65 = (float) x61;
float x68 = x65 / 255.0f;
int32_t x70 = x52 + x69;
int32_t x71 = 3 * x70;
int32_t x72 = x71 + 2;
x1139[x72] = x68;
int32_t x74 = x71 + 1;
x1139[x74] = x68;
x1139[x71] = x68;

}

}
int32_t *x1147 = malloc(sizeof(int32_t) * x47);
for(int x82=0; x82 < x3; x82++) {
int32_t x90 = x82 * 8;
int32_t x110 = x2 * x82;
for(int x83=0; x83 < x2; x83++) {
int32_t x87 = x83 * 8;
int32_t x111 = x83 + x110;
int32_t x112 = 12 * x111;
for(int x85=0; x85 < 8; x85++) {
int32_t x91 = x90 + x85;
int32_t x92 = x91 - 4;
int32_t x95 = MIN(x92, x21);
int32_t x96 = MAX(0, x95);
int32_t x97 = x2 * x96;
for(int x86=0; x86 < 8; x86++) {
int32_t x88 = x87 + x86;
int32_t x89 = x88 - 4;
int32_t x93 = MIN(x89, x17);
int32_t x94 = MAX(0, x93);
int32_t x98 = x94 + x97;
int32_t x99 = 3 * x98;
int32_t x100 = x99 + 2;
float x1148 = x1139[x100];
int32_t x102 = x99 + 1;
float x1149 = x1139[x102];
float x1150 = x1139[x99];
float x1151 = MIN(x1148, 1.0f);
float x1152 = MAX(0.0f, x1151);
float x1153 = x1152 * 10.0f;
float x1154 = x1153 + 0.5f;
int32_t x1155 = (int32_t)x1154;
int32_t x1156 = x1155 + x112;
float x1157 = x1115[x1156];
float x1158 = x1157 + x1148;
x1115[x1156] = x1158;
float x1160 = x1119[x1156];
float x1161 = x1160 + 1.0f;
x1119[x1156] = x1161;

}

}
for(int x124=0; x124 < 8; x124++) {
int32_t x128 = x90 + x124;
int32_t x129 = x128 - 4;
int32_t x132 = MIN(x129, x21);
int32_t x133 = MAX(0, x132);
int32_t x134 = x2 * x133;
for(int x125=0; x125 < 8; x125++) {
int32_t x126 = x87 + x125;
int32_t x127 = x126 - 4;
int32_t x130 = MIN(x127, x17);
int32_t x131 = MAX(0, x130);
int32_t x135 = x131 + x134;
int32_t x136 = 3 * x135;
int32_t x137 = x136 + 2;
float x1167 = x1139[x137];
int32_t x139 = x136 + 1;
float x1168 = x1139[x139];
float x1169 = x1139[x136];
float x1170 = MIN(x1167, 1.0f);
float x1171 = MAX(0.0f, x1170);
float x1172 = x1171 * 10.0f;
float x1173 = x1172 + 0.5f;
int32_t x1174 = (int32_t)x1173;
int32_t x1175 = x1174 + x112;
float x1176 = x1115[x1175];
float x1177 = x1176 + x1167;
x1115[x1175] = x1177;
float x1179 = x1119[x1175];
float x1180 = x1179 + 1.0f;
x1119[x1175] = x1180;

}

}
for(int x158=0; x158 < 8; x158++) {
int32_t x162 = x90 + x158;
int32_t x163 = x162 - 4;
int32_t x166 = MIN(x163, x21);
int32_t x167 = MAX(0, x166);
int32_t x168 = x2 * x167;
for(int x159=0; x159 < 8; x159++) {
int32_t x160 = x87 + x159;
int32_t x161 = x160 - 4;
int32_t x164 = MIN(x161, x17);
int32_t x165 = MAX(0, x164);
int32_t x169 = x165 + x168;
int32_t x170 = 3 * x169;
int32_t x171 = x170 + 2;
float x1186 = x1139[x171];
int32_t x173 = x170 + 1;
float x1187 = x1139[x173];
float x1188 = x1139[x170];
float x1189 = MIN(x1186, 1.0f);
float x1190 = MAX(0.0f, x1189);
float x1191 = x1190 * 10.0f;
float x1192 = x1191 + 0.5f;
int32_t x1193 = (int32_t)x1192;
int32_t x1194 = x1193 + x112;
float x1195 = x1115[x1194];
float x1196 = x1195 + x1186;
x1115[x1194] = x1196;
float x1198 = x1119[x1194];
float x1199 = x1198 + 1.0f;
x1119[x1194] = x1199;

}

}
int32_t x192 = 3 * x111;
int32_t x193 = x192 + 2;
x1147[x193] = 0;
int32_t x195 = x192 + 1;
x1147[x195] = 0;
x1147[x192] = 0;

}

}
int32_t x18 = x17 / 8;
int32_t x19 = x18 + 1;
int32_t x20 = x19 + 4;
int32_t x45 = x20 - 1;
int32_t x202 = x45 - 1;
int32_t x22 = x21 / 8;
int32_t x23 = x22 + 1;
int32_t x24 = x23 + 4;
int32_t x46 = x24 - 1;
int32_t x203 = x46 - 1;
int32_t x204 = x202 * x203;
int32_t x205 = x204 * 3;
int32_t *x1212 = malloc(sizeof(int32_t) * x205);
for(int x208=1; x208 < x46; x208++) {
int32_t x218 = MIN(x208, x21);
int32_t x219 = MAX(0, x218);
int32_t x221 = x2 * x219;
int32_t x338 = x2 * x208;
int32_t x448 = x208 - 1;
int32_t x449 = x202 * x448;
for(int x210=1; x210 < x45; x210++) {
int32_t x213 = x210 - 2;
int32_t x216 = MIN(x213, x17);
int32_t x217 = MAX(0, x216);
int32_t x222 = x217 + x221;
int32_t x223 = 12 * x222;
int32_t x244 = x210 - 1;
int32_t x245 = MIN(x244, x17);
int32_t x246 = MAX(0, x245);
int32_t x247 = x246 + x221;
int32_t x248 = 12 * x247;
int32_t x268 = MIN(x210, x17);
int32_t x269 = MAX(0, x268);
int32_t x270 = x269 + x221;
int32_t x271 = 12 * x270;
int32_t x291 = x210 + 1;
int32_t x292 = MIN(x291, x17);
int32_t x293 = MAX(0, x292);
int32_t x294 = x293 + x221;
int32_t x295 = 12 * x294;
int32_t x315 = x210 + 2;
int32_t x316 = MIN(x315, x17);
int32_t x317 = MAX(0, x316);
int32_t x318 = x317 + x221;
int32_t x319 = 12 * x318;
int32_t x339 = x210 + x338;
int32_t x340 = 12 * x339;
for(int x212=0; x212 < 12; x212++) {
int32_t x214 = MIN(x212, 11);
int32_t x215 = MAX(0, x214);
int32_t x220 = x215 - 2;
int32_t x224 = x220 + x223;
float x1213 = x1115[x224];
int32_t x226 = x215 - 1;
int32_t x227 = x226 + x223;
float x1214 = x1115[x227];
int32_t x231 = x215 + x223;
float x1215 = x1115[x231];
int32_t x235 = x215 + 1;
int32_t x236 = x235 + x223;
float x1216 = x1115[x236];
int32_t x240 = x215 + 2;
int32_t x241 = x240 + x223;
float x1217 = x1115[x241];
int32_t x249 = x220 + x248;
float x1218 = x1115[x249];
int32_t x251 = x226 + x248;
float x1219 = x1115[x251];
int32_t x255 = x215 + x248;
float x1220 = x1115[x255];
int32_t x259 = x235 + x248;
float x1221 = x1115[x259];
int32_t x263 = x240 + x248;
float x1222 = x1115[x263];
int32_t x272 = x220 + x271;
float x1223 = x1115[x272];
int32_t x274 = x226 + x271;
float x1224 = x1115[x274];
int32_t x278 = x215 + x271;
float x1225 = x1115[x278];
int32_t x282 = x235 + x271;
float x1226 = x1115[x282];
int32_t x286 = x240 + x271;
float x1227 = x1115[x286];
int32_t x296 = x220 + x295;
float x1228 = x1115[x296];
int32_t x298 = x226 + x295;
float x1229 = x1115[x298];
int32_t x302 = x215 + x295;
float x1230 = x1115[x302];
int32_t x306 = x235 + x295;
float x1231 = x1115[x306];
int32_t x310 = x240 + x295;
float x1232 = x1115[x310];
int32_t x320 = x220 + x319;
float x1233 = x1115[x320];
int32_t x322 = x226 + x319;
float x1234 = x1115[x322];
int32_t x326 = x215 + x319;
float x1235 = x1115[x326];
int32_t x330 = x235 + x319;
float x1236 = x1115[x330];
int32_t x334 = x240 + x319;
float x1237 = x1115[x334];
int32_t x341 = x212 + x340;
float x1238 = x1214 * 4.0f;
float x1239 = x1213 + x1238;
float x1240 = x1215 * 6.0f;
float x1241 = x1239 + x1240;
float x1242 = x1216 * 4.0f;
float x1243 = x1241 + x1242;
float x1244 = x1243 + x1217;
float x1245 = x1219 * 4.0f;
float x1246 = x1218 + x1245;
float x1247 = x1220 * 6.0f;
float x1248 = x1246 + x1247;
float x1249 = x1221 * 4.0f;
float x1250 = x1248 + x1249;
float x1251 = x1250 + x1222;
float x1252 = x1251 * 4.0f;
float x1253 = x1244 + x1252;
float x1254 = x1224 * 4.0f;
float x1255 = x1223 + x1254;
float x1256 = x1225 * 6.0f;
float x1257 = x1255 + x1256;
float x1258 = x1226 * 4.0f;
float x1259 = x1257 + x1258;
float x1260 = x1259 + x1227;
float x1261 = x1260 * 6.0f;
float x1262 = x1253 + x1261;
float x1263 = x1229 * 4.0f;
float x1264 = x1228 + x1263;
float x1265 = x1230 * 6.0f;
float x1266 = x1264 + x1265;
float x1267 = x1231 * 4.0f;
float x1268 = x1266 + x1267;
float x1269 = x1268 + x1232;
float x1270 = x1269 * 4.0f;
float x1271 = x1262 + x1270;
float x1272 = x1234 * 4.0f;
float x1273 = x1233 + x1272;
float x1274 = x1235 * 6.0f;
float x1275 = x1273 + x1274;
float x1276 = x1236 * 4.0f;
float x1277 = x1275 + x1276;
float x1278 = x1277 + x1237;
float x1279 = x1271 + x1278;
x1123[x341] = x1279;

}
for(int x345=0; x345 < 12; x345++) {
int32_t x346 = MIN(x345, 11);
int32_t x347 = MAX(0, x346);
int32_t x348 = x347 - 2;
int32_t x349 = x348 + x223;
float x1283 = x1119[x349];
int32_t x351 = x347 - 1;
int32_t x352 = x351 + x223;
float x1284 = x1119[x352];
int32_t x356 = x347 + x223;
float x1285 = x1119[x356];
int32_t x360 = x347 + 1;
int32_t x361 = x360 + x223;
float x1286 = x1119[x361];
int32_t x365 = x347 + 2;
int32_t x366 = x365 + x223;
float x1287 = x1119[x366];
int32_t x369 = x348 + x248;
float x1288 = x1119[x369];
int32_t x371 = x351 + x248;
float x1289 = x1119[x371];
int32_t x375 = x347 + x248;
float x1290 = x1119[x375];
int32_t x379 = x360 + x248;
float x1291 = x1119[x379];
int32_t x383 = x365 + x248;
float x1292 = x1119[x383];
int32_t x388 = x348 + x271;
float x1293 = x1119[x388];
int32_t x390 = x351 + x271;
float x1294 = x1119[x390];
int32_t x394 = x347 + x271;
float x1295 = x1119[x394];
int32_t x398 = x360 + x271;
float x1296 = x1119[x398];
int32_t x402 = x365 + x271;
float x1297 = x1119[x402];
int32_t x407 = x348 + x295;
float x1298 = x1119[x407];
int32_t x409 = x351 + x295;
float x1299 = x1119[x409];
int32_t x413 = x347 + x295;
float x1300 = x1119[x413];
int32_t x417 = x360 + x295;
float x1301 = x1119[x417];
int32_t x421 = x365 + x295;
float x1302 = x1119[x421];
int32_t x426 = x348 + x319;
float x1303 = x1119[x426];
int32_t x428 = x351 + x319;
float x1304 = x1119[x428];
int32_t x432 = x347 + x319;
float x1305 = x1119[x432];
int32_t x436 = x360 + x319;
float x1306 = x1119[x436];
int32_t x440 = x365 + x319;
float x1307 = x1119[x440];
int32_t x444 = x345 + x340;
float x1308 = x1284 * 4.0f;
float x1309 = x1283 + x1308;
float x1310 = x1285 * 6.0f;
float x1311 = x1309 + x1310;
float x1312 = x1286 * 4.0f;
float x1313 = x1311 + x1312;
float x1314 = x1313 + x1287;
float x1315 = x1289 * 4.0f;
float x1316 = x1288 + x1315;
float x1317 = x1290 * 6.0f;
float x1318 = x1316 + x1317;
float x1319 = x1291 * 4.0f;
float x1320 = x1318 + x1319;
float x1321 = x1320 + x1292;
float x1322 = x1321 * 4.0f;
float x1323 = x1314 + x1322;
float x1324 = x1294 * 4.0f;
float x1325 = x1293 + x1324;
float x1326 = x1295 * 6.0f;
float x1327 = x1325 + x1326;
float x1328 = x1296 * 4.0f;
float x1329 = x1327 + x1328;
float x1330 = x1329 + x1297;
float x1331 = x1330 * 6.0f;
float x1332 = x1323 + x1331;
float x1333 = x1299 * 4.0f;
float x1334 = x1298 + x1333;
float x1335 = x1300 * 6.0f;
float x1336 = x1334 + x1335;
float x1337 = x1301 * 4.0f;
float x1338 = x1336 + x1337;
float x1339 = x1338 + x1302;
float x1340 = x1339 * 4.0f;
float x1341 = x1332 + x1340;
float x1342 = x1304 * 4.0f;
float x1343 = x1303 + x1342;
float x1344 = x1305 * 6.0f;
float x1345 = x1343 + x1344;
float x1346 = x1306 * 4.0f;
float x1347 = x1345 + x1346;
float x1348 = x1347 + x1307;
float x1349 = x1341 + x1348;
x1127[x444] = x1349;

}
int32_t x450 = x244 + x449;
int32_t x451 = 3 * x450;
int32_t x452 = x451 + 2;
x1212[x452] = 0;
int32_t x454 = x451 + 1;
x1212[x454] = 0;
x1212[x451] = 0;

}

}
int32_t *x1360 = malloc(sizeof(int32_t) * x205);
for(int x462=1; x462 < x46; x462++) {
int32_t x470 = MIN(x462, x21);
int32_t x471 = MAX(0, x470);
int32_t x473 = x2 * x471;
int32_t x590 = x2 * x462;
int32_t x700 = x462 - 1;
int32_t x701 = x202 * x700;
for(int x463=1; x463 < x45; x463++) {
int32_t x465 = x463 - 2;
int32_t x468 = MIN(x465, x17);
int32_t x469 = MAX(0, x468);
int32_t x474 = x469 + x473;
int32_t x475 = 12 * x474;
int32_t x496 = x463 - 1;
int32_t x497 = MIN(x496, x17);
int32_t x498 = MAX(0, x497);
int32_t x499 = x498 + x473;
int32_t x500 = 12 * x499;
int32_t x520 = MIN(x463, x17);
int32_t x521 = MAX(0, x520);
int32_t x522 = x521 + x473;
int32_t x523 = 12 * x522;
int32_t x543 = x463 + 1;
int32_t x544 = MIN(x543, x17);
int32_t x545 = MAX(0, x544);
int32_t x546 = x545 + x473;
int32_t x547 = 12 * x546;
int32_t x567 = x463 + 2;
int32_t x568 = MIN(x567, x17);
int32_t x569 = MAX(0, x568);
int32_t x570 = x569 + x473;
int32_t x571 = 12 * x570;
int32_t x591 = x463 + x590;
int32_t x592 = 12 * x591;
for(int x464=0; x464 < 12; x464++) {
int32_t x466 = MIN(x464, 11);
int32_t x467 = MAX(0, x466);
int32_t x472 = x467 - 2;
int32_t x476 = x472 + x475;
float x1361 = x1115[x476];
int32_t x478 = x467 - 1;
int32_t x479 = x478 + x475;
float x1362 = x1115[x479];
int32_t x483 = x467 + x475;
float x1363 = x1115[x483];
int32_t x487 = x467 + 1;
int32_t x488 = x487 + x475;
float x1364 = x1115[x488];
int32_t x492 = x467 + 2;
int32_t x493 = x492 + x475;
float x1365 = x1115[x493];
int32_t x501 = x472 + x500;
float x1366 = x1115[x501];
int32_t x503 = x478 + x500;
float x1367 = x1115[x503];
int32_t x507 = x467 + x500;
float x1368 = x1115[x507];
int32_t x511 = x487 + x500;
float x1369 = x1115[x511];
int32_t x515 = x492 + x500;
float x1370 = x1115[x515];
int32_t x524 = x472 + x523;
float x1371 = x1115[x524];
int32_t x526 = x478 + x523;
float x1372 = x1115[x526];
int32_t x530 = x467 + x523;
float x1373 = x1115[x530];
int32_t x534 = x487 + x523;
float x1374 = x1115[x534];
int32_t x538 = x492 + x523;
float x1375 = x1115[x538];
int32_t x548 = x472 + x547;
float x1376 = x1115[x548];
int32_t x550 = x478 + x547;
float x1377 = x1115[x550];
int32_t x554 = x467 + x547;
float x1378 = x1115[x554];
int32_t x558 = x487 + x547;
float x1379 = x1115[x558];
int32_t x562 = x492 + x547;
float x1380 = x1115[x562];
int32_t x572 = x472 + x571;
float x1381 = x1115[x572];
int32_t x574 = x478 + x571;
float x1382 = x1115[x574];
int32_t x578 = x467 + x571;
float x1383 = x1115[x578];
int32_t x582 = x487 + x571;
float x1384 = x1115[x582];
int32_t x586 = x492 + x571;
float x1385 = x1115[x586];
int32_t x593 = x464 + x592;
float x1386 = x1362 * 4.0f;
float x1387 = x1361 + x1386;
float x1388 = x1363 * 6.0f;
float x1389 = x1387 + x1388;
float x1390 = x1364 * 4.0f;
float x1391 = x1389 + x1390;
float x1392 = x1391 + x1365;
float x1393 = x1367 * 4.0f;
float x1394 = x1366 + x1393;
float x1395 = x1368 * 6.0f;
float x1396 = x1394 + x1395;
float x1397 = x1369 * 4.0f;
float x1398 = x1396 + x1397;
float x1399 = x1398 + x1370;
float x1400 = x1399 * 4.0f;
float x1401 = x1392 + x1400;
float x1402 = x1372 * 4.0f;
float x1403 = x1371 + x1402;
float x1404 = x1373 * 6.0f;
float x1405 = x1403 + x1404;
float x1406 = x1374 * 4.0f;
float x1407 = x1405 + x1406;
float x1408 = x1407 + x1375;
float x1409 = x1408 * 6.0f;
float x1410 = x1401 + x1409;
float x1411 = x1377 * 4.0f;
float x1412 = x1376 + x1411;
float x1413 = x1378 * 6.0f;
float x1414 = x1412 + x1413;
float x1415 = x1379 * 4.0f;
float x1416 = x1414 + x1415;
float x1417 = x1416 + x1380;
float x1418 = x1417 * 4.0f;
float x1419 = x1410 + x1418;
float x1420 = x1382 * 4.0f;
float x1421 = x1381 + x1420;
float x1422 = x1383 * 6.0f;
float x1423 = x1421 + x1422;
float x1424 = x1384 * 4.0f;
float x1425 = x1423 + x1424;
float x1426 = x1425 + x1385;
float x1427 = x1419 + x1426;
x1123[x593] = x1427;

}
for(int x597=0; x597 < 12; x597++) {
int32_t x598 = MIN(x597, 11);
int32_t x599 = MAX(0, x598);
int32_t x600 = x599 - 2;
int32_t x601 = x600 + x475;
float x1431 = x1119[x601];
int32_t x603 = x599 - 1;
int32_t x604 = x603 + x475;
float x1432 = x1119[x604];
int32_t x608 = x599 + x475;
float x1433 = x1119[x608];
int32_t x612 = x599 + 1;
int32_t x613 = x612 + x475;
float x1434 = x1119[x613];
int32_t x617 = x599 + 2;
int32_t x618 = x617 + x475;
float x1435 = x1119[x618];
int32_t x621 = x600 + x500;
float x1436 = x1119[x621];
int32_t x623 = x603 + x500;
float x1437 = x1119[x623];
int32_t x627 = x599 + x500;
float x1438 = x1119[x627];
int32_t x631 = x612 + x500;
float x1439 = x1119[x631];
int32_t x635 = x617 + x500;
float x1440 = x1119[x635];
int32_t x640 = x600 + x523;
float x1441 = x1119[x640];
int32_t x642 = x603 + x523;
float x1442 = x1119[x642];
int32_t x646 = x599 + x523;
float x1443 = x1119[x646];
int32_t x650 = x612 + x523;
float x1444 = x1119[x650];
int32_t x654 = x617 + x523;
float x1445 = x1119[x654];
int32_t x659 = x600 + x547;
float x1446 = x1119[x659];
int32_t x661 = x603 + x547;
float x1447 = x1119[x661];
int32_t x665 = x599 + x547;
float x1448 = x1119[x665];
int32_t x669 = x612 + x547;
float x1449 = x1119[x669];
int32_t x673 = x617 + x547;
float x1450 = x1119[x673];
int32_t x678 = x600 + x571;
float x1451 = x1119[x678];
int32_t x680 = x603 + x571;
float x1452 = x1119[x680];
int32_t x684 = x599 + x571;
float x1453 = x1119[x684];
int32_t x688 = x612 + x571;
float x1454 = x1119[x688];
int32_t x692 = x617 + x571;
float x1455 = x1119[x692];
int32_t x696 = x597 + x592;
float x1456 = x1432 * 4.0f;
float x1457 = x1431 + x1456;
float x1458 = x1433 * 6.0f;
float x1459 = x1457 + x1458;
float x1460 = x1434 * 4.0f;
float x1461 = x1459 + x1460;
float x1462 = x1461 + x1435;
float x1463 = x1437 * 4.0f;
float x1464 = x1436 + x1463;
float x1465 = x1438 * 6.0f;
float x1466 = x1464 + x1465;
float x1467 = x1439 * 4.0f;
float x1468 = x1466 + x1467;
float x1469 = x1468 + x1440;
float x1470 = x1469 * 4.0f;
float x1471 = x1462 + x1470;
float x1472 = x1442 * 4.0f;
float x1473 = x1441 + x1472;
float x1474 = x1443 * 6.0f;
float x1475 = x1473 + x1474;
float x1476 = x1444 * 4.0f;
float x1477 = x1475 + x1476;
float x1478 = x1477 + x1445;
float x1479 = x1478 * 6.0f;
float x1480 = x1471 + x1479;
float x1481 = x1447 * 4.0f;
float x1482 = x1446 + x1481;
float x1483 = x1448 * 6.0f;
float x1484 = x1482 + x1483;
float x1485 = x1449 * 4.0f;
float x1486 = x1484 + x1485;
float x1487 = x1486 + x1450;
float x1488 = x1487 * 4.0f;
float x1489 = x1480 + x1488;
float x1490 = x1452 * 4.0f;
float x1491 = x1451 + x1490;
float x1492 = x1453 * 6.0f;
float x1493 = x1491 + x1492;
float x1494 = x1454 * 4.0f;
float x1495 = x1493 + x1494;
float x1496 = x1495 + x1455;
float x1497 = x1489 + x1496;
x1127[x696] = x1497;

}
int32_t x702 = x496 + x701;
int32_t x703 = 3 * x702;
int32_t x704 = x703 + 2;
x1360[x704] = 0;
int32_t x706 = x703 + 1;
x1360[x706] = 0;
x1360[x703] = 0;

}

}
int32_t *x1508 = malloc(sizeof(int32_t) * x205);
for(int x714=1; x714 < x46; x714++) {
int32_t x717 = x714 - 2;
int32_t x718 = x2 * x717;
int32_t x723 = x714 - 1;
int32_t x724 = x2 * x723;
int32_t x731 = x2 * x714;
int32_t x738 = x714 + 1;
int32_t x739 = x2 * x738;
int32_t x746 = x714 + 2;
int32_t x747 = x2 * x746;
int32_t x778 = x202 * x723;
for(int x715=1; x715 < x45; x715++) {
int32_t x719 = x715 + x718;
int32_t x720 = 12 * x719;
int32_t x725 = x715 + x724;
int32_t x726 = 12 * x725;
int32_t x732 = x715 + x731;
int32_t x733 = 12 * x732;
int32_t x740 = x715 + x739;
int32_t x741 = 12 * x740;
int32_t x748 = x715 + x747;
int32_t x749 = 12 * x748;
for(int x716=0; x716 < 12; x716++) {
int32_t x721 = x716 + x720;
float x1509 = x1123[x721];
int32_t x727 = x716 + x726;
float x1510 = x1123[x727];
int32_t x734 = x716 + x733;
float x1511 = x1123[x734];
int32_t x742 = x716 + x741;
float x1512 = x1123[x742];
int32_t x750 = x716 + x749;
float x1513 = x1123[x750];
float x1514 = x1510 * 4.0f;
float x1515 = x1509 + x1514;
float x1516 = x1511 * 6.0f;
float x1517 = x1515 + x1516;
float x1518 = x1512 * 4.0f;
float x1519 = x1517 + x1518;
float x1520 = x1519 + x1513;
x1131[x734] = x1520;

}
for(int x756=0; x756 < 12; x756++) {
int32_t x757 = x756 + x720;
float x1524 = x1127[x757];
int32_t x759 = x756 + x726;
float x1525 = x1127[x759];
int32_t x763 = x756 + x733;
float x1526 = x1127[x763];
int32_t x767 = x756 + x741;
float x1527 = x1127[x767];
int32_t x771 = x756 + x749;
float x1528 = x1127[x771];
float x1529 = x1525 * 4.0f;
float x1530 = x1524 + x1529;
float x1531 = x1526 * 6.0f;
float x1532 = x1530 + x1531;
float x1533 = x1527 * 4.0f;
float x1534 = x1532 + x1533;
float x1535 = x1534 + x1528;
x1135[x763] = x1535;

}
int32_t x777 = x715 - 1;
int32_t x779 = x777 + x778;
int32_t x780 = 3 * x779;
int32_t x781 = x780 + 2;
x1508[x781] = 0;
int32_t x783 = x780 + 1;
x1508[x783] = 0;
x1508[x780] = 0;

}

}
int32_t *x1546 = malloc(sizeof(int32_t) * x205);
for(int x791=1; x791 < x46; x791++) {
int32_t x794 = x791 - 2;
int32_t x795 = x2 * x794;
int32_t x800 = x791 - 1;
int32_t x801 = x2 * x800;
int32_t x808 = x2 * x791;
int32_t x815 = x791 + 1;
int32_t x816 = x2 * x815;
int32_t x823 = x791 + 2;
int32_t x824 = x2 * x823;
int32_t x855 = x202 * x800;
for(int x792=1; x792 < x45; x792++) {
int32_t x796 = x792 + x795;
int32_t x797 = 12 * x796;
int32_t x802 = x792 + x801;
int32_t x803 = 12 * x802;
int32_t x809 = x792 + x808;
int32_t x810 = 12 * x809;
int32_t x817 = x792 + x816;
int32_t x818 = 12 * x817;
int32_t x825 = x792 + x824;
int32_t x826 = 12 * x825;
for(int x793=0; x793 < 12; x793++) {
int32_t x798 = x793 + x797;
float x1547 = x1123[x798];
int32_t x804 = x793 + x803;
float x1548 = x1123[x804];
int32_t x811 = x793 + x810;
float x1549 = x1123[x811];
int32_t x819 = x793 + x818;
float x1550 = x1123[x819];
int32_t x827 = x793 + x826;
float x1551 = x1123[x827];
float x1552 = x1548 * 4.0f;
float x1553 = x1547 + x1552;
float x1554 = x1549 * 6.0f;
float x1555 = x1553 + x1554;
float x1556 = x1550 * 4.0f;
float x1557 = x1555 + x1556;
float x1558 = x1557 + x1551;
x1131[x811] = x1558;

}
for(int x833=0; x833 < 12; x833++) {
int32_t x834 = x833 + x797;
float x1562 = x1127[x834];
int32_t x836 = x833 + x803;
float x1563 = x1127[x836];
int32_t x840 = x833 + x810;
float x1564 = x1127[x840];
int32_t x844 = x833 + x818;
float x1565 = x1127[x844];
int32_t x848 = x833 + x826;
float x1566 = x1127[x848];
float x1567 = x1563 * 4.0f;
float x1568 = x1562 + x1567;
float x1569 = x1564 * 6.0f;
float x1570 = x1568 + x1569;
float x1571 = x1565 * 4.0f;
float x1572 = x1570 + x1571;
float x1573 = x1572 + x1566;
x1135[x840] = x1573;

}
int32_t x854 = x792 - 1;
int32_t x856 = x854 + x855;
int32_t x857 = 3 * x856;
int32_t x858 = x857 + 2;
x1546[x858] = 0;
int32_t x860 = x857 + 1;
x1546[x860] = 0;
x1546[x857] = 0;

}

}
float *x1584 = malloc(sizeof(float) * x47);
for(int x868=0; x868 < x3; x868++) {
int32_t x872 = MIN(x868, x21);
int32_t x873 = MAX(0, x872);
int32_t x874 = x2 * x873;
int32_t x893 = x868 / 8;
int32_t x894 = x2 * x893;
int32_t x908 = x893 + 1;
int32_t x909 = x2 * x908;
int32_t x947 = x2 * x868;
int32_t x889 = x868 % 8;
float x890 = (float)x889;
float x891 = x890 / 8.0f;
float x921 = 1.0f - x891;
for(int x869=0; x869 < x2; x869++) {
int32_t x870 = MIN(x869, x17);
int32_t x871 = MAX(0, x870);
int32_t x875 = x871 + x874;
int32_t x876 = 3 * x875;
int32_t x877 = x876 + 2;
float x1585 = x1139[x877];
int32_t x879 = x876 + 1;
float x1586 = x1139[x879];
float x1587 = x1139[x876];
int32_t x892 = x869 / 8;
int32_t x895 = x892 + x894;
int32_t x896 = 12 * x895;
float x1588 = x1585 * 10.0f;
int32_t x1589 = (int32_t)x1588;
int32_t x1590 = x1589 + x896;
float x1591 = x1131[x1590];
int32_t x899 = x892 + 1;
int32_t x900 = x899 + x894;
int32_t x901 = 12 * x900;
int32_t x1592 = x1589 + x901;
float x1593 = x1131[x1592];
int32_t x910 = x892 + x909;
int32_t x911 = 12 * x910;
int32_t x1594 = x1589 + x911;
float x1595 = x1131[x1594];
int32_t x914 = x899 + x909;
int32_t x915 = 12 * x914;
int32_t x1596 = x1589 + x915;
float x1597 = x1131[x1596];
int32_t x1598 = x1589 + 1;
int32_t x1599 = x1598 + x896;
float x1600 = x1131[x1599];
int32_t x1601 = x1598 + x901;
float x1602 = x1131[x1601];
int32_t x1603 = x1598 + x911;
float x1604 = x1131[x1603];
int32_t x1605 = x1598 + x915;
float x1606 = x1131[x1605];
int32_t x948 = x869 + x947;
int32_t x949 = 3 * x948;
int32_t x950 = x949 + 2;
int32_t x886 = x869 % 8;
float x887 = (float)x886;
float x888 = x887 / 8.0f;
float x904 = 1.0f - x888;
float x1607 = x1591 * x904;
float x1608 = x1593 * x888;
float x1609 = x1607 + x1608;
float x1610 = x1609 * x921;
float x1611 = x1595 * x904;
float x1612 = x1597 * x888;
float x1613 = x1611 + x1612;
float x1614 = x1613 * x891;
float x1615 = x1610 + x1614;
float x1616 = (float)x1589;
float x1617 = x1588 - x1616;
float x1618 = 1.0f - x1617;
float x1619 = x1615 * x1618;
float x1620 = x1600 * x904;
float x1621 = x1602 * x888;
float x1622 = x1620 + x1621;
float x1623 = x1622 * x921;
float x1624 = x1604 * x904;
float x1625 = x1606 * x888;
float x1626 = x1624 + x1625;
float x1627 = x1626 * x891;
float x1628 = x1623 + x1627;
float x1629 = x1628 * x1617;
float x1630 = x1619 + x1629;
x1584[x950] = x1630;
int32_t x952 = x949 + 1;
x1584[x952] = x1630;
x1584[x949] = x1630;

}

}
float *x1638 = malloc(sizeof(float) * x47);
for(int x960=0; x960 < x3; x960++) {
int32_t x964 = MIN(x960, x21);
int32_t x965 = MAX(0, x964);
int32_t x966 = x2 * x965;
int32_t x985 = x960 / 8;
int32_t x986 = x2 * x985;
int32_t x1000 = x985 + 1;
int32_t x1001 = x2 * x1000;
int32_t x1039 = x2 * x960;
int32_t x981 = x960 % 8;
float x982 = (float)x981;
float x983 = x982 / 8.0f;
float x1013 = 1.0f - x983;
for(int x961=0; x961 < x2; x961++) {
int32_t x962 = MIN(x961, x17);
int32_t x963 = MAX(0, x962);
int32_t x967 = x963 + x966;
int32_t x968 = 3 * x967;
int32_t x969 = x968 + 2;
float x1639 = x1139[x969];
int32_t x971 = x968 + 1;
float x1640 = x1139[x971];
float x1641 = x1139[x968];
int32_t x984 = x961 / 8;
int32_t x987 = x984 + x986;
int32_t x988 = 12 * x987;
float x1642 = x1639 * 10.0f;
int32_t x1643 = (int32_t)x1642;
int32_t x1644 = x1643 + x988;
float x1645 = x1135[x1644];
int32_t x991 = x984 + 1;
int32_t x992 = x991 + x986;
int32_t x993 = 12 * x992;
int32_t x1646 = x1643 + x993;
float x1647 = x1135[x1646];
int32_t x1002 = x984 + x1001;
int32_t x1003 = 12 * x1002;
int32_t x1648 = x1643 + x1003;
float x1649 = x1135[x1648];
int32_t x1006 = x991 + x1001;
int32_t x1007 = 12 * x1006;
int32_t x1650 = x1643 + x1007;
float x1651 = x1135[x1650];
int32_t x1652 = x1643 + 1;
int32_t x1653 = x1652 + x988;
float x1654 = x1135[x1653];
int32_t x1655 = x1652 + x993;
float x1656 = x1135[x1655];
int32_t x1657 = x1652 + x1003;
float x1658 = x1135[x1657];
int32_t x1659 = x1652 + x1007;
float x1660 = x1135[x1659];
int32_t x1040 = x961 + x1039;
int32_t x1041 = 3 * x1040;
int32_t x1042 = x1041 + 2;
int32_t x978 = x961 % 8;
float x979 = (float)x978;
float x980 = x979 / 8.0f;
float x996 = 1.0f - x980;
float x1661 = x1645 * x996;
float x1662 = x1647 * x980;
float x1663 = x1661 + x1662;
float x1664 = x1663 * x1013;
float x1665 = x1649 * x996;
float x1666 = x1651 * x980;
float x1667 = x1665 + x1666;
float x1668 = x1667 * x983;
float x1669 = x1664 + x1668;
float x1670 = (float)x1643;
float x1671 = x1642 - x1670;
float x1672 = 1.0f - x1671;
float x1673 = x1669 * x1672;
float x1674 = x1654 * x996;
float x1675 = x1656 * x980;
float x1676 = x1674 + x1675;
float x1677 = x1676 * x1013;
float x1678 = x1658 * x996;
float x1679 = x1660 * x980;
float x1680 = x1678 + x1679;
float x1681 = x1680 * x983;
float x1682 = x1677 + x1681;
float x1683 = x1682 * x1671;
float x1684 = x1673 + x1683;
x1638[x1042] = x1684;
int32_t x1044 = x1041 + 1;
x1638[x1044] = x1684;
x1638[x1041] = x1684;

}

}
UCHAR *x1692 = malloc(sizeof(UCHAR) * x47);
for(int x1052=0; x1052 < x3; x1052++) {
bool x1055 = x1052 == 0;
int32_t x1067 = MIN(x1052, x21);
int32_t x1068 = MAX(0, x1067);
int32_t x1069 = x2 * x1068;
int32_t x1092 = x2 * x1052;
for(int x1053=0; x1053 < x2; x1053++) {
bool x1054 = x1053 == 0;
bool x1056 = x1054 && x1055;
if (x1056) {
free(x1123);
free(x1127);
free(x1131);
free(x1135);
free(x1115);
free(x1119);
} else {
}
int32_t x1065 = MIN(x1053, x17);
int32_t x1066 = MAX(0, x1065);
int32_t x1070 = x1066 + x1069;
int32_t x1071 = 3 * x1070;
int32_t x1072 = x1071 + 2;
float x1701 = x1584[x1072];
int32_t x1074 = x1071 + 1;
float x1702 = x1584[x1074];
float x1703 = x1584[x1071];
float x1704 = x1638[x1072];
float x1705 = x1638[x1074];
float x1706 = x1638[x1071];
int32_t x1093 = x1053 + x1092;
int32_t x1094 = 3 * x1093;
int32_t x1095 = x1094 + 2;
float x1707 = x1701 / x1704;
float x1708 = 255.0f * x1707;
float x1709 = x1708 + 0.5f;
UCHAR x1710 = (UCHAR) x1709;
x1692[x1095] = x1710;
int32_t x1097 = x1094 + 1;
float x1712 = x1702 / x1705;
float x1713 = 255.0f * x1712;
float x1714 = x1713 + 0.5f;
UCHAR x1715 = (UCHAR) x1714;
x1692[x1097] = x1715;
float x1717 = x1703 / x1706;
float x1718 = 255.0f * x1717;
float x1719 = x1718 + 0.5f;
UCHAR x1720 = (UCHAR) x1719;
x1692[x1094] = x1720;

}

}
free(x1638);
free(x1584);
free(x1546);
free(x1508);
free(x1360);
free(x1212);
free(x1147);
free(x1139);
memcpy(x1, x1692, x47);
free(x1692);
}
int32_t WIDTH_OUT_DIFF = 0;
int32_t HEIGHT_OUT_DIFF = 0;
int32_t WIDTH_OUT_MUL = 1;
int32_t WIDTH_OUT_DIV = 1;
int32_t HEIGHT_OUT_MUL = 1;
int32_t HEIGHT_OUT_DIV = 1;