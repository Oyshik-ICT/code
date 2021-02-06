#include<bits/stdc++.h>

using namespace std;

vector<int>primes;
vector<int>result;
int l_size;

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

void prime_factor(int n)
{
    int i,root;
    root=sqrt(n);
    for(i=0;primes[i]<=root;i++){
        if(n%primes[i]==0){
            while(n%primes[i]==0){
                result.push_back(primes[i]);
                n=n/primes[i];
                l_size=l_size+1;
            }
        }
    }
    if(n>1){
        result.push_back(n);
        l_size=l_size+1;
    }
}

int main()
{
    int n,i;
    cin>>n;
    sieve();
    prime_factor(n);
    for(i=0;i<l_size;i++){
        cout<<result[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
