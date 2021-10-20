#include <iostream>
using namespace std;

struct Date {
	int dd , mm , yyyy;
};

class Car {
	public:
		int id;
		string brand , model, color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		
	void getData();
	
	Car()
	{
		
	};
	
	Car(int id);
	
	Car(int id, string brand, string model,string color);
	
	Car(int, string, string, string, unsigned short int, float, Date);
	
};

	Car::Car(int pId){
		id=pId;
	};

	Car::Car(int pId, string pBrand, string pModel, string pColor){
	 		id = pId;
	 		brand = pBrand;
	 		model = pModel;
	 		color = pColor;
	};

	Car::Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower,
	 float pPrice, Date pDateOfProduction){
	 		id = pId;
	 		brand = pBrand;
	 		model = pModel;
	 		color = pColor;
	 		power = pPower;
	 		price = pPrice;
	 		dateOfProduction = pDateOfProduction;
	 };



	void Car::getData(){
		cout << "\nId: " << id << "\nMarka: " << brand << "\nModel: " << model
		<< "\nRok produkcji: "	<< dateOfProduction.dd << " " << dateOfProduction.mm << " "
		<< dateOfProduction.yyyy << "\nMoc: " << power 
		<< "\nKolor: " << color << "\nCena: " << price << endl; 
	};

int main(){

	setlocale(LC_CTYPE,"polish");
	Car ferrari;
	ferrari.getData();
	
	Car bmw(12, "BMW", "X6", "Czarny");
	bmw.getData();
	
	Car *wsk;
	wsk=&bmw;
	wsk->getData();
	wsk->brand="Jaguar";
	wsk->getData();
	
	return 0;
}
