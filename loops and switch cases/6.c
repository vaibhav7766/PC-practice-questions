#include <stdio.h>

void decimalToHexadecimal(int decimalNum) {
    if (decimalNum == 0) {
        printf("Hexadecimal number: 0\n");
        return;
    }

    int quotient, remainder;
    int i = 0;
    char hexadecimalNum[100];

    while (decimalNum > 0) {
        quotient = decimalNum / 16;
        remainder = decimalNum % 16;

        if (remainder < 10)
            hexadecimalNum[i] = remainder + '0';
        else
            hexadecimalNum[i] = remainder + 55;

        decimalNum = quotient;
        i++;
    }

    printf("Hexadecimal number: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimalNum[j]);

    printf("\n");
}

int main() {
    int decimalNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    decimalToHexadecimal(decimalNum);

    return 0;
}
