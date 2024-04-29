#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n1, n2, num;
    char lis[100];
    scanf("%d %d", &n1, &n2);
    
    for (int i = 0;n1 != 0;i++){
        lis[i] = n1 % n2;
        n1 /= n2;
        if (lis[i]>=10)
            lis[i]+=55;
        else if (lis[i]>=0)
            lis[i]+=48;
        lis[i] = (char)lis[i];
        num = i;
    }
    for (int i=num;i!=-1;i--) {
        printf("%c", lis[i]);
    }
}