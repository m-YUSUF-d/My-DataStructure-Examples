#include <stdio.h>
#include <stdlib.h>

void Example1();
void Example2();
void Example3();
void Example4();
void Example5();
void Example6();
void Example7();
void Example8();
void Example9();
void Example10();
void Example11();
void Example12();

int main()
{
    int num;
    while (1)
    {
        printf("\nChoose number between 1-12 for call method (0 = exit): ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("Exit complete.\n");
            break;
        }

        switch (num)
        {
        case 1:
            Example1();
            break;
        case 2:
            Example2();
        case 3:
            Example3();
            break;
        case 4:
            Example4();
            break;
        case 5:
            Example5();
            break;
        case 6:
            Example6();
            break;
        case 7:
            Example7();
            break;
        case 8:
            Example8();
            break;
        case 9:
            Example9();
            break;
        case 10:
            Example10();
            break;
        case 11:
            Example11();
            break;
        case 12:
            Example12();
            break;
        default:
            continue;
        }
    }

    return 0;
}

void Example1()
{
    int num = 1;
    while(num<=20)
    {
        printf("%d\n",num++);
    }
}
void Example2()
{
    int num = 1;
    while(num<=20)
    {
        if(num%2==1)
            printf("%d\n",num);
        num++;
    }
}
void Example3()
{
    int number, sum = 0;
    do
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
        sum += number;
    }
    while (number != 0);
    printf("Total sum of entered numbers: %d\n", sum);
}
void Example4()
{
    int password = 1234, input;
    do
    {
        printf("Enter the password: ");
        scanf("%d", &input);
    }
    while (input != password);
    printf("Correct password entered!\n");
}
void Example5()
{
    char password[] = "abcd";
    char input[20];
    do
    {
        printf("Enter the password: ");
        scanf("%s", input);
    }
    while (strcmp(input, password) != 0);
    printf("Correct password entered!\n");
}
void Example6()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Square: %d\n", number * number);
}
void Example7()
{
    int start, end, sum = 0;
    printf("Enter two numbers (small large): ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
        sum += i;
    printf("Sum between %d and %d: %d\n", start, end, sum);
}
void Example8()
{
    int grade;
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    if (grade > 90)
        printf("Your letter grade: AA\n");
    else if (grade > 85)
        printf("Your letter grade: BA\n");
    else if (grade > 75)
        printf("Your letter grade: BB\n");
    else if (grade > 70)
        printf("Your letter grade: CB\n");
    else if (grade >= 50)
        printf("Your letter grade: DC\n");
    else
        printf("Failed :(\n");
}
void Example9()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("Even number. Double: %d\n", number * 2);
    else
        printf("Odd number. Triple: %d\n", number * 3);
}
void Example10()
{
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Result: %d\n", a + b);
        break;
    case '-':
        printf("Result: %d\n", a - b);
        break;
    case '*':
        printf("Result: %d\n", a * b);
        break;
    case '/':
        if (b != 0)
            printf("Result: %.2f\n", (float)a / b);
        else
            printf("Cannot divide by zero!\n");
        break;
    default:
        printf("Invalid operation!\n");
    }
}
void Example11()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
        printf("Step %d: %d\n", i, fact);
    }
}
void Example12()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Even numbers up to %d:\n", number);
    for (int i = 2; i <= number; i += 2)
        printf("%d ", i);
    printf("\n");
}
