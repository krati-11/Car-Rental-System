#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("e:\\message.txt","w");
    if(fp==NULL)
    {
        printf("sorry!file could not be found.");
        return 1;
    }
    char str[100];
    int i=0;
    printf("type your message....");
    gets(str);
    while(str[i]!='\0')
    {
        fputc(str[i],fp);
        i++;
    }
    fclose(fp);
    printf("file saved successfully!");
    return 0;
}
