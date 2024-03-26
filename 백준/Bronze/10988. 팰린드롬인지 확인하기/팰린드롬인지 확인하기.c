#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100]={0};
    char b[100]={0};
    int len;
    
    scanf("%s", a);
    len = strlen(a);
    
    for (int i=0;i<len;i++) {
        b[i] = a[len-1-i];
        if (b[i] != a[i]) {
            printf("0");
            break;
        }
    }
    if (b[len-1]!=0){
        printf("1");
    }
}