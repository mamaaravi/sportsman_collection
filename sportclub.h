#pragma once
#include "footballer.h"
#include "tennisist.h"
#include <vector>
using namespace std;
class Sportclub
{
	string name;
	vector<Tennisist>T;
	vector<Footballer>F;
public:
	Sportclub() = default;
	Sportclub(string n, vector<Tennisist>t, vector<Footballer>F);
	~Sportclub();
	void Input(ifstream&in, Sportclub&S);
	void push_back(Tennisist temp);
	void push_back(Footballer temp);

	void Output();
	void Output(ofstream&out);
	void DelSportsman();
	void AddSportsman();
	//Sportsman FindByCountry(string nat);
	//Sportsman FindBySurname(string sur);
};