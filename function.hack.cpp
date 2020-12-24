#include<iostream>

using namespace std;

int max_of_four(int a,int b,int c,int d)
{
    int big1,big2;
    big1=(a>b) ? a : b;
    big2=(c>d) ? c : d;
    if(big1>big2){
        return big1;
    }
    else{
        return big2;
    }
}

int main()
{
    int a,b,c,d,big;
    cin>>a>>b>>c>>d;
    big=max_of_four(a,b,c,d);
    cout<<big<<endl;
    return 0;
}
