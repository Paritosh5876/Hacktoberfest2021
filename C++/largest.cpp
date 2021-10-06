#include <iostream>
using namespace std;
class num{
    int a[10];
    public:
    void get_data(){
        int i;
        cout<<"Enter the numbers";
        for(i=0;i<10;i++){
            cin>>a[i];
        }
        }
        void largest(){
            int i;
            int max=0;
            for(i=0;i<10;i++){
            if(a[i]>max)
            max=a[i];
        }
        cout<<max;

    }

};
int main(){
    num a;
    a.get_data();
    a.largest();
    return 0;
}