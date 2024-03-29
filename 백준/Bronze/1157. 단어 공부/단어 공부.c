#include <stdio.h>
#include <string.h>

// a = 97, A = 65    32차이
int main(void) {
    int len, count=0, Equalcount = 0, MAXcount=0;
    char MAX, a[1000000]={0};

    scanf("%s", a);
    len = strlen(a);

    for (int i=65;i<91;i++) {
        for (int j=0;j<len;j++) {
            if (i==a[j] || i==a[j]-32) {
                count++;
            }
        }
        if (count == MAXcount) {
            Equalcount = count;
        }
        else if (count > MAXcount) {
            MAXcount = count;
            MAX = i;
        }
        count = 0;
    }

    if (MAXcount == Equalcount) {
        MAX = '?';
    }

    printf("%c", MAX);
}