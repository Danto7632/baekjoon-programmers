#include <stdio.h>

int main(void) {
    int n, array[30]={0}, a=0, b=0;
    for (int i=0;i<28;i++) {
        scanf("%d", &n);
        array[n-1] = n;
    }
    
    for (int i=0;i<30;i++) {
        if (a==0 && array[i] == 0)
            a = i+1;
        else if (b==0 && array[i] == 0)
            b = i+1;
    }
    
    printf("%d\n%d", a, b);
    
}