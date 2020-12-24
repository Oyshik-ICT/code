#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string result;
    int j,i;
    while(std::getline(std::cin,s)){
            j=0;
        for(i=0;i<s.length();i++){
            if(s[i]==' '){
                if(s[i+1]==',' || s[i+1]=='.'){
                    continue;
                }
                else{
                    result[j]=s[i];
                    cout<<result[j];
                    j++;
                }
            }
            else{
                result[j]=s[i];
                cout<<result[j];
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}
