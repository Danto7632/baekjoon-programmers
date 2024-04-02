#include <stdio.h>

int main(void) {
    int n, num, cycle = 1;
    
    scanf("%d", &n);
    num = (n%10 + n/10)%10 + n%10*10;
    
    while (n != num) {
        num = (num%10 + num/10)%10 + num%10*10;
        cycle++;
    }
    printf("%d", cycle);
}