#include <iostream>
using namespace std;

// klasa bazowa
class Worker{
	public:
		string name {""};
		string surname {""};
		
		string getData(){
			return name + " " + surname;
		}
		
};

// klasa pochodna klasy Worker
class Teacher: public Worker{
	public:
		string classesAtSchool {""};
		
		string getData(){
			return name + " " + surname + " " + classesAtSchool + "\n";
	}
};
	
	
// klasa pochodna klasy Teacher
class SupervisingTeacher: public Teacher{
	public:
		static string supervisingClass;
	
	string getData(){
		return name + " " + surname + " " + classesAtSchool + " " + supervisingClass + "\n";
	}
};
	
	string supervisingTeacher::supervisingClass = "2E";



int  main(){
	setlocale(LC_CTYPE,"polish");
	
	Teacher nowak;
	nowak.name = "Marek";
	nowak.surname = "Pawlak";
	nowak.classesAtSchool = "PO";
	cout<<"Dane nauczyciela: "<<nowak.getData()<<endl;
	
	SupervisingTeacher koscielniak;
	koscielniak.name = "Kamila";
	koscielniak.surname = "Koœcielniak";
	koscielniak.classesAtSchool = "Historia";
	cout<<"Dane nauczyciela: "<<koscielniak.getData()<<endl;

	
	
	
	return 0;
}
