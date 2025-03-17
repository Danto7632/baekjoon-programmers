#include <stdio.h>

int main() {
    int t,n,target,arr[101],gps,maxgps,flag,ordernum;
    scanf("%d", &t);

    for (int i=0;i<t;i++){
        scanf("%d %d", &n, &target);
        for (int j=0;j<n;j++){
            scanf("%d", &arr[j]);
        }
        ordernum=0;
        gps=0;
        for (int j=0;j<n*n;j++){
            if (j%n==0){
                maxgps = target;
                flag=0;
            }
            
            if (gps>n-1){
                gps-=n;
            }

            if (arr[gps]!=0&&arr[gps]>arr[maxgps]){
                maxgps=gps;
                gps++;
                flag++;
            }
            else if (flag==0&&arr[gps]==arr[maxgps]){
                maxgps=gps;
                gps++;
                flag++;
            }
            else {
                gps++;
            }

            
            if (j!=0&&(j+1)%n==0){
                if (target==maxgps){
                    ordernum++;
                    break;
                }
                else{
                    ordernum++;
                    arr[maxgps]=0;
                    gps=maxgps+1;
                }
            }
            else if (n==1){
                ordernum++;
                break;
            }
            
        }
        
        printf("%d\n", ordernum);
    }
}

// target과 index값을 비교하고 크면 그 수를 저장하고 이어서 비교
// 끝에 다다를때 큰 수를 삭제하고 삭제된 다음 index부터 다시 이어서 비교
// 비교하면서 index가 범위를 넘어가면 범위로 나머지를 구해주면서 보정
// 끝까지 갈때까지 더 큰수가 있다면 그 수를 삭제하고 반복, 만약 없다면 다음인덱스를 삭제

// 세부사항
// 0이면 continue
// 크면 교환
// 같으면 플래그(1번)

// 다돌고 가장 큰 값 삭제, 큰 값이 없었다면 플래그(1)이나 타겟 값을 삭제