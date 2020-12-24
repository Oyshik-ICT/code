#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sx,sy,ex,ey,time=-1,n,i;
    string s;
    cin>>n>>sx>>sy>>ex>>ey>>s;
    for(i=0;i<n;i++){
        switch(s[i])
        {
        case 'E':
            if(sx<ex){
                sx=sx+1;
            }
            break;
        case 'W':
            if(sx>ex){
                sx=sx-1;
            }
            break;
        case 'N':
            if(sy<ey){
                sy=sy+1;
            }
            break;
        case 'S':
            if(sy>ey){
                sy=sy-1;
            }
        }
        if(sx==ex && sy==ey){
            time=i+1;
            break;
        }
    }
    cout<<time<<endl;

    return 0;
}
