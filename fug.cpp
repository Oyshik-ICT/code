#include<bits/stdc++.h>

using namespace std;

int n,sum;

int main (){
	cin>>n;
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			int c = int(sqrt(i * i + j * j));
			if(c <= n && c * c== i * i + j * j){
					sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
