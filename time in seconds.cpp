/*C++ program to create class to read and add two times.*/
#include <iostream>
using namespace std;
 
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
 
public:
    void getTime(void);
    void putTime(void);
    void addTime(Time T1,Time T2);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours? ";    cin>>hours;
    cout << "Minutes? ";  cin>>minutes;
    cout << "Seconds? ";  cin>>seconds;
}
 
void Time::putTime(void)
{
    cout << endl;
    cout << "Time after add: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
 
void Time::addTime(Time T1,Time T2)
{
     
    this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
 
int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();
    //add two times
    T3.addTime(T1,T2);
    T3.putTime();
     
    return 0;
}
