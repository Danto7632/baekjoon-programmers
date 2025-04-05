#include <stdio.h>

int main() {
    int month,day;
    scanf("%d\n%d", &month, &day);
    printf("%s", month==2&&day==18?"Special":month>2?"After":month==2&&day>18?"After":"Before");
}