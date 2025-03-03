#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n>619){
        printf("Red");
    }
    else if (n>589){
        printf("Orange");
    }
    else if (n>569){
        printf("Yellow");
    }
    else if (n>494){
        printf("Green");
    }
    else if (n>449){
        printf("Blue");
    }
    else if (n>424){
        printf("Indigo");
    }
    else {
        printf("Violet");
    }
}