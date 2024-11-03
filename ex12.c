#include <stdio.h>

int main() {
    int number; 
    long factorial = 1;
    
    printf("Faktoriyelini hesaplamak için bir sayı (0 ile 50 arasında) bir sayı giriniz: ");
    scanf("%d", &number);
    
    if (number > 50 || number < 0) {
        printf("Hata! Lütfen belirtilen aralıkta bir sayı giriniz.");
        return 1;
    }
    
    for(int i=1; i<=number;i++){
        factorial *= i;
    }
    
    printf("%d! = %ld\n", number, factorial);
    
    return 0;
}
