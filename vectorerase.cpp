#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    vector <int> vec;
    int i,n,num,a,b,x;
   cin>>n;

    for(i=0;i<n;i++){
            cin>>num;
        vec.push_back(num);
    }
    cin>>x;
    x=x-1;
    vec.erase(vec.begin()+x);
    cin>>a>>b;
    a=a-1;
    b=b-1;

    vec.erase(vec.begin()+a,vec.begin()+b);
    cout<<vec[1]<<endl;
    return 0;
}
