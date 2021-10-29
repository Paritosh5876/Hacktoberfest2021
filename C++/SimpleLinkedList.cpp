#include <iostream>
using namespace std;

class Node{
	private:
		int data;
		Node* Next;
		
	public:
		Node()
		{
			data = NULL;
			Next = NULL;
		}
		
		void setdata(int d)
		{
			data = d;
		}
		
		void setNext(Node* n)
		{
			Next = n;
		}
		int getdata()
		{
			return data;
		}
		Node* getNext()
		{
			return Next;
		}
		
		
};

class LList{
	private:
		Node* head;
		Node* current;
		int size;
		
	public:
		LList()
		{
			head = NULL;
			current = NULL;
			
		}
		
		void setNextNode(int d)
		{
				Node *temp;
				temp = new Node();
			if(head==NULL)
			{
				head = new Node();
				head->setNext(temp);
				temp->setdata(d);
				current = temp;
				size++;
				
			}
			else if(head !=NULL)
			{
				temp->setdata(d);
				current->setNext(temp);
				current = temp;
				size++;
			
			}
		
			
			
			
		}
		
		void remove(int da)
		{
			Node *temp = head;
			Node *temp2;
						
			temp = temp->getNext();
			
			for(int i=0;i<size;i++)
			{
				int c;
			
				c = temp->getdata();
				if(c != da)
				{
					temp2 = temp;
					temp = temp->getNext();
				
				}
				
				if(c == da)
				{
				
					temp2->setNext(temp->getNext());
				
				}
				
			}
			
			
		}
		
		
		void print()
		{
			Node *temp;
			temp = new Node();
			temp = head;
			if(temp->getdata()==NULL)
				{
					temp = temp->getNext();
				}
			for(int i=0;i<size;i++)
			{
			
				
				cout<<temp->getdata();
				cout<<endl;
				temp = temp->getNext();
			}
			
		}
		
		
};

int main()
{
	LList a;
	
	bool b = true;
	
	while(b!=false)
	{
	int choise;
	cout<<"\nPress 1 To Add or create Node.";
	cout<<"\nPress 2 To Remove";
	cout<<"\nPress 3 To Print";
	cout<<"\nChoise: ";
	
	cin>>choise;
	if(choise == 1)
	{
		int c;
		cout<<"Enter the Number:";
		cin>>c;
		a.setNextNode(c);
	}
	if(choise == 2)
	{
		int da;
		cout<<"Enter the Number:";
		cin>>da;
		a.remove(da);
	}
	if(choise ==3)
	{
		a.print();
	}

}
}
