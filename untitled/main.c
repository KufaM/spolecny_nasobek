#include <stdio.h>
#include <stdlib.h>

int input() {
    int number;
    int countOfChar;
    do {
        printf("Type a whole number.\n");
        scanf("%d", &number);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a whole number. Try again.\n");
        }else if(number == 0) {
            printf("DO NOT TYPE 0.\n");
        }
    } while (countOfChar != 0 || number < 0);
    return number;
}

unsigned int lcm(int a, int b) {
    a = abs(a);
    b = abs(b);
    int multiple = a > b ? a : b;
    while (multiple % a !=0 || multiple % b != 0) {
        multiple += a > b ? a : b;
    }
    return multiple;
}

int main() {
    int x;
    int y;
    x = input();
    y = input();
    printf("The least common multiple of %d, %d is %u.\n", x, y, lcm(x,y));
    return 0;
}
