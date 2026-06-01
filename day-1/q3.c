#include<stdio.h>
int main(){
    int n,factorial;
    printf("given no:");
    scanf("%d",&n);
    if(n==0){
        printf("factorial=1");
    }
    else{
        factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("%d",factorial);
} 
return 0;
}