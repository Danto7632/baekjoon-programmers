#include <stdio.h>
#include <string.h>

int main() {
    int len1,len2;
    char str1[1001],str2[1001];
    scanf("%s\n%s", str1, str2);
    printf("%s", strlen(str1)>=strlen(str2)?"go":"no");
}