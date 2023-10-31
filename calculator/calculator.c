#include <stdio.h>
#include <string.h>

void help()
{
    printf("These are the available commands.\n");
    printf(" - add: shows the result between 2 numbers.\n");
    printf(" - sub: shows the result between 2 numbers.\n");
    printf(" - multiply: shows the result between 2 numbers.\n");
    printf(" - divide: shows the result between 2 numbers.\n");
    printf(" - exit: exit the program.\n");
}

int main()
{
    char input[100];
    int numa;
    int numb;
    printf("Welcome type 'help' to show list of commands.\n");

    while (1)
    {
        printf("> ");
        scanf("%s", input);
        if (strcmp(input, "help") == 0)
        {
            help();
        }
        else if (strcmp(input, "add") == 0)
        {
            printf("Type number: \n");
            scanf("%d", &numa);
            printf("Type number: \n");
            scanf("%d", &numb);
            printf("The sum between %d + %d = %d\n", numa, numb, (numa + numb));
        }
        else if (strcmp(input, "sub") == 0)
        {
            printf("Type number: \n");
            scanf("%d", &numa);
            printf("Type number: \n");
            scanf("%d", &numb);
            printf("The sub between %d + %d = %d\n", numa, numb, (numa - numb));
        }
        else if (strcmp(input, "multiply") == 0)
        {
            printf("Type number: \n");
            scanf("%d", &numa);
            printf("Type number: \n");
            scanf("%d", &numb);
            printf("The multiplication between  %d + %d = %d\n", numa, numb, (numa * numb));
        }
        else if (strcmp(input, "divide") == 0)
        {
            printf("Type number: \n");
            scanf("%d", &numa);
            printf("Type number: \n");
            scanf("%d", &numb);
            printf("The division between  %d + %d = %d\n", numa, numb, (numa / numb));
        }
        else if (strcmp(input, "exit") == 0)
        {
            printf("Leaving the program.\n");
            break;
        }
        else
        {
            printf("The commands is not recognized '%s' type 'help' to show list of available commands.\n", input);
        }
    }
    return 0;
}