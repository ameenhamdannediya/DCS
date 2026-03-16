#include <stdio.h>

//  with return value and arguments
int add(int a, int b)
{
    return a + b;
}

//  with return value but no arguments
int sub()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a - b;
}

//  with arguments but no return value
void mul(int a, int b)
{
    printf("Result = %d\n", a * b);
}

//  with no arguments and no return value
void divi()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", a / b);
}

int main()
{
    int a, b,op;


    printf("\n 1 = + \n 2 = - \n 3 = * \n 4 = / \n Choose operation : ");
    scanf(" %d", &op);

    switch(op)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d\n", add(a,b));
            break;

        case 2:

            printf("Result = %d\n", sub());
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            mul(a,b);
            break;

        case 4:
            divi();
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
