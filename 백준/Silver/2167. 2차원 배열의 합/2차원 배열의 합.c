#include <stdio.h>

int main() {
    int n,m,k,i,j,x,y,arr[300][300],sum;
    scanf("%d %d", &n, &m);

    for (int a=0;a<n;a++){
        for (int b=0;b<m;b++){
            scanf("%d", &arr[a][b]);
        }
    }

    scanf("%d", &k);
    for (int a=0;a<k;a++){
        sum=0;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        i--;
        j--;
        x--;
        y--;
        for (int b=i;b<=x;b++){
            for (int c=j;c<=y;c++){
                sum+=arr[b][c];
            }
        }
        printf("%d\n", sum);
    }
}