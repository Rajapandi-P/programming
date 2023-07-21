#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void insert();
void display();
void deletion();

struct node *head = NULL;

int main()
{
    insert();
    display();
    deletion();
    display();
    return 0;
}

void insert()
{
    int choice = 1;
    while(choice == 1)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            struct node *temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }

        printf("Do you want to continue? (1/0): ");
        scanf("%d", &choice);
    }
}

void deletion()
{
    int element;
    printf("Enter the element: ");
    scanf("%d", &element);
    struct node *temp = head;

    while(temp != NULL && temp->data != element)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Element not found.\n");
        return;
    }

    if(temp == head)
    {
        head = temp->next;
        head->prev = NULL;
        free(temp);
    }
    else if(temp->next == NULL)
    {
        temp->prev->next = NULL;
        free(temp);
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }

    printf("Element deleted.\n");
}


void display()
{
    struct node *temp = head;

    if(temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("List elements are: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
