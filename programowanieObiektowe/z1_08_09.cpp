#include <iostream>
using namespace std;
class Worker{
	public:
//	deklaracja zmiennych cz�onkowskich (w�a�ciwo�ci)
		string name;
		string surname;

//	definicja funkcji cz�onkowskiej (metoda)
	void showData(){
		cout<<"Imi�";
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
