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
        return;
    }
    todoList[donework - 1].completed = 1;
    printf("Work done: %d - %s (%s)\n", donework, todoList[donework - 1].task, "Done");
    printf("\n");
}

void editWork(int numItems, struct TodoItem *todoList)
{
    int editworkNo, n;
    char editName;
    printf("\n");
    printf("Which number of work do you want to edit : ");
    scanf("%d", &editworkNo);
    if (editworkNo < 0 || editworkNo > numItems)
    {
        printf("Invalid number , Can't edit !\n");
    }
    else
    {
        printf("Is this work done work(0,1) : ");
        scanf("%d", &n);
        for (int i = 0; i <= numItems; i++)
        {
            editworkNo--;
            if (editworkNo == i)
            {
                printf("Enter edit workname : ");
                fgets(todoList[i].task, 100, stdin);
                todoList[i].task[strcspn(todoList[i].task, "\n")] = 0;
                todoList[i].completed = n;
                editworkNo++;
            }
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
