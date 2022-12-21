
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t;
    int min, max, a;
    scanf("%d", &t);
    for (int i=0; i<t; i++) {
        scanf("%d %d %d", &min, &max, &a);
        int k = max/a;
        int val = k+max%a;
        if (min/a != k) {
            int val2 = k - 1 + a - 1;
            if (val2>val)
                val = val2;
        }
        printf("%d\n", val);
    }

}
