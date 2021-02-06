#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l,p,q;
    float r;
    scanf("%d%d%d",&l,&p,&q);
    r=(p*l)/(float)(p+q);

    printf("%.3f\n",r);

    return 0;
}
