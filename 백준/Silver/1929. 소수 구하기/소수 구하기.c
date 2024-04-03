#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, check;
    scanf("%d %d", &a ,&b);
    
    while (a<b+1){
        if (a==1){
            a++;
            continue;
        }
        check = 0;
        for (int i=2;i<(int)sqrt(a)+1;i++) {
            if(a%i==0){
                check++;
                break;
            }
        }
        if (check == 0) {
            printf("%d\n", a);
        }
        a++;
    }
}