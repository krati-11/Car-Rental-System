#include <stdio.h>


int main()
{
    int i,j;
    i=2;
    j=-1;
    i = i++ || j--;
    j = --j && i++ && j;
    printf("%d%d",i,j);
    getch();
    return 0;
}
