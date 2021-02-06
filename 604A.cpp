#include<bits/stdc++.h>

using namespace std;

int main()
{
    int v[]={500,1000,1500,2000,2500};
    int m[5],w[5],i,hs,hu;
    float sum=0;
    for(i=0;i<5;i++){
        cin>>m[i];
    }
    for(i=0;i<5;i++){
        cin>>w[i];
    }
    cin>>hs>>hu;
    for(i=0;i<5;i++){
        sum=sum+max(.3*v[i],(float)((1.0-(float)(m[i]/250.0))*v[i])-50.0*w[i]);
    }
    sum=sum+hs*100;
    sum=sum-hu*50;

   printf("%.0f\n",sum);

    return 0;
}
