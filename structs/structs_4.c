#include <stdio.h>

// Define a structure for user information
struct UserInfo {
    int id;
    int (*Age)(int);        // Function pointer for Age
    char *(*Name)(char *);  // Function pointer for Name
};

// Function to return the age
int Age(int age){
    return age;
}

// Function to return the name
char *Name(char * name) {
    return name;
}

int main() {

    // Create an instance of the UserInfo structure to store user information
    struct UserInfo user;

    // Initialize user's id, Age, and Name with appropriate values and functions
    user.id = 1;
    user.Age = Age;
    user.Name = Name;

    // Display user information
    printf("User id: %d\n", user.id);
    printf("User age: %d\n", user.Age(28));         // Call the Age function through the function pointer
    printf("User name: %s\n", user.Name("Lucas"));  // Call the Name function through the function pointer

    return 0;
}
