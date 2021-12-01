#include <iostream>

using namespace std;
	class Worker{
		private:
			string name,surname,pesel;
			
		public:
			short int height;
		
		Worker(string, string, string, short int);
					
		void setName(string name);	
		string getName();	
		void getData();
	};
	Worker::Worker(string pName, string pSurname, string pPesel, short int pHeight){
		name=pName;
		surname=pSurname;
		pesel=pPesel;
		height=pHeight;
	}
	
	void Worker::setName(string pName){
		name=pName;
	}	

	string Worker::getName(){
		return name;
	}
	void Worker::getData(){
		cout<<"\nImiê i nazwisko: "<<name<<" "<<surname<<"\nPesel: "<<pesel<<"\nWzrost "<<height;
	};
int main(){
	setlocale(LC_CTYPE, "polish");	
	Worker nowak("Janusz", "Nowak", "0123456789", 177);
	Worker *wsk = &nowak;
	wsk->setName("Krystian");
	cout<<"Imiê: "<<wsk->getName();
	wsk->getData();
	
	
	
	
	
	
	
	
	
	return 0;	
}


