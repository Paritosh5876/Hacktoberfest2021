#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <windows.h>
using namespace std;

//by adithya firmansyah putra!! No Copas GOOGLE

int input;
int random;
int j = 1;
int player1,player2;
boolean tanya = true; //untuk while
string nama1;
string nama2;
string nama3;
string nama4;

//membuat class agar tidak repot
void gunting(){
	cout<<"gunting";
}
void kertas(){
	cout<<"kertas";
}
void batu(){
	cout<<"batu";
}
//class untuk random pick computer
int Random(){
	srand(time(NULL));
	random = rand() % 3 + 1;
}
//class menentukan hasil
void hasil(int you, int computer, string nama1, string nama2){
	if (you == 1 && computer == 2 || you == 2 && computer == 3 || you == 3 && computer == 1){
		cout<<endl<<nama1<<" WIN THE GAME !!"<<endl;
	}
	else if (you == 1 && computer == 3 || you == 2 && computer == 1 || you == 3 && computer == 2){
		cout<<endl<<nama2<<" WIN THE GAME !!"<<endl;
	}
	else if (you == computer){
		cout<<endl<<"DRAW !!"<<endl;
	}
}
//class show score
void score(int you, int computer){
}
void versus(int you, int computer){
			switch (you){
			case 1 : gunting(); break;
			case 2 : kertas(); break;
			case 3 : batu(); break;
		}
		cout<<" vs ";
		switch (computer){
			case 1 : gunting(); break;
			case 2 : kertas(); break;
			case 3 : batu(); break;
		}
		cout<<endl;
}
//class clean screen
void cls(){
	system("CLS");
}
//class lanjut atau tidak
void yesorno(){
	int masuk;
	cout<<"\nApakah anda ingin melanjutkan ? \n1. Yes \n2. No \nInput pilihan : ";
	cin>>masuk;
	if (masuk == 1){
		tanya = true;
	}
	else{
		tanya = false;
	}
	system("CLS");
}
 //class pilihan
void choice(){
	cout<<"1. Gunting"<<endl;
	cout<<"2. Kertas"<<endl;
	cout<<"3. Batu"<<endl<<endl;
}
//class mengisi score
void selesai(int you, int computer){
		if (you == 1 && computer == 2 || you == 2 && computer == 3 || you == 3 && computer == 1){
		player1+=1;
		cout<<player1<<" vs "<<player2;
		}
		else if (you == 1 && computer == 3 || you == 2 && computer == 1 || you == 3 && computer == 2){
			player2+=1;
			cout<<player1<<" vs "<<player2;
		}
		else if (you == computer){
			cout<<player1<<" vs "<<player2;
		}
		if (player1==3 || player2==3){
			tanya = false;
			cout<<endl<<"GAME OVER !!"<<endl;
		}
}
//class show result 
void show(int you, int computer, string nama1, string nama2){
			if (player1 > 0 || player2 > 0){
			if (you == 1 && computer == 2 || you == 2 && computer == 3 || you == 3 && computer == 1){
				cout<<player1<<" vs "<<player2;
			}
			else if (you == 1 && computer == 3 || you == 2 && computer == 1 || you == 3 && computer == 2){
				cout<<player1<<" vs "<<player2;
			}
			else if (you == computer){
				cout<<player1<<" vs "<<player2;
			}
		}
}
int main(){
	while (tanya){
	cout<<"=============================================="<<endl;
	cout<<"= Selamat datang di game Gunting Kertas Batu ="<<endl;
	cout<<"=============================================="<<endl;
	
	cout<<endl<<"Mau nya apa ?"<<endl<<endl;
	cout<<"1. Player vs Player"<<endl;
	cout<<"2. Player vs Computer"<<endl<<endl;
	cout<<"jadi nya no. ";
	cin>>input;
	
	// menu game player vs player
	
	if (input == 1){
		cls();
		player1 = 0; //menampung score player 1
		player2 = 0; //menampung score player 2
		int you,computer;
		
		// menginput nama player 
		cout<<"Player1 name is : ";
		cin>>nama1;
		cout<<"Player2 name is : ";
		cin>>nama2;
		cls();
		
		//mengulang sampai game over
		while (tanya){
		show(you,computer,nama1,nama2); //menampilkan hasil score sementara
		cout<<endl<<endl;
		cout<<" INFORMATION ARLERT!!\nDont let "<<nama2<<" See Your Choice!!"<<endl<<endl;
		choice();
		cout<<nama1<<" turn : ";
		cin>> you;
		cls();
		show(you,computer,nama1,nama2); //menampilkan hasil score sementara
		cout<<endl<<endl;
		cout<<" INFORMATION ARLERT!!\nDont let "<<nama1<<" See Your Choice!!"<<endl<<endl;
		choice();
		cout<<nama2<<" turn : ";
		cin>>computer;
		cout<<endl;
		cls();
		cout<<"The Result is :";
		Sleep(2000); //membuat delay 
		cls();
		cout<<endl;
		versus(you,computer);
		cout<<endl;
		selesai(you,computer);
		cout<<endl;
		hasil(you,computer,nama1,nama2);
		cout<<endl;
		Sleep(2000); //membuat delay
		cls();
		}
		yesorno();
	}
	else if (input == 2){
		cls();
		player1 = 0;
		player2 = 0;
		nama3 = "You";
		nama4 = "Computer";
		int you;
		while (tanya){
		cout<<endl;
		choice();
		cout<<"your turn : ";
		cin>> you;
		int computer = Random();
		cout<<endl;
		cls();
		cout<<"The Result is :";
		Sleep(2000); //membuat delay
		cls();
		cout<<endl;
		versus(you,computer);
		cout<<endl;
		selesai(you,computer);
		cout<<endl;
		hasil(you,computer,nama3,nama4);
		cout<<endl;
		Sleep(2000);//membuat delay
		cls();
		}
		yesorno();
	}
	else{
		cls();
		cout<<"INPUTAN ANDA SALAH!!" <<endl;
		yesorno();
	}
	}
}
