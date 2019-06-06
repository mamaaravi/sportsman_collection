#include "tennisist.h"

Tennisist::Tennisist(string s, int a, string n, int r, int p, int sal) : Sportsman(s, a, n)
{
	r = rate;
	p = prize;
	sal = salary;
}

void Tennisist::Input(ifstream & in)
{
	in >> surname;
	in >> age;
	in >> nationality;
	in >> rate;
	in >> prize;
	in >> salary;
}

void Tennisist::Output(ofstream & out)
{
	out <<"Tennisist "<< surname << "  " << age << "  " << nationality<<" rate: "<<rate<<" number of prizes: "<<prize<<" salary: "<<salary;

}

 void Tennisist::Input()
{
	cout << "Enter surname: "; cin >> surname;
	cout << "Enter age: "; cin >> age;
	cout << "Enter nationality: "; cin >> nationality;
	cout << "Enter rate: "; cin >> rate;
	cout << "Enter prize: "; cin >> prize;
	cout << "Enter salary: "; cin >> salary;
}

void Tennisist::Output()
{
	cout << "Tennisist " << surname << "  " << age << "  " << nationality << " rate: " << rate << " number of prizes: " << prize << " salary: " << salary;

}

Tennisist::~Tennisist()
{
}
