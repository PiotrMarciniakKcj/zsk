#include <iostream>
using namespace std;
class Worker{
	public:
//	deklaracja zmiennych członkowskich (właściwości)
		string name;
		string surname;

//	definicja funkcji członkowskiej (metoda)
	void showData(){
		cout<<"Imię";
	};
};

int main()
{
	setlocale(LC_CTYPE,"Polish");
	Worker pracownik;
	cout<<pracownik.name;
	pracownik.showData();
	
return 0;

}
