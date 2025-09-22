#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=n-i+1;
        for(int j=1;j<=i;j++){
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}
