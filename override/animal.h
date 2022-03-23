#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Animal{
	public:
		virtual void speak(){
			cout<<"Animal noise"<<endl;	
		};
		void getClass(){
			Animal object;
			string name = typeid(object).name();
			cout<<"Class "<<name.substr(1)<<endl;
		};
};
