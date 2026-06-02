#include<stdio.h>
int main(){
    int n;
    printf("given no:");
    scanf("%d",&n);
    int product=1;
    int last=0;
    while(n!=0) {
      
        last =n%10;
 product=product*last;
 n=n/10;
        
    }
    printf("%d",product);
    return 0;
}