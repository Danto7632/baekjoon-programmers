#include <stdio.h>

int gcd(int x, int y)
{
    if (y==0){
        return x;
    }
    else{
        return gcd(y, (x%y));
    }
}

int main(){
    int n, a, b;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a*b/gcd(a, b));
    }
}