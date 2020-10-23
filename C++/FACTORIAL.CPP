#include<iostream>
using namespace std;

class Test {
    int n, i, f;
public:

    Test() {
        cout << "Enter a number : ";
        cin>>n;

        f = 1;
        for (i = 1; i <= n; i++) {
            f = f*i;
        }
    }

    void display() {
        cout << "\nFactorial is : " << f;
    }
};

int main() {

    Test obj1;
    obj1.display();

    return 0;
}