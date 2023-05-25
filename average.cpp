#include <stdio.h>

int main() {  
    int num_scores = 2;
    float score, sum = 0, average;
    
    printf("Enter %d exam scores:\n", num_scores);
    for (int i = 0; i < num_scores; i++) {
        scanf("%f", &score);    // Read in each score from user input
        sum += score;           // Add each score to the sum
    }
    
    average = sum / num_scores; // Calculate the average by dividing the sum by the number of scores
    printf("The average of the %d scores is: %.2f", num_scores, average);
    
    return 0;
}
