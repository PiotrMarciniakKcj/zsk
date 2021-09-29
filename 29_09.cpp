#include <iostream>

using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

struct Student{
	string name, surname;
	unsigned int id;
	unsigned short int gradeInformatics[5];
	Date dateBirthday;
};

int main()
{
	setlocale(LC_CTYPE,"polish");
	Student kowalski{"Janusz", "Kowalski", 10, {6,6,5,6,4},{19, 04, 2005}};
	cout<< "Imiê i nazwisko: "<<kowalski.name<<" "<<kowalski.surname
		<<"\nIdentyfikator u¿ytkownika: "<<kowalski.id
		<<"\nData urodzenia: "<<kowalski.dateBirthday.dd<<"-"<<kowalski.dateBirthday.mm<<"-"
		<<kowalski.dateBirthday.yyyy<<endl
		<<"\nOceny z informatyki:"<<endl;
		
	for (unsigned int i=0; i<5; i++){
		cout<<i+1<<" ocena: "<<kowalski.gradeInformatics[i]<<endl;
	}
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
}
