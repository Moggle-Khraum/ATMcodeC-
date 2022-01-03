#ifndef bank1_h

#define bank1_h

#include "iostream"

using namespace std;



class ATM {

	
	private:

	char name[20];

	int accnumber;

	char type[10];

	int amount;

	

	public:

		void guiMenu();

		void leave();

		void error();

		void setvalue();

		void showdata();

};

	

	void ATM::guiMenu(){

	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

	cout<<"@  Welcome to Endless Treasure @"<<endl;

	cout<<"@           ATM Bank           @"<<endl;

	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

	cout<<"@          Selection           @"<<endl;

	cout<<"@            Menu              @"<<endl;

	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

	cout<<"@  0. Account Signup           @"<<endl;

	cout<<"@  1. Account Withdrawal       @"<<endl;

	cout<<"@  2. Account Balance          @"<<endl;

	cout<<"@  3. Account Deposit          @"<<endl;

	cout<<"@  4. Show Account Data        @"<<endl;

	cout<<"@  5. Leave                    @"<<endl;

	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

}



void ATM::setvalue() {

		cout << "Enter name:"<<endl;

		cin >> name;

		cout << "Enter Account number:"<<endl;

		cin >> accnumber;

		cout << "Enter Account type:"<<endl;

		cin >> type;

}



void ATM::showdata(){

		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

		cout << "\nAcount Name:" << name << endl;

		cout << "\nAccount No:" << accnumber << endl;

		cout << "\nAccount type:" << type << endl;

		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<< endl;

	}



void ATM::leave(){

	cout << "You want to continue? " << "Please type [Y] if Yes or [N] if No"<<endl;

}



void ATM::error(){

	cout<<"Selection Invalid !!"<<endl;

}



#endif
















