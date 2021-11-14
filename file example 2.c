#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("e:\\message.txt","r");
    if(fp==NULL)
    {
        printf("sorry!file could not be found.");
        return 1;
    }
    char ch;
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);
    printf("\nfile saved successfully....");
    return 0;
}
