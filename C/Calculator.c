# include <stdio.h>

int main()
{
    char op;
    float num1, num2;

    printf("Enter operator either + or - or * or /: ");
    scanf("%c",&op);

    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);

    switch(op)
    {
        case '+':
            printf("%d",(num1+num2));
            break;

        case '-':
            printf("%d",(num1-num2));
            break;

        case '*':
            printf("%d",(num1*num2));
            break;

        case '/':
            printf("%d",(num1/num2));
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            printf("Error! operator is not correct");
            break;
    }

    return 0;
}
