#include <iostream>
#include <string>
using namespace std;

int main()
{
    int q;
    cin >> q;

    string s;
    cin >> s;

    int n;
    cin >> n;

    for (auto &num : s)
    {
        if (!(num >= 'a' && num <= 'z') && !(num >= 'A' && num <= 'Z'))
        {
            cout << num;
            continue;
        }

        int a = int(num) + (n % 26);
        if (a > 'Z' && (num >= 'A' && num <= 'Z'))
            a -= 26;
        else if (a > 'z')
            a -= 26;
        cout << char(a);
    }
}