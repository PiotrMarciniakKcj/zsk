#include <iostream>

using namespace std;

class Worker{
	public:
		int id {8};
		string name {"Katarzyna"};
		string surname {"Nowak"};
		
		Worker();
		
		Worker(int pId, string pName, string pSurname);
	
		void getData();
};
	Worker::Worker(int pId, string pName, string pSurname){
		id=pId;
		name=pName;
		surname=pSurname;
	}

	void Worker::getData(){
		cout<<"Id: "<<id<<"\nImie: "<<name<<"\nNazwisko: "<<surname<<endl;
	}

	Worker::Worker(){
		id=13;
		name="DOMYOLNE IMIE";
		surname="DOMYOLNE NAZWISKO";
	}
	
int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak;
	nowak.getData();
	
	Worker nowak1 = Worker();
	nowak1.getData();
	
	Worker nowak2 = Worker(10, "Krystyna", "Pawlak");
	nowak2.getData();
	

	
	
	return 0;
}
