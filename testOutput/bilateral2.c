#include <string.h>
#include "pipeline.h"
void pipeline(UCHAR * x0, UCHAR * x1, int32_t x2, int32_t x3) {
int32_t x4 = x2 * x3;
int32_t x5 = x4 * 12;
float *x780 = malloc(sizeof(float) * x5);
for(int x8=0; x8 < x5; x8++) {
x780[x8] = 0.0f;

}
float *x784 = malloc(sizeof(float) * x5);
for(int x13=0; x13 < x5; x13++) {
x784[x13] = 0.0f;

}
float *x788 = malloc(sizeof(float) * x5);
for(int x18=0; x18 < x5; x18++) {
x788[x18] = 0.0f;

}
float *x792 = malloc(sizeof(float) * x5);
for(int x23=0; x23 < x5; x23++) {
x792[x23] = 0.0f;

}
float *x796 = malloc(sizeof(float) * x5);
for(int x28=0; x28 < x5; x28++) {
x796[x28] = 0.0f;

}
float *x800 = malloc(sizeof(float) * x5);
for(int x33=0; x33 < x5; x33++) {
x800[x33] = 0.0f;

}
int32_t x41 = x4 * 3;
int32_t *x804 = malloc(sizeof(int32_t) * x41);
int32_t x56 = x2 - 1;
int32_t x59 = x3 - 1;
for(int x44=0; x44 < x3; x44++) {
int32_t x53 = x44 * 8;
int32_t x84 = x2 * x44;
for(int x46=0; x46 < x2; x46++) {
int32_t x50 = x46 * 8;
int32_t x85 = x46 + x84;
int32_t x86 = 12 * x85;
for(int x48=0; x48 < 8; x48++) {
int32_t x54 = x53 + x48;
int32_t x55 = x54 - 4;
int32_t x60 = MIN(x55, x59);
int32_t x61 = MAX(0, x60);
int32_t x62 = x2 * x61;
for(int x49=0; x49 < 8; x49++) {
int32_t x51 = x50 + x49;
int32_t x52 = x51 - 4;
int32_t x57 = MIN(x52, x56);
int32_t x58 = MAX(0, x57);
int32_t x63 = x58 + x62;
int32_t x64 = 3 * x63;
int32_t x65 = x64 + 2;
UCHAR x66 = x0[x65];
float x70 = (float) x66;
float x73 = 0.21f * x70;
int32_t x67 = x64 + 1;
UCHAR x68 = x0[x67];
float x71 = (float) x68;
float x74 = 0.72f * x71;
float x75 = x73 + x74;
UCHAR x69 = x0[x64];
float x72 = (float) x69;
float x76 = 0.07f * x72;
float x77 = x75 + x76;
float x78 = x77 / 255.0f;
float x79 = MIN(x78, 1.0f);
float x80 = MAX(0.0f, x79);
float x81 = x80 * 10.0f;
float x82 = x81 + 0.5f;
int32_t x83 = (int32_t)x82;
int32_t x87 = x83 + x86;
float x805 = x780[x87];
float x806 = x805 + x78;
x780[x87] = x806;
float x808 = x784[x87];
float x809 = x808 + 1.0f;
x784[x87] = x809;

}

}
for(int x98=0; x98 < 8; x98++) {
int32_t x102 = x53 + x98;
int32_t x103 = x102 - 4;
int32_t x106 = MIN(x103, x59);
int32_t x107 = MAX(0, x106);
int32_t x108 = x2 * x107;
for(int x99=0; x99 < 8; x99++) {
int32_t x100 = x50 + x99;
int32_t x101 = x100 - 4;
int32_t x104 = MIN(x101, x56);
int32_t x105 = MAX(0, x104);
int32_t x109 = x105 + x108;
int32_t x110 = 3 * x109;
int32_t x111 = x110 + 2;
UCHAR x112 = x0[x111];
float x116 = (float) x112;
float x119 = 0.21f * x116;
int32_t x113 = x110 + 1;
UCHAR x114 = x0[x113];
float x117 = (float) x114;
float x120 = 0.72f * x117;
float x121 = x119 + x120;
UCHAR x115 = x0[x110];
float x118 = (float) x115;
float x122 = 0.07f * x118;
float x123 = x121 + x122;
float x124 = x123 / 255.0f;
float x125 = MIN(x124, 1.0f);
float x126 = MAX(0.0f, x125);
float x127 = x126 * 10.0f;
float x128 = x127 + 0.5f;
int32_t x129 = (int32_t)x128;
int32_t x130 = x129 + x86;
float x815 = x780[x130];
float x816 = x815 + x124;
x780[x130] = x816;
float x818 = x784[x130];
float x819 = x818 + 1.0f;
x784[x130] = x819;

}

}
for(int x141=0; x141 < 8; x141++) {
int32_t x145 = x53 + x141;
int32_t x146 = x145 - 4;
int32_t x149 = MIN(x146, x59);
int32_t x150 = MAX(0, x149);
int32_t x151 = x2 * x150;
for(int x142=0; x142 < 8; x142++) {
int32_t x143 = x50 + x142;
int32_t x144 = x143 - 4;
int32_t x147 = MIN(x144, x56);
int32_t x148 = MAX(0, x147);
int32_t x152 = x148 + x151;
int32_t x153 = 3 * x152;
int32_t x154 = x153 + 2;
UCHAR x155 = x0[x154];
float x159 = (float) x155;
float x162 = 0.21f * x159;
int32_t x156 = x153 + 1;
UCHAR x157 = x0[x156];
float x160 = (float) x157;
float x163 = 0.72f * x160;
float x164 = x162 + x163;
UCHAR x158 = x0[x153];
float x161 = (float) x158;
float x165 = 0.07f * x161;
float x166 = x164 + x165;
float x167 = x166 / 255.0f;
float x168 = MIN(x167, 1.0f);
float x169 = MAX(0.0f, x168);
float x170 = x169 * 10.0f;
float x171 = x170 + 0.5f;
int32_t x172 = (int32_t)x171;
int32_t x173 = x172 + x86;
float x825 = x780[x173];
float x826 = x825 + x167;
x780[x173] = x826;
float x828 = x784[x173];
float x829 = x828 + 1.0f;
x784[x173] = x829;

}

}
int32_t x184 = 3 * x85;
int32_t x185 = x184 + 2;
x804[x185] = 0;
int32_t x187 = x184 + 1;
x804[x187] = 0;
x804[x184] = 0;

}

}
int32_t x37 = x2 - 2;
int32_t x194 = x37 - 2;
int32_t x195 = x194 * x3;
int32_t x196 = x195 * 3;
int32_t *x842 = malloc(sizeof(int32_t) * x196);
for(int x198=0; x198 < x3; x198++) {
int32_t x205 = x2 * x198;
int32_t x417 = x194 * x198;
for(int x200=2; x200 < x37; x200++) {
int32_t x203 = x200 - 2;
int32_t x206 = x203 + x205;
int32_t x207 = 12 * x206;
int32_t x228 = x200 - 1;
int32_t x229 = x228 + x205;
int32_t x230 = 12 * x229;
int32_t x250 = x200 + x205;
int32_t x251 = 12 * x250;
int32_t x271 = x200 + 1;
int32_t x272 = x271 + x205;
int32_t x273 = 12 * x272;
int32_t x293 = x200 + 2;
int32_t x294 = x293 + x205;
int32_t x295 = 12 * x294;
for(int x202=2; x202 < 10; x202++) {
int32_t x204 = x202 - 2;
int32_t x208 = x204 + x207;
float x843 = x780[x208];
int32_t x210 = x202 - 1;
int32_t x211 = x210 + x207;
float x844 = x780[x211];
int32_t x215 = x202 + x207;
float x845 = x780[x215];
int32_t x219 = x202 + 1;
int32_t x220 = x219 + x207;
float x846 = x780[x220];
int32_t x224 = x202 + 2;
int32_t x225 = x224 + x207;
float x847 = x780[x225];
int32_t x231 = x204 + x230;
float x848 = x780[x231];
int32_t x233 = x210 + x230;
float x849 = x780[x233];
int32_t x237 = x202 + x230;
float x850 = x780[x237];
int32_t x241 = x219 + x230;
float x851 = x780[x241];
int32_t x245 = x224 + x230;
float x852 = x780[x245];
int32_t x252 = x204 + x251;
float x853 = x780[x252];
int32_t x254 = x210 + x251;
float x854 = x780[x254];
int32_t x258 = x202 + x251;
float x855 = x780[x258];
int32_t x262 = x219 + x251;
float x856 = x780[x262];
int32_t x266 = x224 + x251;
float x857 = x780[x266];
int32_t x274 = x204 + x273;
float x858 = x780[x274];
int32_t x276 = x210 + x273;
float x859 = x780[x276];
int32_t x280 = x202 + x273;
float x860 = x780[x280];
int32_t x284 = x219 + x273;
float x861 = x780[x284];
int32_t x288 = x224 + x273;
float x862 = x780[x288];
int32_t x296 = x204 + x295;
float x863 = x780[x296];
int32_t x298 = x210 + x295;
float x864 = x780[x298];
int32_t x302 = x202 + x295;
float x865 = x780[x302];
int32_t x306 = x219 + x295;
float x866 = x780[x306];
int32_t x310 = x224 + x295;
float x867 = x780[x310];
float x868 = x844 * 4.0f;
float x869 = x843 + x868;
float x870 = x845 * 6.0f;
float x871 = x869 + x870;
float x872 = x846 * 4.0f;
float x873 = x871 + x872;
float x874 = x873 + x847;
float x875 = x849 * 4.0f;
float x876 = x848 + x875;
float x877 = x850 * 6.0f;
float x878 = x876 + x877;
float x879 = x851 * 4.0f;
float x880 = x878 + x879;
float x881 = x880 + x852;
float x882 = x881 * 4.0f;
float x883 = x874 + x882;
float x884 = x854 * 4.0f;
float x885 = x853 + x884;
float x886 = x855 * 6.0f;
float x887 = x885 + x886;
float x888 = x856 * 4.0f;
float x889 = x887 + x888;
float x890 = x889 + x857;
float x891 = x890 * 6.0f;
float x892 = x883 + x891;
float x893 = x859 * 4.0f;
float x894 = x858 + x893;
float x895 = x860 * 6.0f;
float x896 = x894 + x895;
float x897 = x861 * 4.0f;
float x898 = x896 + x897;
float x899 = x898 + x862;
float x900 = x899 * 4.0f;
float x901 = x892 + x900;
float x902 = x864 * 4.0f;
float x903 = x863 + x902;
float x904 = x865 * 6.0f;
float x905 = x903 + x904;
float x906 = x866 * 4.0f;
float x907 = x905 + x906;
float x908 = x907 + x867;
float x909 = x901 + x908;
x788[x258] = x909;

}
for(int x317=2; x317 < 10; x317++) {
int32_t x318 = x317 - 2;
int32_t x319 = x318 + x207;
float x913 = x784[x319];
int32_t x321 = x317 - 1;
int32_t x322 = x321 + x207;
float x914 = x784[x322];
int32_t x326 = x317 + x207;
float x915 = x784[x326];
int32_t x330 = x317 + 1;
int32_t x331 = x330 + x207;
float x916 = x784[x331];
int32_t x335 = x317 + 2;
int32_t x336 = x335 + x207;
float x917 = x784[x336];
int32_t x339 = x318 + x230;
float x918 = x784[x339];
int32_t x341 = x321 + x230;
float x919 = x784[x341];
int32_t x345 = x317 + x230;
float x920 = x784[x345];
int32_t x349 = x330 + x230;
float x921 = x784[x349];
int32_t x353 = x335 + x230;
float x922 = x784[x353];
int32_t x358 = x318 + x251;
float x923 = x784[x358];
int32_t x360 = x321 + x251;
float x924 = x784[x360];
int32_t x364 = x317 + x251;
float x925 = x784[x364];
int32_t x368 = x330 + x251;
float x926 = x784[x368];
int32_t x372 = x335 + x251;
float x927 = x784[x372];
int32_t x377 = x318 + x273;
float x928 = x784[x377];
int32_t x379 = x321 + x273;
float x929 = x784[x379];
int32_t x383 = x317 + x273;
float x930 = x784[x383];
int32_t x387 = x330 + x273;
float x931 = x784[x387];
int32_t x391 = x335 + x273;
float x932 = x784[x391];
int32_t x396 = x318 + x295;
float x933 = x784[x396];
int32_t x398 = x321 + x295;
float x934 = x784[x398];
int32_t x402 = x317 + x295;
float x935 = x784[x402];
int32_t x406 = x330 + x295;
float x936 = x784[x406];
int32_t x410 = x335 + x295;
float x937 = x784[x410];
float x938 = x914 * 4.0f;
float x939 = x913 + x938;
float x940 = x915 * 6.0f;
float x941 = x939 + x940;
float x942 = x916 * 4.0f;
float x943 = x941 + x942;
float x944 = x943 + x917;
float x945 = x919 * 4.0f;
float x946 = x918 + x945;
float x947 = x920 * 6.0f;
float x948 = x946 + x947;
float x949 = x921 * 4.0f;
float x950 = x948 + x949;
float x951 = x950 + x922;
float x952 = x951 * 4.0f;
float x953 = x944 + x952;
float x954 = x924 * 4.0f;
float x955 = x923 + x954;
float x956 = x925 * 6.0f;
float x957 = x955 + x956;
float x958 = x926 * 4.0f;
float x959 = x957 + x958;
float x960 = x959 + x927;
float x961 = x960 * 6.0f;
float x962 = x953 + x961;
float x963 = x929 * 4.0f;
float x964 = x928 + x963;
float x965 = x930 * 6.0f;
float x966 = x964 + x965;
float x967 = x931 * 4.0f;
float x968 = x966 + x967;
float x969 = x968 + x932;
float x970 = x969 * 4.0f;
float x971 = x962 + x970;
float x972 = x934 * 4.0f;
float x973 = x933 + x972;
float x974 = x935 * 6.0f;
float x975 = x973 + x974;
float x976 = x936 * 4.0f;
float x977 = x975 + x976;
float x978 = x977 + x937;
float x979 = x971 + x978;
x792[x364] = x979;

}
int32_t x418 = x203 + x417;
int32_t x419 = 3 * x418;
int32_t x420 = x419 + 2;
x842[x420] = 0;
int32_t x422 = x419 + 1;
x842[x422] = 0;
x842[x419] = 0;

}

}
int32_t x38 = x3 - 2;
int32_t x429 = x38 - 2;
int32_t x430 = x194 * x429;
int32_t x431 = x430 * 3;
int32_t *x990 = malloc(sizeof(int32_t) * x431);
for(int x434=2; x434 < x38; x434++) {
int32_t x437 = x434 - 2;
int32_t x438 = x2 * x437;
int32_t x443 = x434 - 1;
int32_t x444 = x2 * x443;
int32_t x451 = x2 * x434;
int32_t x458 = x434 + 1;
int32_t x459 = x2 * x458;
int32_t x466 = x434 + 2;
int32_t x467 = x2 * x466;
int32_t x498 = x194 * x437;
for(int x435=2; x435 < x37; x435++) {
int32_t x439 = x435 + x438;
int32_t x440 = 12 * x439;
int32_t x445 = x435 + x444;
int32_t x446 = 12 * x445;
int32_t x452 = x435 + x451;
int32_t x453 = 12 * x452;
int32_t x460 = x435 + x459;
int32_t x461 = 12 * x460;
int32_t x468 = x435 + x467;
int32_t x469 = 12 * x468;
for(int x436=2; x436 < 10; x436++) {
int32_t x441 = x436 + x440;
float x991 = x788[x441];
int32_t x447 = x436 + x446;
float x992 = x788[x447];
int32_t x454 = x436 + x453;
float x993 = x788[x454];
int32_t x462 = x436 + x461;
float x994 = x788[x462];
int32_t x470 = x436 + x469;
float x995 = x788[x470];
float x996 = x992 * 4.0f;
float x997 = x991 + x996;
float x998 = x993 * 6.0f;
float x999 = x997 + x998;
float x1000 = x994 * 4.0f;
float x1001 = x999 + x1000;
float x1002 = x1001 + x995;
x796[x454] = x1002;

}
for(int x476=2; x476 < 10; x476++) {
int32_t x477 = x476 + x440;
float x1006 = x792[x477];
int32_t x479 = x476 + x446;
float x1007 = x792[x479];
int32_t x483 = x476 + x453;
float x1008 = x792[x483];
int32_t x487 = x476 + x461;
float x1009 = x792[x487];
int32_t x491 = x476 + x469;
float x1010 = x792[x491];
float x1011 = x1007 * 4.0f;
float x1012 = x1006 + x1011;
float x1013 = x1008 * 6.0f;
float x1014 = x1012 + x1013;
float x1015 = x1009 * 4.0f;
float x1016 = x1014 + x1015;
float x1017 = x1016 + x1010;
x800[x483] = x1017;

}
int32_t x497 = x435 - 2;
int32_t x499 = x497 + x498;
int32_t x500 = 3 * x499;
int32_t x501 = x500 + 2;
x990[x501] = 0;
int32_t x503 = x500 + 1;
x990[x503] = 0;
x990[x500] = 0;

}

}
float *x1028 = malloc(sizeof(float) * x431);
for(int x511=2; x511 < x38; x511++) {
int32_t x515 = MIN(x511, x59);
int32_t x516 = MAX(0, x515);
int32_t x517 = x2 * x516;
int32_t x547 = x511 / 8;
int32_t x548 = x2 * x547;
int32_t x562 = x547 + 1;
int32_t x563 = x2 * x562;
int32_t x602 = x511 - 2;
int32_t x603 = x194 * x602;
int32_t x543 = x511 % 8;
float x544 = (float)x543;
float x545 = x544 / 8.0f;
float x575 = 1.0f - x545;
for(int x512=2; x512 < x37; x512++) {
int32_t x513 = MIN(x512, x56);
int32_t x514 = MAX(0, x513);
int32_t x518 = x514 + x517;
int32_t x519 = 3 * x518;
int32_t x520 = x519 + 2;
UCHAR x521 = x0[x520];
float x525 = (float) x521;
float x528 = 0.21f * x525;
int32_t x522 = x519 + 1;
UCHAR x523 = x0[x522];
float x526 = (float) x523;
float x529 = 0.72f * x526;
float x530 = x528 + x529;
UCHAR x524 = x0[x519];
float x527 = (float) x524;
float x531 = 0.07f * x527;
float x532 = x530 + x531;
float x533 = x532 / 255.0f;
float x534 = MIN(x533, 1.0f);
float x535 = MAX(0.0f, x534);
float x536 = x535 * 10.0f;
int32_t x537 = (int32_t)x536;
int32_t x546 = x512 / 8;
int32_t x549 = x546 + x548;
int32_t x550 = 12 * x549;
int32_t x551 = x537 + x550;
float x1029 = x796[x551];
int32_t x553 = x546 + 1;
int32_t x554 = x553 + x548;
int32_t x555 = 12 * x554;
int32_t x556 = x537 + x555;
float x1030 = x796[x556];
int32_t x564 = x546 + x563;
int32_t x565 = 12 * x564;
int32_t x566 = x537 + x565;
float x1031 = x796[x566];
int32_t x568 = x553 + x563;
int32_t x569 = 12 * x568;
int32_t x570 = x537 + x569;
float x1032 = x796[x570];
int32_t x579 = x537 + 1;
int32_t x580 = x579 + x550;
float x1033 = x796[x580];
int32_t x582 = x579 + x555;
float x1034 = x796[x582];
int32_t x587 = x579 + x565;
float x1035 = x796[x587];
int32_t x589 = x579 + x569;
float x1036 = x796[x589];
int32_t x601 = x512 - 2;
int32_t x604 = x601 + x603;
int32_t x605 = 3 * x604;
int32_t x606 = x605 + 2;
float x538 = (float)x537;
float x539 = x536 - x538;
float x597 = 1.0f - x539;
int32_t x540 = x512 % 8;
float x541 = (float)x540;
float x542 = x541 / 8.0f;
float x558 = 1.0f - x542;
float x1037 = x1029 * x558;
float x1038 = x1030 * x542;
float x1039 = x1037 + x1038;
float x1040 = x1039 * x575;
float x1041 = x1031 * x558;
float x1042 = x1032 * x542;
float x1043 = x1041 + x1042;
float x1044 = x1043 * x545;
float x1045 = x1040 + x1044;
float x1046 = x1045 * x597;
float x1047 = x1033 * x558;
float x1048 = x1034 * x542;
float x1049 = x1047 + x1048;
float x1050 = x1049 * x575;
float x1051 = x1035 * x558;
float x1052 = x1036 * x542;
float x1053 = x1051 + x1052;
float x1054 = x1053 * x545;
float x1055 = x1050 + x1054;
float x1056 = x1055 * x539;
float x1057 = x1046 + x1056;
x1028[x606] = x1057;
int32_t x608 = x605 + 1;
x1028[x608] = x1057;
x1028[x605] = x1057;

}

}
float *x1065 = malloc(sizeof(float) * x431);
for(int x616=2; x616 < x38; x616++) {
int32_t x620 = MIN(x616, x59);
int32_t x621 = MAX(0, x620);
int32_t x622 = x2 * x621;
int32_t x652 = x616 / 8;
int32_t x653 = x2 * x652;
int32_t x667 = x652 + 1;
int32_t x668 = x2 * x667;
int32_t x707 = x616 - 2;
int32_t x708 = x194 * x707;
int32_t x648 = x616 % 8;
float x649 = (float)x648;
float x650 = x649 / 8.0f;
float x680 = 1.0f - x650;
for(int x617=2; x617 < x37; x617++) {
int32_t x618 = MIN(x617, x56);
int32_t x619 = MAX(0, x618);
int32_t x623 = x619 + x622;
int32_t x624 = 3 * x623;
int32_t x625 = x624 + 2;
UCHAR x626 = x0[x625];
float x630 = (float) x626;
float x633 = 0.21f * x630;
int32_t x627 = x624 + 1;
UCHAR x628 = x0[x627];
float x631 = (float) x628;
float x634 = 0.72f * x631;
float x635 = x633 + x634;
UCHAR x629 = x0[x624];
float x632 = (float) x629;
float x636 = 0.07f * x632;
float x637 = x635 + x636;
float x638 = x637 / 255.0f;
float x639 = MIN(x638, 1.0f);
float x640 = MAX(0.0f, x639);
float x641 = x640 * 10.0f;
int32_t x642 = (int32_t)x641;
int32_t x651 = x617 / 8;
int32_t x654 = x651 + x653;
int32_t x655 = 12 * x654;
int32_t x656 = x642 + x655;
float x1066 = x800[x656];
int32_t x658 = x651 + 1;
int32_t x659 = x658 + x653;
int32_t x660 = 12 * x659;
int32_t x661 = x642 + x660;
float x1067 = x800[x661];
int32_t x669 = x651 + x668;
int32_t x670 = 12 * x669;
int32_t x671 = x642 + x670;
float x1068 = x800[x671];
int32_t x673 = x658 + x668;
int32_t x674 = 12 * x673;
int32_t x675 = x642 + x674;
float x1069 = x800[x675];
int32_t x684 = x642 + 1;
int32_t x685 = x684 + x655;
float x1070 = x800[x685];
int32_t x687 = x684 + x660;
float x1071 = x800[x687];
int32_t x692 = x684 + x670;
float x1072 = x800[x692];
int32_t x694 = x684 + x674;
float x1073 = x800[x694];
int32_t x706 = x617 - 2;
int32_t x709 = x706 + x708;
int32_t x710 = 3 * x709;
int32_t x711 = x710 + 2;
float x643 = (float)x642;
float x644 = x641 - x643;
float x702 = 1.0f - x644;
int32_t x645 = x617 % 8;
float x646 = (float)x645;
float x647 = x646 / 8.0f;
float x663 = 1.0f - x647;
float x1074 = x1066 * x663;
float x1075 = x1067 * x647;
float x1076 = x1074 + x1075;
float x1077 = x1076 * x680;
float x1078 = x1068 * x663;
float x1079 = x1069 * x647;
float x1080 = x1078 + x1079;
float x1081 = x1080 * x650;
float x1082 = x1077 + x1081;
float x1083 = x1082 * x702;
float x1084 = x1070 * x663;
float x1085 = x1071 * x647;
float x1086 = x1084 + x1085;
float x1087 = x1086 * x680;
float x1088 = x1072 * x663;
float x1089 = x1073 * x647;
float x1090 = x1088 + x1089;
float x1091 = x1090 * x650;
float x1092 = x1087 + x1091;
float x1093 = x1092 * x644;
float x1094 = x1083 + x1093;
x1065[x711] = x1094;
int32_t x713 = x710 + 1;
x1065[x713] = x1094;
x1065[x710] = x1094;

}

}
int32_t x39 = MIN(x37, x2);
int32_t x720 = x39 - 2;
int32_t x40 = MIN(x38, x3);
int32_t x721 = x40 - 2;
int32_t x722 = x720 * x721;
int32_t x723 = x722 * 3;
UCHAR *x1102 = malloc(sizeof(UCHAR) * x723);
int32_t x731 = x194 - 1;
int32_t x734 = x429 - 1;
for(int x726=2; x726 < x40; x726++) {
int32_t x730 = x726 - 2;
int32_t x735 = MIN(x730, x734);
int32_t x736 = MAX(0, x735);
int32_t x737 = x194 * x736;
int32_t x760 = x720 * x730;
for(int x728=2; x728 < x39; x728++) {
int32_t x729 = x728 - 2;
int32_t x732 = MIN(x729, x731);
int32_t x733 = MAX(0, x732);
int32_t x738 = x733 + x737;
int32_t x739 = 3 * x738;
int32_t x740 = x739 + 2;
float x1103 = x1028[x740];
int32_t x742 = x739 + 1;
float x1104 = x1028[x742];
float x1105 = x1028[x739];
float x1106 = x1065[x740];
float x1107 = x1065[x742];
float x1108 = x1065[x739];
int32_t x761 = x729 + x760;
int32_t x762 = 3 * x761;
int32_t x763 = x762 + 2;
float x1109 = x1103 / x1106;
float x1110 = 255.0f * x1109;
float x1111 = x1110 + 0.5f;
UCHAR x1112 = (UCHAR) x1111;
x1102[x763] = x1112;
int32_t x765 = x762 + 1;
float x1114 = x1104 / x1107;
float x1115 = 255.0f * x1114;
float x1116 = x1115 + 0.5f;
UCHAR x1117 = (UCHAR) x1116;
x1102[x765] = x1117;
float x1119 = x1105 / x1108;
float x1120 = 255.0f * x1119;
float x1121 = x1120 + 0.5f;
UCHAR x1122 = (UCHAR) x1121;
x1102[x762] = x1122;

}

}
free(x1065);
free(x1028);
free(x990);
free(x842);
free(x804);
memcpy(x1, x1102, x723);
free(x1102);
}
int32_t WIDTH_OUT_DIFF = 0;
int32_t HEIGHT_OUT_DIFF = 0;
int32_t WIDTH_OUT_MUL = 1;
int32_t WIDTH_OUT_DIV = 1;
int32_t HEIGHT_OUT_MUL = 1;
int32_t HEIGHT_OUT_DIV = 1;