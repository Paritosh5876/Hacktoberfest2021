#include<iostream>
using namespace std;

class Test {
    int n, i, f;
public:

    Test() {
        cout << "Enter a number : ";
        cin>>n;
        f = 1;
        i = 1;
        while(i<=n){
            f = f*i;
        }
    }

    void display() {
        cout << "\nFactorial is : " <<f<<endl;
    }
};

int main() {

    Test obj1;
    obj1.display();

    return 0;
}
