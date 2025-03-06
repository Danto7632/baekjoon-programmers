#include <stdio.h>

int main() {
    long long int n,mod,sum=0;
    char a;
    scanf("%lld", &n);
    scanf("%c", &a);//의도된건지 줄내림이 공백 문자로 받아짐
    for (int i=0;i<n;i++){
        mod=1;
        scanf("%c", &a);
        for (int j=0;j<i;j++){
            mod*=31;
            mod%=1234567891;
        }
        sum+=(long long int)(a-96)*mod;
        sum%=1234567891;
    }
    printf("%lld",sum);
}