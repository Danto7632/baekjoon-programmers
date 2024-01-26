#include <stdio.h>

int main(void){
    int price,n,a,b;
    int sum = 0;
    scanf("%d\n%d", &price, &n);
    
    for (int i=0;i<n;i++) {
        scanf("%d %d\n", &a, &b);
        sum+=a*b;
    }
    if (price==sum)
        printf("Yes");
    else
        printf("No");
}