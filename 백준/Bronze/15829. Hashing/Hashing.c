#include <stdio.h>
#include <math.h>

int main() {
    int n,sum=0;
    char a;
    scanf("%d", &n);
    scanf("%c", &a);//의도된건지 줄내림이 공백 문자로 받아짐
    for (int i=0;i<n;i++){
        scanf("%c", &a);
        sum+=(a-96)*(int)pow(31,i);
    }
    printf("%d",sum);
}