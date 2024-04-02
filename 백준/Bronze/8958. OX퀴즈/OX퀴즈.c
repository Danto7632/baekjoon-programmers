#include <stdio.h>
#include <string.h>

int main(void) {
    int n, len, count=1, sum;
    char a[80] ={0};
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++) {
        scanf("%s", a);
        len = strlen(a);
        sum=0;
        count = 1;
        for (int j=0;j<len;j++) {
            if (a[j]=='O') {
                sum += count;
                count++;
            }
            else {
                count = 1;
            }
        }
        printf("%d\n", sum);
    }
}