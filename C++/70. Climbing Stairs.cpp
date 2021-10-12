#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int third = 0, second = 1, first = 1;
    for (int i = 0; i < n; i++)
    {
        third = second + first;
        first = second;
        second = third;
    }
    cout << third;
}