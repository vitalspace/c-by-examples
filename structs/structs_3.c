#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define a structure that contains a field "name" and another field "age"
    struct person
    {
        char *name;
        int age;
    };

    // Create an instance of the structure "person" in the memory stack
    struct person p;

    // Assign values to the fields of the structure using the "." operator
    p.name = "Lucas";
    p.age = 22;

    // Create an instance of the structure "person" in the memory heap
    struct person *pp = &p;

    // Assign values to the fields of the structure using the "->" operator
    pp->age = 30;
    pp->name = "Luis";

    // Print the values of the fields of the structure
    printf("Hello, my name is %s.\n", p.name);
    printf("I am %d years old.\n", p.age);

    return 0;
}





