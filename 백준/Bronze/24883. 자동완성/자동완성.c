#include <stdio.h>

int main() {
    char a[1];
    scanf("%c", &a[0]);
    if (a[0]=='N'){
        printf("Naver D2");
    }
    else if (a[0]=='n'){
        printf("Naver D2");
    }
    else {
        printf("Naver Whale");
    }
}