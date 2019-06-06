#pragma once
#include "sportsman.h"
class Tennisist: public Sportsman
{
private:
	int rate;
	int prize;
	int salary;
public:
	Tennisist() :Sportsman() {};
	Tennisist(string s, int a, string n, int r, int p, int sal);
	void Input(ifstream&in) override;
	void Output(ofstream&out) override;
	void Input() override;
	void Output() override;
	~Tennisist();
};