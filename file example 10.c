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
    fseek(fp,-1L*sizeof(s),SEEK_END);
    fread(&s,sizeof(s),1,fp);
    printf("\n%d %s %f",s.roll,s.name,s.per);
    printf("\nfile read successfully!!!!!");
    fclose(fp);
    return 0;
}
