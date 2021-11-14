#include <stdio.h>
#include "student.h"
int main()
{
    FILE *fp=fopen("e:\\stud_rec.txt","w+");
    if(fp==NULL)
    {
        printf("file could not be found!!!!");
        return 1;
    }
    struct student s;
    char ch;
    do
    {
        printf("please type the data!!!!");
        scanf("%d %s %f",&s.roll,s.name,&s.per);
        fprintf(fp,"%d %s %f\n",s.roll,s.name,s.per);
        printf("do you want to add more data?(Y/N)");
        scanf(" %c",&ch);

    }while(ch=='Y');
    printf("file saved successfully!!!!");
    _getch();
    rewind(fp);
    while(fscanf(fp,"%d %s %f",&s.roll,s.name,&s.per)!=EOF)
    {
        printf("\n%d %s %f",s.roll,s.name,s.per);
    }
    printf("\nfile saved successfully!!!!!");
    fclose(fp);
    return 0;


}
