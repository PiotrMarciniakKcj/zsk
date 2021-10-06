#include <iostream>

using namespace std;

class School{
	public:
		static string s_school;
		static string s_jobPosition;	
		
		string name;
		string surname;
		
		void getData();
		void setNameSurname(string name, string surname);
		
		static string s_getSchool();
		static void s_getSchool(string pSchool){
			s_school=pSchool;
		}
};

string School::s_school="ZSK";
string School::s_jobPosition="Uczeñ";

void School::getData(){
	cout<<"Imiê i nazwisko: "<<name<<" "<<surname;
}

	// 2 sposoby
void School::setNameSurname(string name, string pSurname){
	School::name=name;
	surname=pSurname;	
	
}

string s_getSchool(){
return School::s_school;
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	cout<<School::s_school<<endl;
	// jobPosition siê nie nadaje, bo ka¿dy obiekt ma inne stanowisko
	cout<<School::s_jobPosition<<endl;

	School kowal;
	kowal.setNameSurname("Krystyna","Kowal");
	kowal.getData();
	cout<<endl;
	
	School::s_jobPosition="Nauczyciel";
	cout<<"Stanowisko: "<<School::s_jobPosition<<endl;
	cout<<kowal.s_jobPosition<<endl;
	kowal.s_jobPosition="Dyrektor";
	cout<<School::s_jobPosition;

	cout<<kowal.s_getSchool();
	// kowal.s_setSchool("ZS£");
	// cout<<kowal.s_getSchool;()
return 0;
}
