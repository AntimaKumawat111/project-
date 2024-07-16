#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TodoItem
{
    char task[100];
    int completed;
} TodoItem;

void todoListItemsName(int numItems, struct TodoItem *todoList)
{
    printf("Todo List ----->\n");
    for (int i = 0; i < numItems; i++)
    {
        printf("%d - %s (%s)\n", i + 1, todoList[i].task, todoList[i].completed ? "Done" : "Not done");
    }
}

void doneworks(int numItems, struct TodoItem *todoList)
{
    printf("\n");
    int donework;
    printf("Which number of work you want to mark as done: ");
    scanf("%d", &donework);
    if (donework < 1 || donework > numItems)
    {
        printf("Invalid task number.\n");
    }
    todoList[donework - 1].completed = 1;
    printf("Work done: %d - %s (%s)\n", donework, todoList[donework - 1].task, "Done");
    printf("\n");
}

void editWork(int numItems, struct TodoItem *todoList)
{
    int editworkNumber, n;
    char editName;
    printf("\n");
    printf("Which number of work do you want to edit : ");
    scanf("%d", &editworkNumber);

    if (editworkNumber < 1 || editworkNumber > numItems)
    {
        printf("Invalid number , Can't edit !\n");
    }
    else
    {

        for (int i = 0; i <= numItems; i++)
        {
            if (i == editworkNumber)
            {
                printf("Enter edit workname : ");
                getchar();
                fgets(todoList[editworkNumber - 1].task, 100, stdin);
                todoList[editworkNumber - 1].task[strcspn(todoList[editworkNumber - 1].task, "\n")] = 0;
            }
        }
        printf("Is this work done work(0 for No ,1 for Yes) : ");
        scanf("%d", &n);
        if (n == 1)
        {
            todoList[editworkNumber - 1].completed = 1;
        }
        else
        {
            todoList[editworkNumber - 1].completed = 0;
        }
    }
}

int main()
{
    int numItems;
    printf("Enter the number of todo items: ");
    scanf("%d", &numItems);
    getchar();
    TodoItem *todoList = (TodoItem *)malloc(numItems * sizeof(TodoItem));

    for (int i = 0; i < numItems; i++)
    {

        printf("Enter task %d: ", i + 1);
        fgets(todoList[i].task, 100, stdin);
        todoList[i].task[strcspn(todoList[i].task, "\n")] = 0; // Remove newline character
        todoList[i].completed = 0;
    }
    todoListItemsName(numItems, todoList);
    doneworks(numItems, todoList);
    todoListItemsName(numItems, todoList);
    editWork(numItems, todoList);
    todoListItemsName(numItems, todoList);

    free(todoList);
    return 0;
}
