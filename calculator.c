#include <stdio.h>
int main()
{
    float a, b, ans;
    char op;
first:
    printf("\nEnter your first number:\n");
    scanf("%f", &a);
    printf("Enter your second number:\n");
    scanf("%f", &b);
    printf("Enter any operation you want : ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        ans = a + b;
        printf("ANSWER: %f+%f=%f", a , b, ans);
        goto first;
    case '-':
        ans = a - b;
         printf("ANSWER: %f+%f=%f", a , b, ans);
        goto first;
    case '*':
        ans = a * b;
         printf("ANSWER: %f+%f=%f", a , b, ans);
        goto first;
    case '/':
        ans = a / b;
        printf("ANSWER: %f+%f=%f", a , b, ans);
        goto first;
    default:
        printf("Wrong input! Please try again");
        goto first;
    }
    return 0;
}
