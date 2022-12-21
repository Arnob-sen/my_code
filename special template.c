#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define min(x, y)                 (x<y)?x:y
#define max(x, y)                 (x>y)?x:y
#define pi                        acos(-1.0)
#define swap(x, y)                x^=y^=x^=y

typedef long long                 ll;
typedef double                    dbl;
typedef unsigned long long        ull;

int main()
{
    bool ok = true; /// true, false, 0, 1 are only valid bool value
    printf("ok = %d\n", ok);
    int a = min(5, 9);
    printf("a = %d\n", a);
    int b = max(5, 9);
    printf("b = %d\n", b);
    printf("pi = %lf\n", pi);
    swap(a, b);
    printf("After swapping a and b:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
