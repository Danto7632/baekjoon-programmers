#include <stdio.h>

int main(void) {
    char a[1000001]={0};
    int count=0;

    while(scanf("%s", a)!=EOF){
        count++;
    }
    
    printf("%d", count);
}