#include<iostream>
#include<vector>

using namespace std;


#define MAX 32000
vector<int>primes;

void sieve()
{
    bool isPrime[MAX];
    for(int i=0;i<MAX;i++){
        isPrime[i]=true;
    }
    for(int i=3;i*i<MAX;i=i+2){
        if(isPrime[i]){
            for(int j=i*i;j<=MAX;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<MAX;i=i+2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
}

void segSieve(long long int l,long long int r)
{
    bool isPrime[r-l+1];
    for(int i=0;i<r-l+1;i++){
        isPrime[i]=true;
    }
    for(int i=0;primes[i]*primes[i]<=r;i++){
        int cp=primes[i];
        long long int base=(l/cp)*cp;
        if(base<l){
            base=base+cp;
        }
        for(int j=base;j<=r;j=j+cp){
            isPrime[j-l]=false;
        }
        if(base==cp){
            isPrime[base-l]=true;
        }
    }
    for(int i=0;i<r-l+1;i++){
        if(isPrime[i]){
            cout<<(i+l)<<endl;
        }
    }
}

int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--){
            long long  l,r;
        cin>>l>>r;
        segSieve(l,r);
    }
    return 0;
}
