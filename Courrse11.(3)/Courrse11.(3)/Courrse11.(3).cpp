// Courrse11.(3).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//template <typename T> T myMax(T Number1, T Number2)
//{
//	return (Number1 > Number2) ? Number1 : Number2;
//}
// 
//
template <class T>
class Calculator
{
private:
		T Number1, Number2;
public:
	Calculator(T n1, T n2)
	{
		Number1 = n1;
		Number2 = n2;
	}
	void Print()
	{
		cout << Add() << endl;
		cout << Sub() << endl;
		cout << Mult() << endl;
		cout << Divide() << endl;

	}
	T Add()
	{
		return Number1 + Number2;
	}
	T Sub()
	{
		return Number1 - Number2;
	}
	T Mult()
	{
		return Number1 * Number2;
	}
	T Divide()
	{
		return Number1 / Number2;
	}

};
int main()
{
	//cout << myMax<int>(3, 7) << endl;
	//cout << myMax<double>(5.3, 7.2) << endl;
	//cout << myMax<char>('a', 'b') << endl;
	 
	Calculator<int>intCalc(2, 1);
	Calculator<float>floatCalc(2.3, 1.2);
	cout << "Int Results: " << endl;
	intCalc.Print();
	cout << "Float Results: " << endl;
	floatCalc.Print();


}

