#include <iostream>
using namespace std;

class Animal{
	public:
		static int s_count;
	
	Animal(){
		s_count ++;
	};
	
	~Animal(){
		s_count --;
	};
	
	static void getCount();
};

	int	Animal::s_count=0;

	void Animal::getCount(){
		cout<<"Liczba zwierz¹t: "<<s_count<<endl;

	};

int main(){
	setlocale(LC_CTYPE,"polish");
	
	Animal *p_frog=new Animal;
	Animal *p_elephant=new Animal;
	Animal::getCount();
	delete p_frog;
	delete p_elephant;
	Animal *p_wojtek=new Animal;
	Animal::getCount();
	
	return 0;
}
