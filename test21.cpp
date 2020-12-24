#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<cctype>
#include<utility>
#include<cmath>
#include<ctime>
#include<functional>
#define Min(a,b) (a)<(b) ? (a) :(b)
#define Max(a,b) (a)>(b) ? (a) :(b)
#define FOR(i,n) for((i)=0;(i)<(n);(i)++)
#define PB push_back
using namespace std;
int main()
{
    int a,b,n;
    scanf("%d%d%d",&n,&a,&b);
    if(n-a-1<=b)printf("%d\n",n-a);
    else printf("%d\n",b+1);
    return 0;
}
