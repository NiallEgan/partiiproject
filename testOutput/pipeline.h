#include <stdlib.h>
#include <stdbool.h>

#define UCHAR unsigned char
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))


void pipeline(UCHAR *x0, UCHAR *x1, int w, int h);
int32_t WIDTH_OUT_DIFF;
int32_t HEIGHT_OUT_DIFF;
