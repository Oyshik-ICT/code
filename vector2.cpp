#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector <int> vec;
    vector<int>:: iterator it;
    int i;
    for(i=1;i<=10;i++){
        vec.push_back(i);
    }
    for(i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    it=vec.begin();
    it=it+2;
    cout<<*it<<endl;
    return 0;
}
