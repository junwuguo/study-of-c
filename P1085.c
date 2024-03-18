#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int b[14];
    int c[7];
    int d;
    for (a = 0; a < 14; a += 2) {
        scanf_s("%d %d", &b[a], &b[a + 1]);
        
    }
    a = 0;
    

    for (d = 0; d < 7; d++) {
        c[d] = b[2 * d] + b[2 * d + 1];
    }
    

    int p;
    int q=0;
    int o[7];
    int m;

    m = c[0];
    for (p = 1; p < 7; p++) {
        
        if ( m<c[p]) {
            m = c[p];
            q = p;
        }

    }
    printf("%d", q+1);
    
    
    return 0;
}
