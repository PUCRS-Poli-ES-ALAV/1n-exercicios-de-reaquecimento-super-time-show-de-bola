// Soma de dois números naturais, através de incrementos sucessivos (Ex.: 3 + 2 = + + (+ + + 1)).

#include <stdio.h>

int sum(int a, int b) {
    if(b == 0) return a;
    return sum(a++, --b);
}

int main() {
    int sum1 = sum(3, 2);
    printf("resultado: %d \n", sum1);
    return 0;
}