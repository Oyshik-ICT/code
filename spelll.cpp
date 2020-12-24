#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,j=1,k=0,change=0,c=0,i;
    char s[200];
    cin>>n>>m;
    getchar();
    gets(s);
    for(i=0;i<n;i++){
            if(k>m){
                    change=0;
                    break;
            }
        if(i==0){
            if(s[i]>=97 && s[i]<=122){
                k++;
                change=1;
            }
        }
        else if(s[i]==' '){
            if(change==1){
                c++;

            }
            j=0;
            change=0;
            continue;
        }
        else if(j==0 && k<=m){
            if(s[i]>=97 && s[i]<=122){
                k++;
                change=1;
            }
            j=1;
        }
        else if(j==1 && k<=m){
            if(s[i]>=65 && s[i]<=90){
                k++;
                change=1;
            }
        }
    }
    if(change==1){
        c++;
    }
    cout<<c<<endl;
    return 0;
}
