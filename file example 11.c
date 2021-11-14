#include <stdio.h>
#include "student.h"
int main()
{
     FILE *fp=fopen("e:\\stud_rec.dat","rb+");
    if(fp==NULL)
    {
        printf("file not found!!!!");
        return 1;
    }
    struct student s;
    int found=0;
    char str[20];
    float perc;
    printf("enter the name to be searched!!");
    gets(str);
    printf("\nenter the new percentage");
    scanf("%f",&perc);
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        if(strcmpi(s.name,str)==0)
        {
            fseek(fp,-4,SEEK_CUR);
            fwrite(&perc,sizeof(perc),1,fp);
            printf("\nfile updated!!!");
            found++;
            break;

        }
    }
        if(!found)
        {
            printf("\nrecord not found!!!!");

        }
        rewind(fp);
        while(fread(&s,sizeof(s),1,fp)==1)
        {
            printf("\n%d %s %f",s.roll,s.name,s.per);
        }
        printf("\nfile read successfully");
        fclose(fp);
        return 0;
    }
