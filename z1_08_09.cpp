#include <iostream>
using namespace std;
class Worker{
	public:
//	deklaracja zmiennych cz�onkowskich (w�a�ciwo�ci)
		string name;
		string surname;
//	dodatnia liczba do 32 767
		signed short age;
//	definicja funkcji cz�onkowskiej (metoda)
	void showData(){
		
	};
	void showName(){
		cout<<"Imi� i nazwisko: " << name << " " << surname << endl;
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
