#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char str[51];
}str;

int compare (const void* a, const void* b)
{
    str A = *(str*)a;
    str B = *(str*)b;
    
    if ((int)strlen(A.str) > (int)strlen(B.str)){
        return 1;
    }
    else if ((int)strlen(A.str) == (int)strlen(B.str)){
        for (int i=0;i<(int)strlen(A.str);i++){
            if ((int)A.str[i] > (int)B.str[i]){
                return 1;
            }
            else if ((int)A.str[i] == (int)B.str[i]){
                continue;
            }
            else{
                return -1;
            }
        }
        return -1;
    }
    return -1;
}

int main() {
    int n, i, strlen;
    scanf("%d", &n);
    str strarr[n];

    for (i=0;i<n;i++){
        scanf("%s", strarr[i].str);
    }

    qsort(strarr, n, sizeof(str), compare);
    
    for (i=0;i<n;i++){
        if (strcmp(strarr[i].str, strarr[i+1].str) != 0){
            printf("%s\n", strarr[i].str);
        }
    }
}

//비교법 1: 짧은 순 -> 길이비교
//비교법 2: 사전 순 -> 첫번째 첨자비교
//-> 같을시 두번째 첨자비교 -> 출력시 완전히 같으면 출력안함