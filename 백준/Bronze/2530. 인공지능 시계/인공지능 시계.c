#include <stdio.h>

int main() {
    int h,m,s,plus;
    scanf("%d %d %d\n%d", &h, &m, &s, &plus);

    s = h*3600 + m*60 + s + plus;

    s = s>=3600*24?s%(3600*24):s;

    printf("%d ", s/3600);
    s%=3600;
    printf("%d ", s/60);
    s%=60;
    printf("%d", s);
}