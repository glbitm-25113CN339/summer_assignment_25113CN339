#include<stdio.h>
int main(){
    int n,a;
    printf("given no:");
    scanf("%d",&n);
     a=n;
     int last,reverse=0;
while(n!=0){
    last = n%10;
    reverse=reverse*10+last;
    n=n/10;
}
if(a==reverse){
    printf("no is palindrom");
}
else{
    printf("no is not palindrom");
}
    return 0;
}