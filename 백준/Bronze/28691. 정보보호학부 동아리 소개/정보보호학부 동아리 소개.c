#include <stdio.h>

int main() {
    char a[1];
    scanf("%c", &a[0]);
    if (a[0]=='M'){
        printf("MatKor");
    }
    else if (a[0]=='W'){
        printf("WiCys");
    }
    else if (a[0]=='C'){
        printf("CyKor");
    }
    else if (a[0]=='A'){
        printf("AlKor");
    }
    else if (a[0]=='$'){
        printf("$clear");
    }
}