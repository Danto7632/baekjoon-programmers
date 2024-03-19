#include <stdio.h>

int main(void) {
    int n, array[42] = {0}, count = 0;
    array[0] = 1;
    for (int i=0;i<10;i++) {
        scanf("%d", &n);
        n%=42;
        array[n] = n;
    }
    
    for (int i=1;i<42;i++) {
        if (array[i]!=0)
            count++;
    }
    if (array[0]==0)
        count++;
    
    printf("%d", count);
    
}