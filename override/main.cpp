#include <iostream>
#include <typeinfo>
#include <string>
#include "add.h"
#include "animal.h"
#include "dog.h"
using namespace std;



int main(){
	setlocale(LC_CTYPE,"polish");
	add(5,6);
	
	Animal *wsk = new Animal();
	wsk->speak();
	wsk->getClass();
	
	Dog pies;
	pies.speak();
	
	
	return 0;
}

