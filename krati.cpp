#include <iostream>
#include <string>

using namespace std;

class emp
{
    int age;
    char name[20];
    float sal;
public:
    void doin(int,char*,float);
    void show();
};

void emp :: doin(int a,char *p,float s)
{
    age = a;
    strcpy(name,p);
    sal = s;
}

void emp :: show()
{
    cout<<"age is "<<age<<" name is "<<name<<" salary is "<<sal;
}

int main()
{
    emp e;
    e.doin(25,"rohit",50000.0);
    e.show();
    return 0;
}
