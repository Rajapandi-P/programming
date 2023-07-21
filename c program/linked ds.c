#include<stdio.h>
struct node
     {
     int data;
     struct node *next;

     };
     struct node*head = NULL;

      void insert()
    {
        int value;
        struct node*newnode=(struct node*)malloc(sizeof(struct node));

        scanf("%d",&value);
        newnode->data=value;
            newnode->next=NULL;
            if(head==NULL)
                 {
               newnode->next=NULL;
                head=newnode;
            }
            else
            {
                newnode->next=head;
                head =newnode;

    }
}
int main()
{
    void insert();
    void display();
    void delete_from_the_begining();
    int choise;

     while(1)
     {
         printf("enter the values\n");
         printf("1=insert the values\n");
         printf("2=display the values\n");
         printf("3=delete the values\n");
         scanf("%d",&choise);
         switch(choise)
         {
            case 1:
                printf("enter the value\n");
                insert();
            break;
            case 2:
                printf("the values in the list are\n");
            break;
            case 3:
            break;
            default:
                printf("wrong values entered\n");
            break;
         }
         }
     }
