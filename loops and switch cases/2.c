#include <stdio.h>

int factorial(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}

int power(int a, int b){
    int sn=1;
    for(int i = 0; i < b; i++){
        sn = sn * a;
    }
    return sn;
}

int main(){
    int n;
    float x,sn=0;
    printf("Enter the nth term and x: ");
    scanf("%d %f",&n,&x);
    for (int i=0;i<n;i++){
        sn+=(float)(power(x,i))/factorial(i);
    }
    printf("%f", sn);
    return 0;
}
