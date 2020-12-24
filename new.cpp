#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int **q,i,j;
    q=new int*[2];
    printf("%p\n",&q);
    for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                cin>>q[i][j];
            }
    }
    for(i=0;i<5;i++){
        cout<<q[i];
    }

    return 0;
}
