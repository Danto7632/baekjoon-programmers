#include <stdio.h>

int main() {
    int a,sum;
    for (int i=0;i<3;i++){
        sum=0;
        for (int j=0;j<4;j++){
            scanf("%d", &a);
            sum+=a;
        }
        if (sum==0){
            printf("%c\n", 'D');
        }
        else if (sum==1){
            printf("%c\n", 'C');
        }
        else if (sum==2){
            printf("%c\n", 'B');
        }
        else if (sum==3){
            printf("%c\n", 'A');
        }
        else {
            printf("%c\n", 'E');
        }
    }
}