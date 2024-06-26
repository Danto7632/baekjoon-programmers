#include <stdio.h>

int main(void){
    long int n;
    scanf("%ld", &n);
    printf("%ld\n3", n*(n-1)*(n-2)/6);
}

/*
i가 1일때 j,k 의 연산 횟수 = (n-1)(n-2)/2  = (1+2+3+...+n-2)

i가 2일때 j,k 의 연산 횟수 = (n-2)(n-3)/2 = (1+2+3+...+n-3)

...

i가 n-2 일때 j,k의 연산 횟수 = (n-n+2)(n-1-n+2)/2 = 1

1~n-2까지의 n(n+1)/2 의 합 계산

1~n-2까지 k의 합 = (n-2)(n-1)/2

1~n-2까지 k^2의 합 = (n-2)(n-1)(2n-3)/6

k(k+1)/2 <= 거듭제곱의 합의 거듭제곱의 합 (시그마 공식)
(k^2+k)/2= ((n-2)(n-1)(2n-3)/6 + 3(n-2)(n-1)/6)/2 = n(n-1)(n-2)/6
*/