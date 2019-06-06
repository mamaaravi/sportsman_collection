#pragma once
#include "sportsman.h"

class Footballer : public Sportsman
{
private:
	string club;
	int goals;
	int salary;

public:
	Footballer() :Sportsman() {};
	Footballer(string s, int a, string n, string c, int sal, int g);
	void Input(ifstream&in) override;
	void Output(ofstream&out) override;
	void Input() override;
	void Output() override;
	~Footballer();
};