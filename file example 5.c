#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp=fopen("e:\\mymessage.txt","w+");
    if(fp==NULL)
    {
        printf("file could not be opened....");
        return 1;
        }
        char str[100];
         printf("please!write the required message!!!");
         gets(str);
         fprintf(fp,"%s",str);
         printf("press any key to read the message in the file!!!!\n");
         _getch();
         rewind(fp);
         char ch;
         int i=0;
         while(1)
         {
             ch=fgetc(fp);
             if(ch==EOF)
                break;
             printf("%c",ch);
         }
         fclose(fp);
         printf("\nfile read successfully!!!!!");
         return 0;


}
