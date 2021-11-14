#include <stdio.h>
#include "student.h"
int main()
{
    FILE *fp=fopen("e:\\stud_rec.dat","w+b");
    if(fp==NULL)
    {
        printf("file not found!!!!");
        return 1;
    }
    struct student s;
    char ch;
    do
    {
        printf("enter roll,name and per");
        scanf("%d %s %f",&s.roll,s.name,&s.per);
        fwrite(&s,sizeof(s),1,fp);
        printf("any more?(Y/N)");
        scanf(" %c",&ch);
    }while(ch=='Y');
    _getch();
    rewind(fp);
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        printf("\n%d %s %f",s.roll,s.name,s.per);
    }
    printf("\n file read successfully");
    fclose(fp);
    return 0;
}
