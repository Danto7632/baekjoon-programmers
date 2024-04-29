#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n, str, sum =0;
    char a[100];
    scanf("%s %d", a, &n);


    str = strlen(a);
    for (int i=0;i<str;i++){
        if (a[i]>=65)
            a[i]-=55;
        else if (a[i]>=48)
            a[i]-=48;
        sum += pow(n, str-i-1) * a[i];
    }
    printf("%d", sum);
}