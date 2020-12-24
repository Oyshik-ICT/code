#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class String
{
    char *name;
    int len;
public:
    String()
    {

    }
    String(char *s)
    {
        len=strlen(s);
        name= new char[len+1];

        strcpy(name,s);
    }
    void join(String &a,String &b)
    {
        len=a.len+b.len;
        delete name;
        name=new char[len+1];
        strcpy(name,a.name);
        strcat(name,b.name);
    }
    void display()
    {
        cout<<name<<endl;
    }
};

int main()
{
    String name1("Joseph"),name2("Louis "),name3("Lagrange"),s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
}
