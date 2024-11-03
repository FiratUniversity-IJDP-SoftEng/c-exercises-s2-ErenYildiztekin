#include <stdio.h>

int main() {
    int number;
    int count = 0;
    int sum = 0;
    float average;
    
    while(1){
        printf("Enter numbers (-1 to stop): ");
        scanf("%d", &number);
        if(number==-1){
            break;
        }
        sum += number;
        count++;
    }
    
    if(count>0) {
        average = sum / (float)count;
    }else{
        average = 0;
    }
    
    printf("Count of numbers entered   : %d\n", count);
    printf("Sum of numbers entered     : %d\n", sum);
    printf("Average of numbers entered : %.2f\n", average);
    
    return 0;
}
