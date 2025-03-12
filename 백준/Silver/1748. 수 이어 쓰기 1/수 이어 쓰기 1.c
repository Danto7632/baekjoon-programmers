#include <stdio.h>

int ten(int a){
    int sum=0,check=9, del=0,count=1;
    int b = a;
    while (1){
       if (b>=check){
           sum += (check-del)*count;
           a=b-check;
           check=check*10+9;
           count++;
           del=check/10;
       }
       else {
           sum += a*count;
           break;
       }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", ten(n));
}