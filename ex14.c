#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n;

    printf("Fibonacci serisinin hesaplanması için bir sayı giriniz (0 veya daha büyük bir sayı): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Hata! Lütfen 0 veya daha büyük bir sayı giriniz.\n");
        return 1;
    }

    printf("%d. Fibonacci sayısı: %d\n", n, fibonacci(n));

    printf("Fibonacci serisi (ilk %d sayısı): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
