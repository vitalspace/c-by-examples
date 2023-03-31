#include <stdio.h>

int main() {
    
    // Define a structure that contanins a field "name" and other field "age"
    struct person
    {
        /* data */
        char *name;
        int age;
    };

    // Create a insatnce od the struct "person" in the memory stack
    struct person user;

    // Assing values to the fields of the structure using the "." operator.
    user.name = "Lucas";
    user.age = 22;

    // Print the values of the fields of the structure.
    printf("Hello my name is %s, i'm %d years old.\n", user.name, user.age);

}