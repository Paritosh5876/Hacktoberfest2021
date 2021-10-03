#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int> sA, sB;
    
    int dequeue()
    {
        if (sA.empty())
        {
            cout << "Queue is Empty";
            exit(0);
        }

        int x = sA.top();
        sA.pop();
        return x;
    }
    
    void enqueue(int n)
    {
        while (!sA.empty())
        {
            sB.push(sA.top());
            sA.pop();
        }

        sA.push(n);

        while (!sB.empty())
        {
            sA.push(sB.top());
            sB.pop();
        }
    }
};

int main()
{
    Queue q;
    while(true){
        cout<<"\nPress 0 to push, 1 to pop and 2 to exit: ";
        int choice;
        cin>>choice;
        switch(choice){
            case 0: cout<<"\nEnter element to push: ";
                    int num;
                    cin>>num;
                    q.enqueue(num);
                    break;
            case 1: cout<<"\nPopping element: "<<q.dequeue();
                    break;
            case 2: exit(0);
        }
    }
    return 0;
}