#include <stdio.h>

int main(){
    int n,sn=0;
    printf("Enter a 4-digit number: ");
    scanf("%d",&n);
    int temp=n;
    while(n){
        sn+=n%10;
        n=n/10;
    }
    printf("Sum of digits of %d is: %d",temp,sn);
    return 0;
}