#include <stdio.h>
#include "student.h"
int main()
{
     FILE *fp=fopen("e:\\stud_rec.dat","rb");
    if(fp==NULL)
    {
        printf("file not found!!!!");
        return 1;
    }
    struct student s;
    int n,i=0;
    printf("write the record number!");
    scanf("%d",&n);
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        i++;
        if(i==n)
        {
            printf("%d %s %f",s.roll,s.name,s.per);
            break;
        }
    }
        printf("\nfile read successfully!!!!");
        fclose(fp);
        return 0;
    }
