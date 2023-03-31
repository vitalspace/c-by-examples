#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define a structure thans contains a field "nane" and other "age";
    struct person
    {
        char *name;
        int age;
    };

    // Create a instance of the structure "person" in the memory heap
    struct person *p = malloc(sizeof(struct person));

    // Assing values to the fields of the structure
    p->name = "Lucas";
    p->age = 22;

    // Print the values of the fields of the structure
    printf("Hello my name is: %s\n", p->name);
    printf("My age is %d \n", p->age);

    // Free the memory allocated to the structure
    free(p);
    return 0;
}