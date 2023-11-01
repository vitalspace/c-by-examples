#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to display available commands
void help() {
    printf("Welcome! These are the available commands:\n");
    printf(" - createfile: create a new file\n");
    printf(" - readfile: read a file\n");
    printf(" - deletefile: delete a file\n");
    printf(" - updatefile: update a file\n");
    printf(" - exit: leave the program\n");
}

// Function to create a new file
void createFile() {
    char filename[100];
    char data[100];

    printf("Enter the filename: \n");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;

    printf("Enter some data: \n");
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = 0;

    FILE *file;
    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Could not create the file\n");
    } else {
        fprintf(file, "%s", data);
        fclose(file);
        printf("The file has been created successfully\n");
    }
}

// Function to read the contents of a file
void readFile() {
    char filename[100];
    char *content;
    long fileSize;

    printf("Enter the file name: \n");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;

    FILE *file;

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Could not open the file\n");
    } else {
        fseek(file, 0, SEEK_END);
        fileSize = ftell(file);
        fseek(file, 0, SEEK_SET);

        content = (char *)malloc(fileSize * sizeof(char));

        fread(content, sizeof(char), fileSize, file);

        printf("%s\n", content);

        free(content);
        fclose(file);
    }
}

// Function to delete a file
void deleteFile() {
    char filename[100];

    printf("Enter the file name: \n");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;

    if (remove(filename) == 0) {
        printf("The file was removed successfully\n");
    } else {
        printf("File could not be removed\n");
    }
}

// Function to update the contents of a file
void updateFile() {
    char filename[100];
    char data[100];
    FILE *file;

    printf("Enter the file name: \n");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;

    file = fopen(filename, "r+");

    if (file == NULL) {
        printf("Could not open the file\n");
    } else {
        fseek(file, 0, SEEK_END);

        printf("Enter new data: \n");
        fgets(data, sizeof(data), stdin);
        data[strcspn(data, "\n")] = 0;

        fprintf(file, "%s", data);

        printf("File was updated successfully\n");

        fclose(file);
    }
}

// Main function
int main() {
    char input[100];
    printf("Welcome! Type 'help' to show a list of available commands\n");

    while (1) {
        printf("> ");
        scanf("%s", input);
        getchar();

        if (strcmp(input, "help") == 0) {
            help();
        } else if (strcmp(input, "createfile") == 0) {
            createFile();
        } else if (strcmp(input, "readfile") == 0) {
            readFile();
        } else if (strcmp(input, "deletefile") == 0) {
            deleteFile();
        } else if (strcmp(input, "updatefile") == 0) {
            updateFile();
        } else if (strcmp(input, "exit") == 0) {
            printf("Leaving the program\n");
            break;
        } else {
            printf("The command '%s' is not recognized. Type 'help' to show the list of available commands.\n", input);
        }
    }
    return 0;
}
