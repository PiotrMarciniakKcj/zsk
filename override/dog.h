#include <iostream>
using namespace std;

class Dog: public Animal{
	public:
		void speak() override{
			cout<<"Dog noise"<<endl;
		};
		void getClass(){
			cout<<"Class Dog"<<endl;
		};
};
