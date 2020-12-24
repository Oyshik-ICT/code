#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> vec1{1,2,3,4,5};
    vector <int> vec2;
    for(int i=0;i<vec1.size();i++){
        vec2.push_back(vec1[i]);
    }
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<endl;
    }
    return 0;
}
