#include<iostream>

using namespace std;

int main()
{
    int S,R,Max,k=0,l,total=0,index=0;
    cin>>S>>R;
    char T[S],P[R];
    cin>>T>>P;
    Max=S-R+1;
    while(k<Max){
        for(l=0;l<R;l++){
            if(P[l]!=T[k+l]){
                break;
            }
            else{
                index=k;
                total++;
            }
        }
        if(total==R){
            break;
        }
        k++;
        total=0;
    }
    cout<<index<<endl;
    return 0;
}
