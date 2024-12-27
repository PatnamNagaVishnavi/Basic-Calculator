#include <stdio.h>
int main()
{
    int num1 ,num2,result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    char operator;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator); 
    printf("Enter the second number: ");
    scanf("%d", &num2);
    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d =%d\n", num1, num2, result);
            break;
        case '%':
            result = num1 % num2;
            printf("%d %% %d = %d\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, result);
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }
return 0;
}