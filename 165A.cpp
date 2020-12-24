#include<iostream>
#include<vector>
#include<utility>
#include<iterator>

using namespace std;

int main()
{
    vector < pair<int,int> >p;
    vector < pair<int,int> > :: iterator it;
    vector < pair<int,int> > :: iterator it1;
    int n,x,y,i,total=0,count1=0,j,a=0,b=0,c=0,d=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        p.push_back(make_pair(x,y));
    }
    it=p.begin();
    it1=p.begin();
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                it1++;
                continue;
            }
            if(it->first<it1->first && it->second==it1->second){
                total++;
                a=1;
            }
            if(it->first>it1->first && it->second==it1->second){
                total++;
                b=1;
            }
            if(it->first==it1->first && it->second>it1->second){
                total++;
                c=1;
            }
            if(it->first==it1->first && it->second<it1->second){
                total++;
                d=1;
            }
            it1++;
        }
        if(total>=4 && a==1 &&b==1 && c==1 &&d==1){
            count1++;
        }
        total=0;
        it++;
        it1=p.begin();
        a=0;
        b=0;
        c=0;
        d=0;

    }
    cout<<count1<<endl;

    return 0;

}
