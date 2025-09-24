#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int num=n;
        for(int j=1;j<=n;j++){
            if(j==n-i+1){
                printf("*");
            }else{
                printf("%d",num);
            }
            num--;
        }
        printf("\n");
    }
    return 0;
}
