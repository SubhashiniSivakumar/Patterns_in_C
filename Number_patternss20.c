#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=2;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        
        int zero=2*(n-i)-1;
        if(zero>0){
        for(int j=1;j<=zero;j++){
            printf("0");
        }
        }
        int start=(i==n)?i-1:i;
        for(int j=start;j>=1;j--){
            printf("%d",j);
        }
        
        printf("\n");
    }
    return 0;
}
