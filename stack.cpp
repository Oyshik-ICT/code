#include<iostream>
#include<queue>

using namespace std;

void showq( queue <int> s)
{

    while(!s.empty()){
        cout<<s.front()<<" "<<endl;

        s.pop();
    }
}


int main()
{
    queue <int> s;
    s.push(15);
    s.push(1);
    s.push(5);
    s.push(105);

    s.pop();

    showq(s);


}
