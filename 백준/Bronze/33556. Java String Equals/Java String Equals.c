#include <stdio.h>
#include <string.h>

int main() {
    char a[101],b[101];
    scanf("%s\n%s", a, b);

    if (strcmp(a,"null")==0){
        printf("NullPointerException\n");
    }
    else if (strcmp(a,b)==0){
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    if (strcmp(a,"null")==0){
        printf("NullPointerException");
    }
    else if (strcmp(b,"null")==0){
        printf("false");
    }
    else if (strcasecmp(a,b)==0){
        printf("true");
    }
    else {
        printf("false");
    }
}