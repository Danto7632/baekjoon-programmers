#include <stdio.h>
#include <string.h>

int main(void) {
    int N, len, same, out, check, count = 0;
    char a[100]={0};

    scanf("%d", &N);

    for (int i=0;i<N;i++) {
        scanf("%s", a);
        len = strlen(a);
        for (int j=97;j<123;j++) {
            check = 0;
            same = 0;
            out = 0;
            for (int k=0;k<len;k++) {
                if (j == a[k]) {
                    same = 1;
                }
                if (same == 1) {
                    if (j != a[k]) {
                        check = 1;
                    }
                    else if (j == a[k] && check==1) {
                        out = 1;
                        break;
                    }
                }
            }
            if (out==1) {
                break;
            }
        }
        if (out==1) {
            continue;
        }
        count++;
    }

    printf("%d", count);
}