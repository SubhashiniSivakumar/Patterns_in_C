#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=n;row>0;row--){
        for(int col=row;col>=1;col--){
            printf("%d",col);
        }
        printf("\n");
    }
}
