#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    return 0;
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char sequence[100];
    int count = 0;
    int i = 0;
    char ch;

    printf("Enter a sequence of characters: ");
    while ((ch = getchar()) != '\n') {
        sequence[i] = ch;
        i++;
    }
    sequence[i] = '\0';

    clear_input_buffer();

    for (i = 0; sequence[i] != '\0'; i++) {
        if (isVowel(sequence[i]))
            count++;
    }
    printf("Number of vowels entered: %d\n", count);

    return 0;
}
