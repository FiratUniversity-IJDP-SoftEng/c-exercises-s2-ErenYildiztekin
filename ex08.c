#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    float average;
    
    for(int i=0; i<10; i++){
        printf("Enter the number %i: ", i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    average = sum / 10.0;
    
    //Girilen sayıları gösteren döngü
    for(int i=0; i<10; i++){
        printf("Numbers entered: %d\n", numbers[i]);
    }
    
    printf("Sum            : %d\n",sum);
    printf("Average        : %f", average);
    
    return 0;
}
