#include <stdio.h>

int main() {
    int magic[] = {10, 5, 20, 15, 8, 25, 30, 40, 45, 100};
    int num_elements = sizeof(magic) / sizeof(int);  // Calculate the number of elements in the array
    int max = magic[0];  // Assume first element is the maximum
    int min = magic[0];  // Assume first element is the minimum
    
    // Loop through the array and update the maximum and minimum as needed
    for (int i = 1; i < num_elements; i++) {
        if (magic[i] > max) {
            max = magic[i];
        }
        if (magic[i] < min) {
            min = magic[i];
        }
    }
    
    printf("The maximum number in the array is: %d\n", max);
    printf("The minimum number in the array is: %d\n", min);
    
    return 0;
}
