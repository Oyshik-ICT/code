#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
    char b[60];
    int len,i,power,decimal=0;
    cin>>b;
    len=strlen(b);
    power=len-1;
    for(i=0;i<len;i++){
        decimal=decimal+(b[i]-'0')*pow(2,power);
        power=power-1;
    }
    cout<<decimal<<endl;
    return 0;
}
