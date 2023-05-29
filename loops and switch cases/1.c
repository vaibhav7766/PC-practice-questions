#include <stdio.h>

int perfect(int x){
    int sn=0;
    for(int i=1; i<x; i++){
        if(x%i==0){
            sn+=i;
        }
    }
    if(x==sn){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    printf("perfect numbers till 1000 are\n");
    for(int i=1; i<=1000; i++){
        if(perfect(i)==1){
            printf("%d ",i);
        }
    }
    return 0;
}