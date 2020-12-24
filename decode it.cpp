#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    char a[800];
    getchar();
    while(t--){
    gets(a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='0' || a[i]=='1'|| a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8' || a[i]=='9'){
            if(a[i]=='0'){
                a[i]='O';
            }
            else if(a[i]=='1'){
                a[i]='I';
            }
            else if(a[i]=='2'){
                a[i]='Z';
            }
             else if(a[i]=='3'){
                a[i]='E';
            }
            else if(a[i]=='4'){
                a[i]='A';
            }
            else if(a[i]=='5'){
                a[i]='S';
            }
             else if(a[i]=='6'){
                a[i]='G';
            }
              else if(a[i]=='7'){
                a[i]='T';
            }
             else if(a[i]=='8'){
                a[i]='B';
            }
              else if(a[i]=='9'){
                a[i]='P';
            }

        }
    }
    cout<<a<<endl;
    }
    return 0;
}
