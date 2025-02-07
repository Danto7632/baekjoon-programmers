#include <stdio.h>
#include <string.h>

int main() {
    char a[5];
    while (1){
        scanf("%s", a);
        if (a[0]=='0'){
            break;
        }
        for (int i=0;i<strlen(a)/2;i++){
            if (a[i] != a[strlen(a)-1-i]){
                printf("no\n");
                a[0] = '\0';
                break;
            }
        }
        if (a[0] != '\0'){
            printf("yes\n");
        }
    }
    
}