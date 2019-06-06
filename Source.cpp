#include "sportclub.h"
using namespace std;

int main()
{
	ifstream in;
	try
	{
		in.open("indata.txt");
		if (!in) throw "File not found!";
		cout << "File is open."<<endl;
	}
	catch (const char*s)
	{
		cout << s << endl;
		system("pause"); return 0;
	}


	ofstream out("outdata.txt");
	Sportclub Zbirna;
	Zbirna.Input(in, Zbirna);
	//Zbirna.Output();
	//Zbirna.AddSportsman();
	//Zbirna.Output();
	//Zbirna.DelSportsman();
	//Zbirna.Output();
	Zbirna.Output(out);
	system("pause");
	return 0;
}