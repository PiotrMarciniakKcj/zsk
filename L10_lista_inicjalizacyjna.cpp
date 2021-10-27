#include <iostream>

using namespace std;

class Worker{
		int id {8};
	public:

		string name {"Katarzyna"};
		string surname {"Nowak"};
		
		Worker();
		
		Worker(int pId, string pName, string pSurname);
	
		void getData();
};
	 Worker::Worker(int pId, string pName, string pSurname):
		id {pId},
		name {pName},
		surname {pSurname}
		{
		cout<<"konstruktor parametryczny"<<endl;
		}
	//void Worker::getData(){
		//cout<<"Id: "<<id<<"\nImie: "<<name<<"\nNazwisko: "<<surname<<endl;
	//}

	Worker::Worker():
		id {13},
		name {"DOMYOLNE IMIE"},
		surname {"DOMYOLNE NAZWISKO"}
	{
		cout<<"Konstruktor domyœlny"<<endl;
	}
	
int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker(1, "Jan", "Nowak");
//	nowak.getData();
	


	
	
	return 0;
}
