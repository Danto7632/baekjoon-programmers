#include <stdio.h>

int main(void) {
    int n, c, d;
    scanf("%d\n", &n);
    int a[n];
    int b[n];
    
    for (int i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    for (int i=0;i<n;i++){
        c=a[0];
        d=0;
        for (int j=1;j<n;j++){
            if (a[j]!=0&&c>a[j]) {
                c=a[j];
                d=j;
            }
            else if (c==0) {
                c=a[j];
                d=j;
            }
            else if (j==n-1&&c==a[0]) {
                if (a[0]!=0)
                    d=0;
            }
        }
        a[d]=0;
        b[d]=i;
    }
    for (int k=0;k<n;k++) {
        printf("%d ", b[k]);
    }
}