#include <stdio.h>

int main(void) {
    int a, b, c, d, f, g, i=0;
    f = -99999;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &a, &b);

    int e[a][b];

    printf("Enter the elements of the array:\n");
    for (c = 0; c < a; c++) {
        for (d = 0; d < b; d++) {
            scanf("%d", &e[c][d]);
        }
    }

    printf("Saddle points found at positions:\n");
    for (c = 0; c < a; c++) {
        for (d = 0; d < b; d++) {
            if (e[c][d] > f) {
                f = e[c][d];
                i = d;
            }
        }
        for (g = 0; g < a; g++) {
            if (e[g][i] < f) {
                break;
            }
        }
        if (g == a) {
            printf("Array[%d][%d] = %d\n", c, i, f);
        }
    }

    return 0;
}
