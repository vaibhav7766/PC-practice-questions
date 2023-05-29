#include <stdio.h>

int main(){
    int hh,mm,ss;
    printf("Enter time in HH MM SS: ");
    scanf("%d %d %d",&hh,&mm,&ss);
    if((hh<24 && hh>=0)&&(mm<60 && mm>=0)&&(ss<60 && ss>=0)){
        printf("Given time is in valid format.");
    }
    else{
        printf("Given time is in invalid format.");
    }
    return 0;
}