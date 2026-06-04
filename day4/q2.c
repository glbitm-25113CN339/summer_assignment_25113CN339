#include<stdio.h>
int main(){
    int n;
    printf("enter the required term");
    scanf("%d",&n);
    int a= 0,b=1,sum=1;
    for(int i=1;i<n;i++){   
        a=b;
        b=sum;
         sum=a + b;
       
    }
     printf(" %d ", b);
    return 0;
}