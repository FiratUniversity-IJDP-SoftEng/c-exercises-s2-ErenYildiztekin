#include <stdio.h>

long recursiveFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * recursiveFactorial(n - 1); 
}

int main() {
    int number;

    printf("Faktöriyelini hesaplamak için (0 ile 49 arasında) bir sayı giriniz: ");
    scanf("%d", &number);

    if (number < 0 || number >= 50) {
        printf("Hata! Lütfen belirtilen aralıkta bir sayı giriniz.\n");
        return 1; 
    }

    long result = recursiveFactorial(number);

    printf("%d! = %ld\n", number, result);

    return 0;
}
