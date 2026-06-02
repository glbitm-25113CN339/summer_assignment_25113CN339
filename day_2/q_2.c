#include<stdio.h>
int main(){
    int n,last,reverse=0;
printf("enter the no:");
scanf("%d",&n);
while(n!=0){
    last = n%10;
    reverse=reverse*10+last;
    n=n/10;
}
printf("%d",reverse);
return 0;
}