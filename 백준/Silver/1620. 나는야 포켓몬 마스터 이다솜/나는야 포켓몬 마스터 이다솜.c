#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    char name[21];
    int num;
}inform;

int compare(const void* a, const void* b)
{
    inform A = *(inform*)a;
    inform B = *(inform*)b;

    if (strcmp(A.name,B.name)>0){
        return 1;
    }
    else {
        return -1;
    }
}

int compare2(const void* a, const void* b)
{
    inform A = *(inform*)a;
    inform B = *(inform*)b;

    if (A.num>B.num){
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    int n, quiz, sum, low, mid, high;
    char test[21];
    scanf("%d %d", &n, &quiz);
    inform dogam[n+1],dogam2[n+1];
    
    for (int i=0;i<n;i++){
        scanf("%s", dogam[i].name);
        dogam[i].num = i+1;
        dogam2[i]=dogam[i];
    }
    qsort(dogam,n,sizeof(inform),compare);
    
    for (int i=0;i<quiz;i++){
        scanf("%s", test);
        low = 0;
        high = n-1;
        if (test[0]>57){ //문자열인지 숫자인지 판단
            while(low<=high){
                mid=(low+high)/2;
                if (strcmp(dogam[mid].name,test)==0) {
                    printf("%d\n", dogam[mid].num); 
                    break;
                }
                else if (strcmp(dogam[mid].name,test)>0) {
                    high = mid - 1;
                }
                else if (strcmp(dogam[mid].name,test)<0) {
                    low = mid + 1;
                }
            }
        }
        else {
            sum=0;
            for (int j=0;j<strlen(test);j++){
                sum+=(test[j]-48)*(int)pow(10,strlen(test)-j-1);
            }
            while(low<=high){
                mid = (low+high)/2;
                if (dogam2[mid].num==sum) {
                    printf("%s\n", dogam2[mid].name);   
                    break;
                }
                else if (dogam2[mid].num>sum) {
                    high = mid - 1;
                }
                else if (dogam2[mid].num<sum) {
                    low = mid + 1;
                }
            }
        }
    }
}