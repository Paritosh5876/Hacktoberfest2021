#include <iostream>
#include <string>
using namespace std;
class demo {
int a;
public:
demo(int a_i = 1)
: a{a_i }
{
cout << "The conversion is called through this method" << endl;
}
operator string()
{
cout << "The casting conversion operation is:" << endl;
return to_string(a);
}
};
int main()
{
demo b(4);
string s = b;
b = 32;
string s1 = static_cast<string>(b);
b = static_cast<demo>(34);
return 0;
}
