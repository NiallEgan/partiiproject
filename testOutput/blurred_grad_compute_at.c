#include <string.h>
#include "pipeline.h"
void pipeline(UCHAR * x0, UCHAR * x1, int32_t x2, int32_t x3) {
int32_t x4 = x2 - 1;
int32_t x5 = MIN(x4, x2);
int32_t x8 = x5 - 1;
int32_t x6 = x3 - 1;
int32_t x7 = MIN(x6, x3);
int32_t x9 = x7 - 1;
int32_t x10 = x8 * x9;
int32_t x11 = x10 * 3;
UCHAR *x187 = malloc(sizeof(UCHAR) * x11);
int32_t x15 = x2 * 3;
int32_t x16 = x15 * 3;
for(int x14=1; x14 < x7; x14++) {
UCHAR *x188 = malloc(sizeof(UCHAR) * x16);
int32_t x18 = x14 + -1;
int32_t x19 = x14 + 1;
int32_t x20 = x19 + 1;
for(int x22=x18; x22 < x20; x22++) {
int32_t x26 = x22 - x18;
int32_t x27 = x2 * x26;
for(int x24=0; x24 < x2; x24++) {
int32_t x28 = x24 + x27;
int32_t x29 = 3 * x28;
int32_t x30 = x29 + 2;
int32_t x25 = x24 + x22;
UCHAR x31 = x25;
x188[x30] = x31;
int32_t x33 = x29 + 1;
x188[x33] = x31;
x188[x29] = x31;

}

}
int32_t x43 = x14 - 1;
int32_t x44 = x43 - x18;
int32_t x45 = x2 * x44;
int32_t x56 = x14 - x18;
int32_t x57 = x2 * x56;
int32_t x71 = x19 - x18;
int32_t x72 = x2 * x71;
int32_t x168 = x8 * x43;
for(int x41=1; x41 < x5; x41++) {
int32_t x42 = x41 + 1;
int32_t x46 = x42 + x45;
int32_t x47 = 3 * x46;
int32_t x48 = x47 + 2;
UCHAR x196 = x188[x48];
int32_t x51 = x47 + 1;
UCHAR x197 = x188[x51];
UCHAR x198 = x188[x47];
int32_t x58 = x42 + x57;
int32_t x59 = 3 * x58;
int32_t x60 = x59 + 2;
UCHAR x199 = x188[x60];
int32_t x63 = x59 + 1;
UCHAR x200 = x188[x63];
UCHAR x201 = x188[x59];
int32_t x73 = x42 + x72;
int32_t x74 = 3 * x73;
int32_t x75 = x74 + 2;
UCHAR x202 = x188[x75];
int32_t x78 = x74 + 1;
UCHAR x203 = x188[x78];
UCHAR x204 = x188[x74];
int32_t x86 = x41 + x45;
int32_t x87 = 3 * x86;
int32_t x88 = x87 + 2;
UCHAR x205 = x188[x88];
int32_t x91 = x87 + 1;
UCHAR x206 = x188[x91];
UCHAR x207 = x188[x87];
int32_t x99 = x41 + x57;
int32_t x100 = 3 * x99;
int32_t x101 = x100 + 2;
UCHAR x208 = x188[x101];
int32_t x104 = x100 + 1;
UCHAR x209 = x188[x104];
UCHAR x210 = x188[x100];
int32_t x112 = x41 + x72;
int32_t x113 = 3 * x112;
int32_t x114 = x113 + 2;
UCHAR x211 = x188[x114];
int32_t x117 = x113 + 1;
UCHAR x212 = x188[x117];
UCHAR x213 = x188[x113];
int32_t x125 = x41 - 1;
int32_t x126 = x125 + x45;
int32_t x127 = 3 * x126;
int32_t x128 = x127 + 2;
UCHAR x214 = x188[x128];
int32_t x131 = x127 + 1;
UCHAR x215 = x188[x131];
UCHAR x216 = x188[x127];
int32_t x139 = x125 + x57;
int32_t x140 = 3 * x139;
int32_t x141 = x140 + 2;
UCHAR x217 = x188[x141];
int32_t x144 = x140 + 1;
UCHAR x218 = x188[x144];
UCHAR x219 = x188[x140];
int32_t x152 = x125 + x72;
int32_t x153 = 3 * x152;
int32_t x154 = x153 + 2;
UCHAR x220 = x188[x154];
int32_t x157 = x153 + 1;
UCHAR x221 = x188[x157];
UCHAR x222 = x188[x153];
int32_t x169 = x125 + x168;
int32_t x170 = 3 * x169;
int32_t x171 = x170 + 2;
int32_t x223 = (int) x196;
int32_t x224 = (int) x199;
int32_t x225 = x223 + x224;
int32_t x226 = (int) x202;
int32_t x227 = x225 + x226;
int32_t x228 = (int) x205;
int32_t x229 = x227 + x228;
int32_t x230 = (int) x208;
int32_t x231 = x229 + x230;
int32_t x232 = (int) x211;
int32_t x233 = x231 + x232;
int32_t x234 = (int) x214;
int32_t x235 = x233 + x234;
int32_t x236 = (int) x217;
int32_t x237 = x235 + x236;
int32_t x238 = (int) x220;
int32_t x239 = x237 + x238;
int32_t x240 = x239 / 9;
UCHAR x241 = x240;
x187[x171] = x241;
int32_t x174 = x170 + 1;
int32_t x243 = (int) x197;
int32_t x244 = (int) x200;
int32_t x245 = x243 + x244;
int32_t x246 = (int) x203;
int32_t x247 = x245 + x246;
int32_t x248 = (int) x206;
int32_t x249 = x247 + x248;
int32_t x250 = (int) x209;
int32_t x251 = x249 + x250;
int32_t x252 = (int) x212;
int32_t x253 = x251 + x252;
int32_t x254 = (int) x215;
int32_t x255 = x253 + x254;
int32_t x256 = (int) x218;
int32_t x257 = x255 + x256;
int32_t x258 = (int) x221;
int32_t x259 = x257 + x258;
int32_t x260 = x259 / 9;
UCHAR x261 = x260;
x187[x174] = x261;
int32_t x263 = (int) x198;
int32_t x264 = (int) x201;
int32_t x265 = x263 + x264;
int32_t x266 = (int) x204;
int32_t x267 = x265 + x266;
int32_t x268 = (int) x207;
int32_t x269 = x267 + x268;
int32_t x270 = (int) x210;
int32_t x271 = x269 + x270;
int32_t x272 = (int) x213;
int32_t x273 = x271 + x272;
int32_t x274 = (int) x216;
int32_t x275 = x273 + x274;
int32_t x276 = (int) x219;
int32_t x277 = x275 + x276;
int32_t x278 = (int) x222;
int32_t x279 = x277 + x278;
int32_t x280 = x279 / 9;
UCHAR x281 = x280;
x187[x170] = x281;

}
free(x188);

}
memcpy(x1, x187, x11);
free(x187);
}
int32_t WIDTH_OUT_DIFF = 0;
int32_t HEIGHT_OUT_DIFF = 0;
