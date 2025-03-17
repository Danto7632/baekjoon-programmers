#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[6];
    char order[6];
}str;

int compare (const void* a, const void* b){
    str A = *(str*)a;
    str B = *(str*)b;
    
    
    if (strcmp(A.name,B.name)<0){
        return 1;
    }
    else {
        return -1;
    }
}


int main() {
    int n,high,low,mid,count=0;
    scanf("%d", &n);
    str member[n];
    for (int i=0;i<n;i++){
        scanf("%s %s", member[i].name, member[i].order);
    }
    qsort(member,n,sizeof(str),compare);

    for (int i=0;i<n;i++){
        if (strcmp(member[i].name,member[i+1].name)==0){
            count++;
        }
        else {
            if (count==0){
                printf("%s\n", member[i].name);
            }
            else if (count%2==1){
                count=0;
                continue;
            }
            else {
                count=0;
                printf("%s\n", member[i].name);
            }
        }
    }
}