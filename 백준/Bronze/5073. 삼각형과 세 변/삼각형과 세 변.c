#include <stdio.h>

int main(){
    int a=1, b=1, c=1;
    while (1){
        scanf("%d\n%d\n%d", &a, &b, &c);
        if (a==0&&b==0&&c==0){
            break;
        }
        if (a+b>c&&a+c>b&&b+c>a){
            if (a==b&&b==c){
                printf("Equilateral");
            }
            else if (a==b){
                printf("Isosceles");
            }
            else if (a==c){
                printf("Isosceles");
            }
            else if (b==c){
                printf("Isosceles");
            }
            else {
                printf("Scalene");
            }
        }
        else {
            printf("Invalid");
        }
        printf("\n");
    }
}