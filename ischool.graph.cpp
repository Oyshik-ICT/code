#include<iostream>
#include<vector>

using namespace std;

int vis[10];

vector<int> v[10];

void dfs(int n)
{
    cout<<n<<" ";
    vis[n]=1;
    int i,a;
    for(i=0;i<v[n].size();i++){
        a=v[n][i];
        if(vis[a]==0){
            dfs(a);
        }
    }
}

int main()
{
    int e,n,a,b;
    cin>>e>>n;
    for(int i=1;i<=e;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        cout<<"node"<<" "<<i<<endl;
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    dfs(1);

    return 0;
}
