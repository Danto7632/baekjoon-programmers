#include <stdio.h>

int main() {
    int bit, flag=0;
    for (int i=0;i<8;i++){
        scanf("%d", &bit);
        if (bit==9){
            flag++;
        }
    }
    printf("%c", flag==0?'S':'F');
}