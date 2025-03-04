#include <stdio.h>
#include <math.h>

int main(void) {
    int n, a, check, count;
    while (1){
        count=0;
        scanf("%d",&n);
        if (n==0){
            break;
        }
        a=n+1;
        while (a<2*n+1){
            check = 0;
            for (int i=2;i<(int)sqrt(a)+1;i++) {
                if(a%i==0){
                    check++;
                    break;
                }
            }
            if (check == 0) {
                count++;
            }
            a++;
        }
        printf("%d\n", count);
    }
}