#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;


    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    
    do {
        
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    } while (i <= n);

    
    printf("The sum of all even numbers between 1 and %d is %d\n", n, sum);

    return 0;
}