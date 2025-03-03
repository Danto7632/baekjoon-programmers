#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char str[501];
}str;

int compare (const void* a, const void* b){
    str A = *(str*)a;
    str B = *(str*)b;
    
    if (strcmp(A.str,B.str)>0){
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    int n,m,high,low,mid,flag,count=0;
    char target[501];
    scanf("%d %d", &n, &m);
    str strarr[n];
    for (int i=0;i<n;i++){
        scanf("%s", strarr[i].str);
    }
    qsort(strarr,n,sizeof(str),compare);
    for (int i=0;i<m;i++){
        high = n-1;
        low = 0;
        flag = 0;
        scanf("%s", target);
        while(low<=high){
            mid = (high+low)/2;
            if (strcmp(strarr[mid].str,target)==0){
                count++;
                break;
            }
            else if (strcmp(strarr[mid].str,target)>0){
                high=mid-1;
            }
            else if (strcmp(strarr[mid].str,target)<0){
                low=mid+1;
            }
        }
    }
    printf("%d", count);
}