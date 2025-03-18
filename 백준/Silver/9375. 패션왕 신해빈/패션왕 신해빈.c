#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[21];
    char kind[21];
}inform;

int compare(const void* a, const void* b)
{
    inform A = *(inform*)a;
    inform B = *(inform*)b;

    if (strcmp(A.kind,B.kind)>0){
        return 1;
    }
    else {
        return -1;
    }
}


int main() {
    int t,n,result,count=2;
    inform str[31];
    scanf("%d", &t);
    
    for (int i=0;i<t;i++){
        result=1;
        scanf("%d", &n);
        if (n!=0){
            for (int j=0;j<n;j++){
                scanf("%s %s", str[j].name, str[j].kind);
            }
            
            qsort(str,n,sizeof(inform),compare);
            
            for (int j=0;j<n-1;j++){
                if (strcmp(str[j].kind,str[j+1].kind)==0){
                    count++;
                }
                else {
                    result*=count;
                    count=2;
                }
            }
            result*=count;
            count=2;
            printf("%d\n", result-1);
        }
        else {
            printf("%d\n", 0);
        }
    }
}