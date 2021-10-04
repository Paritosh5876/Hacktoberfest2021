

#include<iostream>
#include<vector>			//header for vectors
#include <cstring>			//header for strings
using namespace std;
int n = 0;
int palindrome(vector<string> str);	//phototype for the palindrome function

int main() {
	vector<string>g1;		//syntax of vector g1
	cout << "\t\tTHE PROGRAM TO CHECK WHETHER THE USER INPUT STRINGS ARE PALINDROME STRINGS OR NOT " << endl << endl;
	cout << "YOU CAN ENTER STRINGS UNTIL YOU ENTER Q OR q" << endl << endl;		//Note that user can input until he enter Q or q as his input
	string temp;	//tempory varieble to store strings entered by the user
	int i = 1;

	while (i) {
		cout << "Enter your string :  ";	//text to ask user to input strings
		cin >> temp;						//assigning the strings input by user to the tempory varieble temp

		if (temp == "Q" || temp == "q") {	//condition which check if user input Q or q ,to stop taking inputs
			i = 0;
		}
		g1.push_back(temp);					//adds the entered strings in the temp varieble to the vector
	}
	g1.pop_back();							//remove the last element "q" or "Q"
	cout << endl;							//new line
	if (g1.size() > 0) {
		cout << "Count of strings you entered is  " << g1.size() << endl << endl;		//to print the count of strings entered by the user except "q" or "Q"
		palindrome(g1);							//calls the function palindrome and pass the vector 
	}
	else {
		cout << "Try again ,you havent input strings! please enter some strings instead of Q and q"<<endl<<endl;
	}

	cout << endl;							//new line

	cout << "\t\t#####	THANK YOU  !	#####"<<endl<<endl;
	vector<string>clear();
	return 0;
}
//function to find palindrome strings....
int palindrome(vector<string> str) {
	string A;
	int f = 1;
	for (string A : str) {
		int x = A.size();					//take the size of the string to the varieble x
		if (x > 1) {
			for (int first = 0, last = x - 1;first < last;first++, last--) {		//loop funtion to travers the string from beggining and from last 
				if (toupper(A[first]) != toupper(A[last])) {											//if the last lettter and initial letter is not equal makes f(flag) 0 and come out of the function
					f = 0;
					break;
				}
				else
					f = 1;						//if last letter and first letter are equal run within the loop
			}
		}
		else
			continue;

		if (f == 1)
		{	n = n + 1;
		if (n == 1) {
			cout << " The following are the palindrome strings   "<<endl;	
		}
		cout <<"\t\t"<< n<<". "<<A << endl;	   //prints the palindrome value in the console
			
		}
		
	}
	if (n == 0) {
		cout << "You haven't input any palindrome strings "<<endl<<endl;		//if there are no any palindrome strings,prints this
	}
	return 0;
}

//By : Nimna-eng