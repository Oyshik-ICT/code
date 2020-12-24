#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,div,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,i,j,num;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        if(num==1){
            c1++;
        }
        else if(num==2){
            c2++;
        }
        else if(num==3){
            c3++;
        }
        else if(num==4){
            c4++;
        }
        else if(num==5){
            c5++;
        }
        else if(num==6){
            c6++;
        }
        else if(num==7){
            c7++;
        }
    }
    if(c7>0 || c5>0){
        cout<<"-1"<<"\n";
        return 0;
    }
    if(c6>0 && c6>c2+c3){
        cout<<"-1"<<"\n";
    return 0;
    }
    if(c2>0 && c3==0 && c2<c4+c6){
        cout<<"-1"<<"\n";
        return 0;
    }
    div=n/3;
    if(c1==div && c2<=div && c3<=c6 && c4<=c2){
        for(i=0;i<div;i++){
                cout<<"1"<<" ";
                if(c2>0){
                    cout<<"2"<<" ";
                    c2--;
                    if(c4>0){
                        cout<<"4"<<" ";
                        c4--;
                    }
                    else if(c6>0){
                        cout<<"6"<<" ";
                        c6--;
                    }
                }
                else if(c3>0){
                    cout<<"3"<<" ";
                    c3--;
                    if(c6>0){
                        cout<<"6"<<" ";
                        c6--;
                    }
                }
            cout<<"\n";
        }
    }
    else{
        cout<<"-1"<<"\n";
    }
    return 0;
}
