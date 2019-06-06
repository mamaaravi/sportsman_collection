#include "sportsman.h"

Sportsman::Sportsman(string s, int a, string n)
{
	surname = s;
	age = a;
	nationality = n;
}

void Sportsman::Input(ifstream & in)
{
	in >> surname;
	in >> age;
	in >> nationality;

}

void Sportsman::Output(ofstream & out)
{
	out << surname << "  " << age << "  " << nationality<<"  ";
}

void Sportsman::Input()
{
	cout << "Enter surname: "; cin >> surname;
	cout << "Enter age: "; cin >> age;
	cout << "Enter nationality: "; cin >> nationality;
}

void Sportsman::Output()
{
	cout << surname << "  " << age << "  " << nationality << endl;

}

//bool Sportsman::operator<(const Sportsman &)
//{
//	return false;
//}
//
//bool Sportsman::operator>(const Sportsman &)
//{
//	return false;
//}
//
//bool Sportsman::operator==(const Sportsman &)
//{
//	return false;
//}

Sportsman::~Sportsman()
{
}