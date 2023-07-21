#include<stdio.h>
#include<stdlib.h>
int size=4;
int top=-1;

int main(){
    int arr[size];
    while(size-->0){
    push(arr);}
    show(arr);
    pop(arr);
    show(arr);
    pop(arr);
    pop(arr);
    show(arr);
}

void push(int arr[]){
    int data;
        if(top==size-1){
            printf("Overflow!\n");
        }
        else
        {
            printf("Enter the data: ");
            scanf("%d",&data);
            top=top+1;
            arr[top]=data;
        }

}


void show(int arr[])
{
    if(top==-1){
        printf("Underflow!\n");
    }
    else{
            printf("The stack is: ");
        for(int i=top;i>=0;i--){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}
void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        top=top-1;
    }
}
