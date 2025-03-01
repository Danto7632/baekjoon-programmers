#include <stdio.h>

int main() {
    char a[101];
    scanf("%s", a);
    for (int i=0;a[i]!='\0';i++){
        printf("%c", a[i]>96?a[i]-32:a[i]+32);
    }
}