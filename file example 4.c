#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("e:\\message.txt","r");
    if(fp1==NULL)
    {
        printf("source file could not be opened!!");
        return 1;
    }
    fp2=fopen("e:\\message2.txt","w");
    if(fp2==NULL)
    {
        printf("target file could not be opened!!!");
        return 1;
    }
    char ch;
    while((ch=fgetc(fp1))!=EOF)
    {
        if(ch>=65&&ch<=90)
            ch=ch+32;
        else if(ch>=97&&ch<=122)
            ch=ch-32;
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("file saved successfully.....");
    return 0;
}
