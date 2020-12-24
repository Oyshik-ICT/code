#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int a[5]={300,2,400,1,3},i;
    sort(a+1,a+4);
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
