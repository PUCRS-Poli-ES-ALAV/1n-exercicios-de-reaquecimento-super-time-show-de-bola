//Multiplicação de dois números naturais, através de somas sucessivas (Ex.: 6 ∗ 4 = 4 + 4 + 4 + 4 + 4 + 4).
#include<stdio.h>
int mult0 (int a, int b, int acc){
    
    if(b == 0) return acc;
    b--;
    return mult0(a, b, acc+ a);
} 

int mult (int a, int b) {
    return mult0(a, b, 0);

}

int main() {
    
    int result = mult(6, 4);
    printf("resultado: %d\n", result);
    return 0;
}