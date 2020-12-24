#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main()
{
    vector <int> vec;

    vec.push_back(34);
    vec.push_back(20);

    vec[0]=9;

    printf("%d\n",vec[0]);
    return 0;
}
