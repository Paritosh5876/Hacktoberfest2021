#include<iostream>
using namespace std;
struct Node{
  int data;
   struct Node* next_N;
};
struct Node* Head;
void insert_value(){
   int n;
   cout<<"enter the data for list\n";
   cin>>n;
   struct Node* T=new Node;
   T->data=n; T->next_N=NULL;
   if(Head==NULL){
   Head=T;
   }
   else{
      T->next_N=Head;
      Head=T;
   }
   cout<<"your value has been inserted\n";
}
void Display_list(){
  if(Head==NULL){
    cout<<"No element available in List\n"<<endl;
  }
  else{
        cout<<"your List contains>>> ";
    struct Node* temp=Head;
    while(temp!=NULL){
      cout<<temp->data<<"  ";
      temp=temp->next_N;
  cout<<" ";
    }
  }
   cout<<endl;

}
int main(){
	cout<<"Enter NO. of element you want to insert in Linked list\n";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
   insert_value();
}
   Display_list();

}
