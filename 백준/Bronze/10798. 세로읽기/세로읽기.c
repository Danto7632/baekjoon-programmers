#include <stdio.h>

int main(void) {
    char a[5][15]={'\0'};
    
    for (int i=0;i<5;i++) {
        scanf("%s", a[i]);
    }

    for (int j=0;j<15;j++) {
        for (int i=0;i<5;i++) {
            if (a[i][j]!=NULL){
                printf("%c", a[i][j]);
            }
        }
    }
}