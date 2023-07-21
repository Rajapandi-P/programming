
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    char item[128]; // char array aka string
    struct Node*next;
    // as an alternative you can use char item (one character per node)
} Node;

typedef struct list
{
    Node*first;
    Node*last;
    int count; // number of elements in a list
} List;
void list_insert_last(List*list,Node*node)
{
    if(list->count==0)
    {
        list->first=node;
        list->last=node;
        list->count++;
        return;
    }
    list->last->next=node;
    list->last=list->last->next;
    list->count++;
}

int main(){
    list_insert_last();
}
