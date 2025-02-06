#include <stdio.h>
#include <math.h>

long long int prime(long long int a);

int main() {
    long long int n, a;
    scanf("%lld", &n);
    for (long long int i=0;i<n;i++){
        scanf("%lld", &a);
        if (i == n-1){
            printf("%lld", prime(a));
        }
        else{
            printf("%lld\n", prime(a));
        }
    }
}

long long int prime(long long int a)
{
    if (a<3){
        return 2;
    }
    for(long long int i=2;i<=sqrt(a);i++){
        if (a%i==0){
            a++;
            i=1;
            continue;
        }
    }
    return a;
}