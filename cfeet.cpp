// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include"stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	CFeet();
	CFeet(int f, int i);
	int setFeet(int f, int i);
	void displayFeet();
	void addFeet();
	~CFeet();
	int check();
	CFeet addFeet(CFeet &od);
	CFeet operator +(CFeet &otemp);
	CFeet operator +(const int &d);
};
CFeet::CFeet()
{
	feet = 1;
	inches = 12;
}
CFeet::~CFeet()
{
	//feet = 1;
	//inches = 12;
}
CFeet::CFeet(int f, int i)
{
	feet = f;
	inches = i;
	check();
}
int CFeet::setFeet(int f, int i)
{
	feet = f;
	inches = i;
	check();
	return 0;
}
void CFeet::displayFeet()
{
	cout << "feet=" << feet << "inches=" << inches << endl;
}
void CFeet::addFeet()
{
	//int feet;
	//int inches;
	//1 feet = 12 inches;
	if (inches>12)
	{
		feet = feet + (inches - 12);
		
	}
}
CFeet CFeet:: operator +(CFeet &otemp)
{
	CFeet temp;
	temp.setFeet(feet + otemp.feet, inches + otemp.inches);
	return temp;
	check();
}
CFeet CFeet:: operator +(const int &d)
{
	CFeet temp;
	temp.setFeet(feet, inches + d);
	return temp;
	check();
}
CFeet CFeet::addFeet(CFeet &od)
{
	CFeet temp;
	temp.setFeet(feet + od.feet, inches + od.inches);
	return temp;
	check();
}
int CFeet::check()
{
	
		if (inches>12)
		{
			feet = feet + (inches - 12);
			inches = inches - 12;
		}
		return 0;
}
int main()
{
	CFeet od1(3, 3), od2(2, 15), od3;
	od3 = od1 + 15;
	od1.displayFeet();
	od2.displayFeet();
	od3.displayFeet();
	return 0;
}


