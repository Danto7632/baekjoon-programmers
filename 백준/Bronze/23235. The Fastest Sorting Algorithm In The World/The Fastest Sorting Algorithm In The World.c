#include <stdio.h>

int main() {
    int a,count=1,n=1;
    while (1){
        scanf("%d", &n);
        if (n==0){
            break;
        }
        else {
            for (int i=0;i<n;i++){
                scanf("%d", &a);
            }
            printf("Case %d: Sorting... done!\n",count);
            count++;
        }
    }
}