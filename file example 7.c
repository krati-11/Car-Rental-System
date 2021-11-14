#include <stdio.h>
#include <string.h>
#include "student.h"
int main()
{
    FILE *fp=fopen("e:\\stud_rec.txt","r");
    if(fp==NULL)
    {
        printf("file could not be found");
        return 1;
    }
    char str[15];
    struct student s;
    int found=0;
    printf("type the name to be searched");
    gets(str);
    while(fscanf(fp,"%d %s %f",&s.roll,s.name,&s.per)!=EOF)
    {
        if(strcmpi(s.name,str)==0)
        {
            printf("\nrecord found!!!!");
            printf("\n%d %s %f",s.roll,s.name,s.per);
            found++;
            break;

        }
    }
    if(!found)
        printf("\nrecord not found!!!!");
        printf("number of records %d",found);
        fclose(fp);
    return 0;

}
