int main(void) {
    int n, num, min, max;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &num);
        if (i==0) {
            min = num;
            max = num;
        }
        else {
            if (num>max)
                max = num;
            if (num<min)
                min = num;
        } 
    }
    
    printf("%d %d", min, max);
    
    
}