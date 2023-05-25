#include <stdio.h>
int main() {
    int start = 2;  // Start value of the series
    int end = 20;   // End value of the series
    
    printf("The series of whole numbers excluding zero with a difference of 2 is:\n");
    
    // Loop through the series and print each number
    for (int i = start; i <= end; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}
