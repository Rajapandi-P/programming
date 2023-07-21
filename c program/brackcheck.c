#include<stdio.h>

int main(){
    char s[10]="())*";
    int open,close=0,len=strlen(s);
   // printf("Enter the String:");
    //for(int i=0;i<len;i++){
     //   scanf("%c",&s[i]);
    //}
    check(s);
}

void check(char s[]){
    int len=strlen(s),open,flag,close=0;
    for(int i=0;i<len;i++){
        char c=s[i];
        if(s[i]=="("||s[i]=="*"){
            open++;
        }
        else{
            close++;
        }
        if(s[len-i]==")"||s[len-i]=="*"){
            close++;
        }
        else{
            open++;
        }
        if(open < 0 || close <0){
                flag=0;
        }
        else{
            flag++;
        }
    }
    if(flag<=0){
        printf("NO");
    }
    else{
        printf("YES");
    }

}

