#include <stdio.h>
#include <string.h>

int main()
{
    int len, arrint[10]={0,};
    char arrchar[10];
    scanf("%s", arrchar);
    len = strlen(arrchar);
    
    for (int i=0;i<len;i++){
        arrint[arrchar[i]-48]++;
    }
    

    for (int i=9;i>=0;i--){
        if (arrint[i]>0){
            printf("%d", i);
            arrint[i]--;
            i++;
            continue;
        }
    }
    
}
// 카운팅 정렬 활용
// 가독성 좋게 2차 수정 필요