#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int largest = 0;
    int secondLargest = 0;
    int thirdLargest = 0;
    int num;

    for(int i=0;i<n;i++){
        printf("Enter an integer: ");
        scanf("%d",&num);

        if (num>largest){
            thirdLargest=secondLargest;
            secondLargest=largest;
            largest=num;
        }
        else if(num>secondLargest){
            thirdLargest=secondLargest;
            secondLargest=num;
        }
        else if(num>thirdLargest){
            thirdLargest=num;
        }
    }
    printf("The third largest integer is: %d", thirdLargest);
    return 0;
}
