#include <stdio.h>

int main(void) {
    int sum=0;
    char a[15]={0};
    
    scanf("%s", a);
    
    for (int i=0;a[i]!=0;i++) {
        switch (a[i]) {
            case 'A': case 'B': case 'C':
                sum+=3;
                continue;
            case 'D': case 'E': case 'F':
                sum+=4;
                continue;
            case 'G': case 'H': case 'I':
                sum+=5;
                continue;
            case 'J': case 'K': case 'L':
                sum+=6;
                continue;
            case 'M': case 'N': case 'O':
                sum+=7;
                continue;
            case 'P': case 'Q': case 'R': case 'S':
                sum+=8;
                continue;
            case 'T': case 'U': case 'V':
                sum+=9;
                continue;
            case 'W': case 'X': case 'Y': case 'Z':
                sum+=10;
                continue;
        }
    }

    printf("%d", sum);
}