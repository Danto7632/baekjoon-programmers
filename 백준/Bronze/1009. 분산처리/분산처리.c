#include <stdio.h>
#include <math.h>

int main() {
    int n,a,b,data;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d %d", &a, &b);
        data = (int)pow(a%10,b%4==0?4:b%4)%10;
        printf("%d\n", data==0?10:data);
    }
}