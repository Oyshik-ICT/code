#include <iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int, int>pair1 = make_pair(1, 2);
    pair<int, int>pair2 = make_pair(1, 12);


    cout << (pair1 == pair2) << endl;
    cout << (pair1 != pair2) << endl;
    cout << (pair1 >= pair2) << endl;
    cout << (pair1 <= pair2) << endl;
    cout << (pair1 > pair2) << endl;
    cout << (pair1 < pair2) << endl;

    return 0;
}
