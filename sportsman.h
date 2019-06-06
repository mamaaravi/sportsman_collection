#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Sportsman
{
protected:
	string surname;
	int age;
	string nationality;
public:
	Sportsman() = default;
	Sportsman(string s, int a, string n);
	/*bool operator<(const Sportsman&);
	bool operator>(const Sportsman&);
	bool operator==(const Sportsman&);*/
	~Sportsman();
	virtual void Input(ifstream&in);
	virtual void Output(ofstream&out);
	virtual void Input();
	virtual void Output();
	 string GetNat() { return nationality; }
	 string GetSur(){return surname;}
	 //virtual int GetVal() = 0;

};