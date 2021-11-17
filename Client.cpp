#include <iostream>

using namespace std;

class Client{
	private:
		int accountNumber; 
		string password;
		int moneyCount;
	public:
		int id;
		string name;
		string surname;
		
		Client();
		Client(int accountNumber, string password, int moneyCount, int id, string name, string surname);
		
		void setAccountNumber(int pAccountNumber);
		void setPassword(string pPassword);
		void setMoneyCount(int pMoneyCount);
		void withdrawMoney();
		void depositMoney();
		void setPublicData(int pId, string pName, string pSurname);
		void getPublicData();
		void getAccountNumber();
		void getPassword();
		void getMoneyCount();

};

	Client::Client(){};
	Client::Client(int pAccountNumber, string pPassword, int pMoneyCount, int pId, string pName, string pSurname){
		accountNumber=pAccountNumber;
		password=pPassword;
		moneyCount=pMoneyCount;
		id=pId;
		name=pName;
		surname=pSurname;
	};
	
	void Client::setAccountNumber(int pAccountNumber){
		accountNumber=pAccountNumber;
	};
	
	void Client::setPassword(string pPassword){
		password=pPassword;		
	};
	
	void Client::setMoneyCount(int pMoneyCount){
		moneyCount=pMoneyCount;
	};
	
	int ammount;
	
	void Client::withdrawMoney(){
		cout<<"Ile pieniêdzy chcesz wyp³aciæ?"<<endl;
		cin>>ammount;
		moneyCount-=ammount;
		cout<<"\nWyp³acono "<<ammount<<"z³"<<endl;
	};
	
	void Client::depositMoney(){
		cout<<"Ile pieniêdzy chcesz wp³aciæ?"<<endl;
		cin>>ammount;
		moneyCount+=ammount;
		cout<<"\nWp³acono "<<ammount<<"z³"<<endl;
	};
	
	void Client::setPublicData(int pId, string pName, string pSurname){
		id=pId;
		name=pName;
		surname=pSurname;
	};
	
	void Client::getPublicData(){
		cout<<"\nId: "<<id<<"\nImiê i Nazwisko: "<<name<<" "<<surname;
	};
	
	void Client::getAccountNumber(){
		cout<<"\nNumer konta: "<<accountNumber;
	};
	
	void Client::getMoneyCount(){
		cout<<"\nStan konta: "<<moneyCount;	
	};
	
	void Client::getPassword(){
		cout<<"\nHas³o: "<<password;
	};
	
int main()
{
	setlocale(LC_CTYPE,"polish");

	Client Wixon;
	Wixon.setAccountNumber(420420420);
	Wixon.setPublicData(10, "wiktor", "halke");
	Wixon.setMoneyCount(1000000);
	Wixon.setPassword("wixonkrul1");
	Wixon.withdrawMoney();
	Wixon.getMoneyCount();
	Wixon.depositMoney();
	Wixon.getMoneyCount();
	Wixon.getAccountNumber();
	Wixon.getPublicData();
	Wixon.getPassword();

	return 0;
};
