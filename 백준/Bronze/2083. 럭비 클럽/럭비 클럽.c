#include <stdio.h>
#include <string.h>

int main() {
    char a[11];
    int b,c;
    while(1){
        scanf("%s %d %d", a, &b, &c);
        if (strcmp(a,"#")==0){
            break;
        }
        else if (b>17){
            printf("%s Senior\n", a);
        }
        else if (c>=80){
            printf("%s Senior\n", a);
        }
        else {
            printf("%s Junior\n", a);
        }
    }
}