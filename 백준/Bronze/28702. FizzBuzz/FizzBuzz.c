#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char str[9];
    for (int i=0;i<3;i++){
        scanf("%s", str);
        if (atoi(str)!=0){
            num=atoi(str)+3-i;
            break;
        }
    }
    if (num%3==0){
        if (num%5==0){
            printf("FizzBuzz");
        }
        else {
            printf("Fizz");
        }
    }
    else {
        if (num%5==0){
            printf("Buzz");
        }
        else {
            printf("%d",num);
        }
    }
}