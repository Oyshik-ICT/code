#include<iostream>

using namespace std;

int main()
{
    int r,c,i,j,k=1;
    cin>>r>>c;
    char a[r][c];
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            a[i][j]='.';
        }
    }
    for(i=0;i<r;i++){
       if(i%2==0) {
        for(j=0;j<c;j++){
            a[i][j]='#';
        }
       }
       else{
        if(k%2!=0){
            a[i][c-1]='#';
            k++;
        }
        else{
            a[i][0]='#';
            k++;
        }
       }
    }
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;

}
