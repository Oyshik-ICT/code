#include<iostream>

using namespace std;

class matrix
{
    int m[3][3];

public:
    void getdata()
    {
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cin>>m[i][j];
            }
        }
    }
    void display()
    {
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend matrix trns(matrix);
};

matrix trns(matrix m1)
{
    matrix m2;
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m2.m[i][j]=m1.m[j][i];
        }
    }
    return m2;
}

int main()
{
    matrix m1,m2;
    m1.getdata();
    m1.display();
    m2=trns(m1);
    m2.display();
    return 0;
}
