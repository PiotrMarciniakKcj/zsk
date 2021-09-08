#include <iostream>
using namespace std;
class Worker{
	public:
//	deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
		string name;
		string surname;
//	dodatnia liczba do 32 767
		signed short age;
//	definicja funkcji cz³onkowskiej (metoda)
	void showData(){
		
	};
	void showName(){
		cout<<"Imiê i nazwisko: " << name << " " << surname << endl;
	}
};

int main()
{
//	polskie znaki
	setlocale(LC_CTYPE,"Polish");
	
	Worker pracownik;
	
	pracownik.showData();
	pracownik.name="Janusz";
	pracownik.surname="Kowalski";
	pracownik.age=16;
	cout<<"Wiek: " << pracownik.age << endl;
	pracownik.showName();
	
return 0;

}
