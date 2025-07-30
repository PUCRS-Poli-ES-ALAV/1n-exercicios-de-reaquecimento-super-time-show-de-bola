// 3 Cálculo de 1 + 1/2 + 1/3 + 1/4 + ... + 1/N.
#include<stdio.h>
double sumfraction0(int n, double acc) {
    if (n == 0) return acc;
   
    return sumfraction0(n - 1, acc + 1.0 / n);

}
double sumfraction(int n) {
    return sumfraction0(n, 0.0);
} 
int main () {

    printf("resultado: %f \n", sumfraction(3));
    return 0;
}