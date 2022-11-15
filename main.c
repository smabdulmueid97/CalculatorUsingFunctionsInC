#include<stdio.h>

// function declarations
void display(int n1, int n2, char ch, int result);
void add(int n1, int n2);
void subtract(int n1, int n2);
void multiply(int n1, int n2);
void divide(int n1, int n2);
void modulus(int n1, int n2);


// main function
int main()
{
    int n1, n2;
    int ch;

        printf("1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n5.Modulus");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        printf("Enter two numbers: ");
        scanf("%d %d", &n1, &n2);


    switch (ch) {
            case 1:
                add(n1,n2);
                break;
            case 2:
                subtract(n1,n2);
                break;
            case 3:
                multiply(n1,n2);
                break;
            case 4:
                divide(n1,n2);
                break;
            case 5:
                modulus(n1,n2);
                break;
            default:
                printf("Invalid input.");
        }
    return 0;
}

// function for displaying the result
void display(int n1, int n2, char ch, int result)
{
    printf("%d\n", result);
}

// function for addition of two numbers
void add(int n1, int n2)
{
    int result = n1 + n2;
    display(n1, n2, '+', result);
}

// function for subtraction of two numbers
void subtract(int n1, int n2)
{
    int result = n1 - n2;
    display(n1, n2, '-', result);
}

// function for multiplication of two numbers
void multiply(int n1, int n2)
{
    int result = n1 * n2;
    display(n1, n2, '*', result);
}

// function for division of two numbers
void divide(int n1, int n2)
{
    int result = n1 / n2;
    display(n1, n2, '/', result);
}

// function for calculating modulus
void modulus(int n1, int n2)
{
    int result = n1%n2;
    display(n1, n2, '%', result);
}
