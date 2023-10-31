#include <stdio.h>
#include <string.h>

// Structure to store information about each task
struct Task {
    int id;
    char title[100];
    char description[100];
};

// Declaration of an array to store up to 100 tasks
struct Task Tasks[100];

int taskCount = 0; // Counter to keep track of the number of created tasks

// Function to display the available commands
void help() {
    printf("The are the available commands\n");
    printf(" - createtask: create a task\n");
    printf(" - showtask: show task by id\n");
    printf(" - showalltasks: show all tasks\n");
    printf(" - deletetask: delete task by id\n");
}

// Function to create a new task
void createTask() {
    char taskTitle[100];
    char taskDescription[100];

    printf("Type task name:\n");
    fgets(taskTitle, sizeof(taskTitle), stdin); // Get the task title
    taskTitle[strcspn(taskTitle, "\n")] = 0; // Remove the newline character

    printf("Type task description:\n");
    fgets(taskDescription, sizeof(taskDescription), stdin); // Get the description
    taskDescription[strcspn(taskDescription, "\n")] = 0; // Remove the newline character

    // Store the new task in the array and update the counter
    Tasks[taskCount].id = taskCount;
    strcpy(Tasks[taskCount].title, taskTitle);
    strcpy(Tasks[taskCount].description, taskDescription);
    printf("The task %d was successfully added.\n", taskCount);
    taskCount++;
}

// Function to display a specific task by its ID
void showTask() {
    int id;
    printf("Type the task id\n");
    scanf("%d", &id);

    if(id >= 0 && id < taskCount && Tasks[id].id == id) {
        printf("%s\n", Tasks[id].title);
        printf("%s\n", Tasks[id].description);
    } else {
        printf("This task doesn't exist\n");
    }
}

// Function to display all stored tasks
void showAllTasks() {
    if(taskCount == 0) {
        printf("There are no tasks.\n");
    } else {
        for (size_t i = 0; i < taskCount; i++) {
            printf("----------[%d]----------\n", Tasks[i].id);
            printf("%s\n", Tasks[i].title);
            printf("%s\n", Tasks[i].description);
        }
        printf("-----------------------\n");
    }
}

// Function to delete a task by its ID
void deleteTask() {
    int id;
    printf("Type the task id to delete\n");
    scanf("%d", &id);

    if(id >= 0 && id < taskCount && Tasks[id].id == id) {
        // Remove the task and adjust the remaining IDs
        for (size_t i = id; i < taskCount - 1; i++) {
            Tasks[i] = Tasks[i + 1];
            Tasks[i].id--;
        }
        printf("The task %d was deleted successfully\n", id);
        taskCount--;
    } else {
        printf("This task doesn't exist\n");
    }
}

// Main function
int main() {
    char input[100];
    printf("Welcome type 'help' to show list of available commands\n");

    // Main loop for user interaction
    while(1) {
        printf("> ");
        scanf("%s", input);
        getchar(); 

        if(strcmp(input, "help") == 0) {
            help();
        } else if(strcmp(input, "createtask") == 0) {
            createTask();
        } else if(strcmp(input, "showtask") == 0) {
            showTask();
        } else if(strcmp(input, "showalltasks") == 0) {
            showAllTasks();
        } else if(strcmp(input, "deletetask") == 0) {
            deleteTask();
        } else if(strcmp(input, "exit") == 0) {
            printf("Leaving the program\n");
            break;
        } else {
            printf("The command is not recognized '%s' type 'help' to show list of available commands.\n", input);
        }
    }

    return 0;
}
