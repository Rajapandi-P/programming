#include<stdio.h>
#include<stdlib.h>
int main(){
int size,i,j;
scanf("%d",&size);
int arr[size];
int count=0;
for( i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for( i=0;i<size;i++){
    for( j=0;j<size;j++){
        if((i<j)&&(arr[i]>arr[j])){
            count++;
        }
    }
}

printf("%d",count);
}

