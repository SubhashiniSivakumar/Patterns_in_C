#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%02d ",(2*j)-1);
            
        }
        printf("\n");
    }
    return 0;
}
