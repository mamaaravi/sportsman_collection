#include "sportclub.h"

Sportclub::Sportclub(string n, vector<Tennisist>t, vector<Footballer>f)
{
	n = name;
	t = T;
	f = F;
}

Sportclub::~Sportclub()
{
}

void Sportclub::push_back(Tennisist temp)
{
	T.push_back(temp);
}

void Sportclub::push_back(Footballer temp)
{
	F.push_back(temp);
}

void Sportclub::Input(ifstream & in, Sportclub&S)
{
	char ch;
	while (!in.eof())
	{
		in >> ch;
		try 
		{
			string s;
			if (ch != 'T' && ch != 'F') throw s;
		}
		catch (string s)
		{
			cout << "Incorrect input." << endl;
			system("pause");
		}
		if (ch == 'T')
		{
			Tennisist temp;
			temp.Input(in);
			S.push_back(temp);
		}
		if (ch == 'F')
		{
			Footballer temp;
			temp.Input(in);
			S.push_back(temp);
		}
	}
}

void Sportclub::Output()
{
	cout << "Football players: " << endl;
	for (auto it = F.begin(); it != F.end(); it++)
	{
		Footballer temp;
		temp = *it;
		temp.Output();
		cout << endl;
	}
	cout << "Tennis players: " << endl;
	for (auto it = T.begin(); it != T.end(); it++)
	{
		Tennisist temp;
		temp = *it;
		temp.Output();
		cout << endl;
	}
}

void Sportclub::Output(ofstream & out)
{
	cout << "Football players: " << endl;
	for (auto it = F.begin(); it != F.end(); it++)
	{
		Footballer temp;
		temp = *it;
		temp.Output(out);
		out << endl;
	}
	cout << "Tennis players: " << endl;
	for (auto it = T.begin(); it != T.end(); it++)
	{
		Tennisist temp;
		temp = *it;
		temp.Output(out);
		out << endl;
	}
}

void Sportclub::DelSportsman() //doesn't work yet, plz don't touch 
{
	string surname;
	cout << "Enter surname of a sportsman you want to delete: ";
	cin >> surname;
	for (auto it = T.begin(); it != T.end(); ++it)
	{
		Tennisist temp;
		temp = *it;
		if (temp.GetSur() == surname)
			T.erase(it);
	}
	for (auto it = F.begin(); it != F.end(); ++it)
	{
		Footballer temp;
		temp = *it;
		if (temp.GetSur() == surname)
			F.erase(it);
	}
}

void Sportclub::AddSportsman()
{
	while (true)
	{
		cout << "Press T if you want to add a Tennis player." << endl
			<< "Press F if you want to add a Football player." << endl
			<< "Press 0 if you want to exit." << endl;
		char ch;
		cin >> ch;
		if (ch == 'T')
		{
			Tennisist temp;
			temp.Input();
			push_back(temp);

		}
		else if (ch == 'F')
		{
			Footballer temp;
			temp.Input();
			push_back(temp);
		}
		else if (ch == '0')
			break;
		else cout << "Incorrect input." << endl;
	}
}
//
//Sportsman Sportclub::FindByCountry(string nat)
//{
//	for (auto it = players.begin(); it != players.end(); it++)
//	{
//		Sportsman temp;
//		temp = *it;
//		if (nat == temp.GetNat())
//			return temp;
//	}
//}
//
//Sportsman Sportclub::FindBySurname(string sur)
//{
//	for (auto it = players.begin(); it != players.end(); it++)
//	{
//		Sportsman temp;
//		temp = *it;
//		if (sur == temp.GetSur())
//			return temp;
//	}
//}
