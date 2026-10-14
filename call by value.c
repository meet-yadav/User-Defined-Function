#include <stdio.h>

// Function to demonstrate Call by Value
void swap(int a, int b)
{
    int temp;

    // Swapping the values of local variables
    temp = a;
    a = b;
    b = temp;

    printf("\nInside Function:");
    printf("\na = %d", a);
    printf("\nb = %d", b);
}

int main()
{
    int a = 10, b = 20;

    // Display values before function call
    printf("Before Function Call:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    // Passing values to the function
    swap(a, b);

    // Display original values after function call
    printf("\n\nAfter Function Call:");
    printf("\na = %d", a);
    printf("\nb = %d\n", b);

    return 0;
}