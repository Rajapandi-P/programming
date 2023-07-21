#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int freq[256]={0};
    int i, len;
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<len;i++)
    {
        if(freq[str[i]]==1)
        {
            printf("The non repeating element is '%c'.\n", str[i]);
            return 0;
        }
    }
    printf("There are no repeating elements.\n");
    return 0;
}
