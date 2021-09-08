#include <iostream>
using namespace std;
class Worker{
	public:
//	deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
		string name;
		string surname;

//	definicja funkcji cz³onkowskiej (metoda)
	void showData(){
		cout<<"Imiê";
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
