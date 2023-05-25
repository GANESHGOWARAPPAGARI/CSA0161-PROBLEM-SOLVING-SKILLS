 #include <stdio.h>

int main() {
    int i;

    printf("Natural numbers up to 50 with a difference of 2: ");
    for (i = 1; i <= 50; i += 2) {
        printf("%d ", i);
    }

    return 0; 
}
