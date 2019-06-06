#include "footballer.h"

Footballer::Footballer(string s, int a, string n, string c, int sal, int g): Sportsman( s,  a,  n)
{
	c = club;
	sal = salary;
	g = goals;
}

void Footballer::Input(ifstream & in)
{
	in >> surname;
	in >> age;
	in >> nationality;
	in >> club;
	in >> goals;
	in >> salary;

}

void Footballer::Output(ofstream & out)
{
	out << "Footballer " << surname << "  " << age << "  " << nationality << " club: " << club << " number of goals: " << goals << " salary: " << salary;

}

void Footballer::Input()
{
	cout << "Enter surname: "; cin >> surname;
	cout << "Enter age: "; cin >> age;
	cout << "Enter nationality: "; cin >> nationality;
	cout << "Enter club: "; cin >> club;
	cout << "Enter number of goals: "; cin >> goals;
	cout << "Enter salary: "; cin >> salary;


}

void Footballer::Output()
{
	cout << "Footballer " << surname << "  " << age << "  " << nationality << " club: " << club << " number of goals: " << goals << " salary: " << salary;

}

Footballer::~Footballer()
{
}
