#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    do {
        if (year<9999){
            year++;
        }
        else {
            year=-1;
            break;
        }
    } while (year!=(year/100+year%100)*(year/100+year%100));
    printf("%d", year);
}