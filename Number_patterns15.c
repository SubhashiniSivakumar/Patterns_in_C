#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int num=2*i-1;
        for(int j=num;j<=2*n-1;j+=2){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
