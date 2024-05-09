#include <stdio.h>

int main(void){
    int N, M, counta=0, countb=0, countc=33, min=0;
    char sq[50][50];
    scanf("%d %d", &N, &M);

    for (int i=0;i<N;i++){
        scanf("%s", sq[i]);
    }
    for (int a=0;a<N-7;a++){
        for (int b=0;b<M-7;b++){
            counta=0;
            countb=0;
            for (int i=0+a;i<8+a;i++){
                for (int j=0+b;j<8+b;j++){
                    if (i%2==0){
                        if (j%2==0&&sq[i][j]!=87){
                            counta++;
                        }
                        else if (j%2==1&&sq[i][j]!=66){
                            counta++;
                        }
                        if (j%2==0&&sq[i][j]!=66){
                            countb++;
                        }
                        else if (j%2==1&&sq[i][j]!=87){
                            countb++;
                        }
                    }
                    else{
                        if (j%2==0&&sq[i][j]!=66){
                            counta++;
                        }
                        else if (j%2==1&&sq[i][j]!=87){
                            counta++;
                        }
                        if (j%2==0&&sq[i][j]!=87){
                            countb++;
                        }
                        else if (j%2==1&&sq[i][j]!=66){
                            countb++;
                        }
                    }
                }
            }
            if ((counta>countb?countb:counta)<countc){
                 countc = counta>countb?countb:counta;   
            }
        }
            
    }
    printf("%d", countc);
}