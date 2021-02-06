#include<bits/stdc++.h>

using namespace std;

vector<int>primes;

void sieve()
{
    int isPrime[3200];
    int i,j;
    for(i=1;i<=3200;i++){
            if(i==1){
                isPrime[i]=0;
                continue;
            }
        isPrime[i]=1;
    }
    for(i=2;i*i<=3200;i++){
        if(isPrime[i]){
            for(j=2;i*j<=3200;j++){
                isPrime[i*j]=0;
            }
        }
    }
    primes.push_back(2);
    for(i=3;i<=3200;i=i+2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
}

void segSieve(long long int l,long long int r)
{
    int isPrime[r-l+1];
    int i,j;
    for(i=0;i<r-l+1;i++){
        isPrime[i]=1;
    }
    for(i=0;primes[i]*primes[i]<=r;i++){
        int cp=primes[i];
        long long int base=(l/cp)*cp;
        if(base<l){
            base=base+cp;
        }
        for(j=base;j<=r;j=j+cp){
            isPrime[j-l]=0;
        }
        if(base==cp){
            isPrime[base-l]=1;
        }
    }
    for(i=0;i<r-l+1;i++){
        if(isPrime[i]){
            cout<<i+l<<"\n";
        }
    }
    cout<<"\n";
}

int main()
{
    int t;
    sieve();
    cin>>t;
    while(t--){
        long long int l,r;
        cin>>l>>r;
        segSieve(l,r);
    }
}
