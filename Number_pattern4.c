#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=n-i+1;
        if(n%2==1){
           if(i%2==1){
           for(int j=1;j<=num;j++)
               printf("%d",j);
        
           }
           else{
           for(int j=num;j>=1;j--)
               printf("%d",j);
           }
        }
        else{
               if(i%2==1){
               for(int j=num;j>=1;j--)
                  printf("%d",j);
        
           }
               else{
               for(int j=1;j<=num;j++)
                  printf("%d",j);
           }
               
           }
            printf("\n");
        }
        
        
    
    return 0;
}
