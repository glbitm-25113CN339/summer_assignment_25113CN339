#include<stdio.h>
int main(){
 int n,a=0;
 printf("enter the num:");
 scanf("%d",&n);
 if(n<2){
    a=1;
 }   
 else{
    for(int i=2;i<=n;i++){
       if( n%i==0){
        a=1;
        break;
       }
    }
 }
 if(a==0){
    printf("prime no");
 }
 else{
    printf("not prime");
 }
 return 0;
}