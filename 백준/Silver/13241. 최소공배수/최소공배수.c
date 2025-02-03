#include <stdio.h>

int uc(long long int x, long long int y);

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a*b/uc(a,b));
    
}

int uc(long long int a, long long int b)
{
    long long int x=a>b?a:b, y=a>b?b:a, z;
    while (b != 0){
        z = a%b;
        a = b;
        b = z;
    }
    return a;
}