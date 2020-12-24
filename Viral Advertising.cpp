 #include<bits/stdc++.h>

 using namespace std;

 int main()
 {
     int n,like=0,people=5;
     cin>>n;
     while(n--){
        like=like+(people/2);
        people=(people/2)*3;
     }

     cout<<like<<"\n";

     return 0;
 }
