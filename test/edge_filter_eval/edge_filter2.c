#include <string.h>
#include "../../testOutput/pipeline.h"
void pipeline(UCHAR * x0, UCHAR * x1, int32_t x2, int32_t x3) {
int32_t x14 = x2 * x3;
int32_t x15 = x14 * 3;
float *x404 = malloc(sizeof(float) * x15);
for(int x18=0; x18 < x3; x18++) {
int32_t x21 = x2 * x18;
for(int x20=0; x20 < x2; x20++) {
int32_t x22 = x20 + x21;
int32_t x23 = 3 * x22;
int32_t x24 = x23 + 2;
UCHAR x25 = x0[x24];
float x29 = (float) x25;
x404[x24] = x29;
int32_t x26 = x23 + 1;
UCHAR x27 = x0[x26];
float x30 = (float) x27;
x404[x26] = x30;
UCHAR x28 = x0[x23];
float x31 = (float) x28;
x404[x23] = x31;

}

}
int32_t x4 = x3 - 3;
int32_t x39 = x4 - 3;
int32_t x40 = x2 * x39;
int32_t x41 = x40 * 3;
float *x412 = malloc(sizeof(float) * x41);
int32_t x45 = x2 + 8;
int32_t x46 = x45 - 1;
int32_t x47 = x46 / 8;
int32_t x12 = x2 - 8;
__m256 x486 = _mm256_set_ps(0.26596153f, 0.26596153f, 0.26596153f, 0.26596153f, 0.26596153f, 0.26596153f, 0.26596153f, 0.26596153f);
__m256 x489 = _mm256_set_ps(0.21296534f, 0.21296534f, 0.21296534f, 0.21296534f, 0.21296534f, 0.21296534f, 0.21296534f, 0.21296534f);
__m256 x495 = _mm256_set_ps(0.10934005f, 0.10934005f, 0.10934005f, 0.10934005f, 0.10934005f, 0.10934005f, 0.10934005f, 0.10934005f);
__m256 x501 = _mm256_set_ps(0.03599398f, 0.03599398f, 0.03599398f, 0.03599398f, 0.03599398f, 0.03599398f, 0.03599398f, 0.03599398f);
for(int x44=3; x44 < x4; x44++) {
int32_t x55 = x2 * x44;
int32_t x66 = x44 - 1;
int32_t x67 = x2 * x66;
int32_t x75 = x44 + 1;
int32_t x76 = x2 * x75;
int32_t x93 = x44 - 2;
int32_t x94 = x2 * x93;
int32_t x102 = x44 + 2;
int32_t x103 = x2 * x102;
int32_t x120 = x44 - 3;
int32_t x121 = x2 * x120;
int32_t x129 = x44 + 3;
int32_t x130 = x2 * x129;
for(int x49=0; x49 < x47; x49++) {
int32_t x51 = x49 * 8;
bool x52 = x51 > x12;
int32_t x53;
if (x52) {
x53 = x12;
} else {
x53 = x51;
}
int32_t x413 = x53 + x55;
int32_t x414 = 3 * x413;
int32_t x416 = x414 + 16;
int32_t x419 = x414 + 8;
int32_t x422 = x53 + x67;
int32_t x423 = 3 * x422;
int32_t x425 = x423 + 16;
int32_t x428 = x423 + 8;
int32_t x431 = x53 + x76;
int32_t x432 = 3 * x431;
int32_t x434 = x432 + 16;
int32_t x437 = x432 + 8;
int32_t x440 = x53 + x94;
int32_t x441 = 3 * x440;
int32_t x443 = x441 + 16;
int32_t x446 = x441 + 8;
int32_t x449 = x53 + x103;
int32_t x450 = 3 * x449;
int32_t x452 = x450 + 16;
int32_t x455 = x450 + 8;
int32_t x458 = x53 + x121;
int32_t x459 = 3 * x458;
int32_t x461 = x459 + 16;
int32_t x464 = x459 + 8;
int32_t x467 = x53 + x130;
int32_t x468 = 3 * x467;
int32_t x470 = x468 + 16;
int32_t x473 = x468 + 8;
float x417 = x404[x416];
float x420 = x404[x419];
float x421 = x404[x414];
float x426 = x404[x425];
float x429 = x404[x428];
float x430 = x404[x423];
float x435 = x404[x434];
float x438 = x404[x437];
float x439 = x404[x432];
float x444 = x404[x443];
float x447 = x404[x446];
float x448 = x404[x441];
float x453 = x404[x452];
float x456 = x404[x455];
float x457 = x404[x450];
float x462 = x404[x461];
float x465 = x404[x464];
float x466 = x404[x459];
float x471 = x404[x470];
float x474 = x404[x473];
float x475 = x404[x468];
__m256 x487 = _mm256_loadu_ps((float const *) (x404 + x416));
__m256 x490 = _mm256_loadu_ps((float const *) (x404 + x425));
__m256 x491 = _mm256_loadu_ps((float const *) (x404 + x434));
__m256 x496 = _mm256_loadu_ps((float const *) (x404 + x443));
__m256 x497 = _mm256_loadu_ps((float const *) (x404 + x452));
__m256 x502 = _mm256_loadu_ps((float const *) (x404 + x461));
__m256 x503 = _mm256_loadu_ps((float const *) (x404 + x470));
__m256 x488 = _mm256_mul_ps(x486, x487);
__m256 x492 = _mm256_add_ps(x490, x491);
__m256 x493 = _mm256_mul_ps(x489, x492);
__m256 x494 = _mm256_add_ps(x488, x493);
__m256 x498 = _mm256_add_ps(x496, x497);
__m256 x499 = _mm256_mul_ps(x495, x498);
__m256 x500 = _mm256_add_ps(x494, x499);
__m256 x504 = _mm256_add_ps(x502, x503);
__m256 x505 = _mm256_mul_ps(x501, x504);
__m256 x506 = _mm256_add_ps(x500, x505);
_mm256_storeu_ps((float *) (x412 + x461), x506);
__m256 x518 = _mm256_loadu_ps((float const *) (x404 + x419));
__m256 x520 = _mm256_loadu_ps((float const *) (x404 + x428));
__m256 x521 = _mm256_loadu_ps((float const *) (x404 + x437));
__m256 x525 = _mm256_loadu_ps((float const *) (x404 + x446));
__m256 x526 = _mm256_loadu_ps((float const *) (x404 + x455));
__m256 x530 = _mm256_loadu_ps((float const *) (x404 + x464));
__m256 x531 = _mm256_loadu_ps((float const *) (x404 + x473));
__m256 x519 = _mm256_mul_ps(x486, x518);
__m256 x522 = _mm256_add_ps(x520, x521);
__m256 x523 = _mm256_mul_ps(x489, x522);
__m256 x524 = _mm256_add_ps(x519, x523);
__m256 x527 = _mm256_add_ps(x525, x526);
__m256 x528 = _mm256_mul_ps(x495, x527);
__m256 x529 = _mm256_add_ps(x524, x528);
__m256 x532 = _mm256_add_ps(x530, x531);
__m256 x533 = _mm256_mul_ps(x501, x532);
__m256 x534 = _mm256_add_ps(x529, x533);
_mm256_storeu_ps((float *) (x412 + x464), x534);
__m256 x546 = _mm256_loadu_ps((float const *) (x404 + x414));
__m256 x548 = _mm256_loadu_ps((float const *) (x404 + x423));
__m256 x549 = _mm256_loadu_ps((float const *) (x404 + x432));
__m256 x553 = _mm256_loadu_ps((float const *) (x404 + x441));
__m256 x554 = _mm256_loadu_ps((float const *) (x404 + x450));
__m256 x558 = _mm256_loadu_ps((float const *) (x404 + x459));
__m256 x559 = _mm256_loadu_ps((float const *) (x404 + x468));
__m256 x547 = _mm256_mul_ps(x486, x546);
__m256 x550 = _mm256_add_ps(x548, x549);
__m256 x551 = _mm256_mul_ps(x489, x550);
__m256 x552 = _mm256_add_ps(x547, x551);
__m256 x555 = _mm256_add_ps(x553, x554);
__m256 x556 = _mm256_mul_ps(x495, x555);
__m256 x557 = _mm256_add_ps(x552, x556);
__m256 x560 = _mm256_add_ps(x558, x559);
__m256 x561 = _mm256_mul_ps(x501, x560);
__m256 x562 = _mm256_add_ps(x557, x561);
_mm256_storeu_ps((float *) (x412 + x459), x562);

}

}
int32_t x5 = x2 - 3;
int32_t x9 = x5 - 3;
int32_t x156 = x9 * x39;
int32_t x157 = x156 * 3;
float *x571 = malloc(sizeof(float) * x157);
int32_t x6 = x2 - 4;
int32_t x159 = x6 - 4;
int32_t x7 = x3 - 4;
int32_t x160 = x7 - 4;
int32_t x161 = x159 * x160;
int32_t x162 = x161 * 3;
UCHAR *x572 = malloc(sizeof(UCHAR) * x162);
int32_t x171 = x9 + 8;
int32_t x172 = x171 - 1;
int32_t x173 = x172 / 8;
int32_t x8 = x5 - 8;
int32_t x183 = x8 - 3;
for(int x165=4; x165 < x7; x165++) {
int32_t x166 = x165 + -1;
int32_t x167 = x165 + 1;
int32_t x168 = x167 + 1;
for(int x170=x166; x170 < x168; x170++) {
bool x177 = x170 < 5;
bool x178 = x170 == x167;
bool x179 = x177 || x178;
int32_t x187 = x170 - 3;
int32_t x188 = x2 * x187;
int32_t x273 = x9 * x187;
if (!x179) {
  continue;
}
for(int x175=0; x175 < x173; x175++) {
int32_t x180 = x175 * 8;
int32_t x181 = x180 + 3;
bool x182 = x181 > x8;
int32_t x184;
if (x182) {
x184 = x183;
} else {
x184 = x180;
}
int32_t x573 = x184 + 3;
int32_t x574 = x573 + x188;
int32_t x575 = 3 * x574;
int32_t x577 = x575 + 16;
int32_t x580 = x575 + 8;
int32_t x583 = x573 - 1;
int32_t x584 = x583 + x188;
int32_t x585 = 3 * x584;
int32_t x587 = x585 + 16;
int32_t x590 = x585 + 8;
int32_t x593 = x573 + 1;
int32_t x594 = x593 + x188;
int32_t x595 = 3 * x594;
int32_t x597 = x595 + 16;
int32_t x600 = x595 + 8;
int32_t x603 = x573 - 2;
int32_t x604 = x603 + x188;
int32_t x605 = 3 * x604;
int32_t x607 = x605 + 16;
int32_t x610 = x605 + 8;
int32_t x613 = x573 + 2;
int32_t x614 = x613 + x188;
int32_t x615 = 3 * x614;
int32_t x617 = x615 + 16;
int32_t x620 = x615 + 8;
int32_t x623 = x184 + x188;
int32_t x624 = 3 * x623;
int32_t x626 = x624 + 16;
int32_t x629 = x624 + 8;
int32_t x632 = x573 + 3;
int32_t x633 = x632 + x188;
int32_t x634 = 3 * x633;
int32_t x636 = x634 + 16;
int32_t x639 = x634 + 8;
int32_t x652 = x184 + x273;
int32_t x653 = 3 * x652;
int32_t x655 = x653 + 16;
int32_t x685 = x653 + 8;
if (true) {
float x578 = x412[x577];
float x581 = x412[x580];
float x582 = x412[x575];
float x588 = x412[x587];
float x591 = x412[x590];
float x592 = x412[x585];
float x598 = x412[x597];
float x601 = x412[x600];
float x602 = x412[x595];
float x608 = x412[x607];
float x611 = x412[x610];
float x612 = x412[x605];
float x618 = x412[x617];
float x621 = x412[x620];
float x622 = x412[x615];
float x627 = x412[x626];
float x630 = x412[x629];
float x631 = x412[x624];
float x637 = x412[x636];
float x640 = x412[x639];
float x641 = x412[x634];
__m256 x656 = _mm256_loadu_ps((float const *) (x412 + x577));
__m256 x658 = _mm256_loadu_ps((float const *) (x412 + x587));
__m256 x659 = _mm256_loadu_ps((float const *) (x412 + x597));
__m256 x663 = _mm256_loadu_ps((float const *) (x412 + x607));
__m256 x664 = _mm256_loadu_ps((float const *) (x412 + x617));
__m256 x668 = _mm256_loadu_ps((float const *) (x412 + x626));
__m256 x669 = _mm256_loadu_ps((float const *) (x412 + x636));
__m256 x657 = _mm256_mul_ps(x486, x656);
__m256 x660 = _mm256_add_ps(x658, x659);
__m256 x661 = _mm256_mul_ps(x489, x660);
__m256 x662 = _mm256_add_ps(x657, x661);
__m256 x665 = _mm256_add_ps(x663, x664);
__m256 x666 = _mm256_mul_ps(x495, x665);
__m256 x667 = _mm256_add_ps(x662, x666);
__m256 x670 = _mm256_add_ps(x668, x669);
__m256 x671 = _mm256_mul_ps(x501, x670);
__m256 x672 = _mm256_add_ps(x667, x671);
_mm256_storeu_ps((float *) (x571 + x655), x672);
__m256 x686 = _mm256_loadu_ps((float const *) (x412 + x580));
__m256 x688 = _mm256_loadu_ps((float const *) (x412 + x590));
__m256 x689 = _mm256_loadu_ps((float const *) (x412 + x600));
__m256 x693 = _mm256_loadu_ps((float const *) (x412 + x610));
__m256 x694 = _mm256_loadu_ps((float const *) (x412 + x620));
__m256 x698 = _mm256_loadu_ps((float const *) (x412 + x629));
__m256 x699 = _mm256_loadu_ps((float const *) (x412 + x639));
__m256 x687 = _mm256_mul_ps(x486, x686);
__m256 x690 = _mm256_add_ps(x688, x689);
__m256 x691 = _mm256_mul_ps(x489, x690);
__m256 x692 = _mm256_add_ps(x687, x691);
__m256 x695 = _mm256_add_ps(x693, x694);
__m256 x696 = _mm256_mul_ps(x495, x695);
__m256 x697 = _mm256_add_ps(x692, x696);
__m256 x700 = _mm256_add_ps(x698, x699);
__m256 x701 = _mm256_mul_ps(x501, x700);
__m256 x702 = _mm256_add_ps(x697, x701);
_mm256_storeu_ps((float *) (x571 + x685), x702);
__m256 x714 = _mm256_loadu_ps((float const *) (x412 + x575));
__m256 x716 = _mm256_loadu_ps((float const *) (x412 + x585));
__m256 x717 = _mm256_loadu_ps((float const *) (x412 + x595));
__m256 x721 = _mm256_loadu_ps((float const *) (x412 + x605));
__m256 x722 = _mm256_loadu_ps((float const *) (x412 + x615));
__m256 x726 = _mm256_loadu_ps((float const *) (x412 + x624));
__m256 x727 = _mm256_loadu_ps((float const *) (x412 + x634));
__m256 x715 = _mm256_mul_ps(x486, x714);
__m256 x718 = _mm256_add_ps(x716, x717);
__m256 x719 = _mm256_mul_ps(x489, x718);
__m256 x720 = _mm256_add_ps(x715, x719);
__m256 x723 = _mm256_add_ps(x721, x722);
__m256 x724 = _mm256_mul_ps(x495, x723);
__m256 x725 = _mm256_add_ps(x720, x724);
__m256 x728 = _mm256_add_ps(x726, x727);
__m256 x729 = _mm256_mul_ps(x501, x728);
__m256 x730 = _mm256_add_ps(x725, x729);
_mm256_storeu_ps((float *) (x571 + x653), x730);
}

}

}
int32_t x292 = x165 - 1;
int32_t x294 = x292 - 3;
int32_t x295 = x9 * x294;
int32_t x320 = x165 - 3;
int32_t x321 = x9 * x320;
int32_t x355 = x167 - 3;
int32_t x356 = x9 * x355;
int32_t x385 = x165 - 4;
int32_t x386 = x159 * x385;
for(int x290=4; x290 < x6; x290++) {
int32_t x291 = x290 - 1;
int32_t x293 = x291 - 3;
int32_t x296 = x293 + x295;
int32_t x297 = 3 * x296;
int32_t x298 = x297 + 2;
float x741 = x571[x298];
int32_t x300 = x297 + 1;
float x742 = x571[x300];
float x743 = x571[x297];
int32_t x303 = x290 - 3;
int32_t x304 = x303 + x295;
int32_t x305 = 3 * x304;
int32_t x306 = x305 + 2;
float x744 = x571[x306];
int32_t x308 = x305 + 1;
float x745 = x571[x308];
float x746 = x571[x305];
int32_t x311 = x290 + 1;
int32_t x312 = x311 - 3;
int32_t x313 = x312 + x295;
int32_t x314 = 3 * x313;
int32_t x315 = x314 + 2;
float x747 = x571[x315];
int32_t x317 = x314 + 1;
float x748 = x571[x317];
float x749 = x571[x314];
int32_t x322 = x293 + x321;
int32_t x323 = 3 * x322;
int32_t x324 = x323 + 2;
float x750 = x571[x324];
int32_t x326 = x323 + 1;
float x751 = x571[x326];
float x752 = x571[x323];
int32_t x332 = x303 + x321;
int32_t x333 = 3 * x332;
int32_t x334 = x333 + 2;
float x753 = x571[x334];
int32_t x336 = x333 + 1;
float x754 = x571[x336];
float x755 = x571[x333];
int32_t x345 = x312 + x321;
int32_t x346 = 3 * x345;
int32_t x347 = x346 + 2;
float x756 = x571[x347];
int32_t x349 = x346 + 1;
float x757 = x571[x349];
float x758 = x571[x346];
int32_t x357 = x293 + x356;
int32_t x358 = 3 * x357;
int32_t x359 = x358 + 2;
float x759 = x571[x359];
int32_t x361 = x358 + 1;
float x760 = x571[x361];
float x761 = x571[x358];
int32_t x364 = x303 + x356;
int32_t x365 = 3 * x364;
int32_t x366 = x365 + 2;
float x762 = x571[x366];
int32_t x368 = x365 + 1;
float x763 = x571[x368];
float x764 = x571[x365];
int32_t x374 = x312 + x356;
int32_t x375 = 3 * x374;
int32_t x376 = x375 + 2;
float x765 = x571[x376];
int32_t x378 = x375 + 1;
float x766 = x571[x378];
float x767 = x571[x375];
int32_t x384 = x290 - 4;
int32_t x387 = x384 + x386;
int32_t x388 = 3 * x387;
int32_t x389 = x388 + 2;
float x768 = x744 + x750;
float x769 = -4.0f * x753;
float x770 = x768 + x769;
float x771 = x770 + x756;
float x772 = x771 + x762;
UCHAR x773 = (UCHAR) x772;
x572[x389] = x773;
int32_t x391 = x388 + 1;
float x775 = x745 + x751;
float x776 = -4.0f * x754;
float x777 = x775 + x776;
float x778 = x777 + x757;
float x779 = x778 + x763;
UCHAR x780 = (UCHAR) x779;
x572[x391] = x780;
float x782 = x746 + x752;
float x783 = -4.0f * x755;
float x784 = x782 + x783;
float x785 = x784 + x758;
float x786 = x785 + x764;
UCHAR x787 = (UCHAR) x786;
x572[x388] = x787;

}

}
free(x571);
free(x412);
free(x404);
memcpy(x1, x572, x162);
free(x572);

}
int32_t WIDTH_OUT_DIFF = 8;
int32_t HEIGHT_OUT_DIFF = 8;
