#include <stdio.h>

int main() {
    int numbers[17];
    int index = 0;
    
    for(int i=99; i>=51; i-=3) {
        numbers[index++] = i;
    }
    
    for(int i=0; i<17; i++){
        printf("%i", numbers[i]);
        if(i<16) {
            printf(", ");
        }
    }
    
    return 0;
}
