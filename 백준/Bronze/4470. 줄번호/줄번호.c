#include <stdio.h>

int main() {
    int n;
    char str[51];
    scanf("%d\n", &n);
    for (int i=0;i<n;i++){
        gets(str);
        printf("%d. %s\n",i+1,str);
    }
}