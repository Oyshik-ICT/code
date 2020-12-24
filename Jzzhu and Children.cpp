#include<iostream>
#include<utility>
#include<queue>

using namespace std;

int main()
{
    queue< pair<int,int> > q;
    int n,m,i,x,y1,y2,value;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cin>>x;
        q.push(make_pair(x,i));
    }
    while(!q.empty()){
       pair<int,int> y=q.front();
        if(y.first<=m){
            value=y.second;
            q.pop();
        }
        else{
            y1=y.first;
            y1=y1-m;
            y2=y.second;
            q.pop();
            q.push(make_pair(y1,y2));
        }
    }
    cout<<value<<endl;
    return 0;
}
