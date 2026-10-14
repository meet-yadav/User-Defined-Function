#include <stdio.h>

// Function to demonstrate Call by Reference using pointers
void swap(int *a, int *b)
{
    int temp;

    // Swapping values using pointers
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;

    // Display values before function call
    printf("Before Function Call:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    // Passing addresses of variables
    swap(&a, &b);

    // Display values after swapping
    printf("\n\nAfter Function Call:");
    printf("\na = %d", a);
    printf("\nb = %d\n", b);

    return 0;
}