int main(void) {
    int num, max, count;
    for (int i=0;i<9;i++) {
        scanf("%d", &num);
        if (i==0||num>max) {
            max = num;
            count = i+1;
        } 
    }
    
    printf("%d\n%d", max, count);
}