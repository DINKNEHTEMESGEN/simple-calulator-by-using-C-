//simple calculator
#include<iostream>
using namespace std;

int main()
{
	cout << "*************************************\n";
	cout << "This is simple calculator\n";
	cout << "*************************************\n";

	cout << "Here are choices to calculate\n";
	int calculator;
	switch (calculator) {
	case'1': 	cout << "Enter two numbers to ADD\n";
		void add();
		break;
	case'2':cout << "Enter two numbers to SUBTRACT\n";
		void Subtraction();
		break;
	case'3':cout << "Enter two numbers to MULTIPLY\n";
		void Multiplication();
		break;
	case'4':cout << "Enter two numbers to DIVIDE\n";
		void Division();
		break;
	default:break;
	}


	void addition(double, double) {
		double a, b;
		cout << "Please enter two numbers to add\n";
		cin >> a;
		cin >> b;
		double sum = a + b;
		cout << "the sum of " << a << "and" << b << "is = " << sum << endl;
	}
	void Subtraction(double, double) {
		double a, b;
		cout << "Please enter two numbers to compute subtraction\n";
		cin >> a;
		cin >> b;
		double diff = a - b;
		cout << "the difference between " << a << "and" << b << "is = " << diff << endl;
	}
	void Multiplication(double, double) {
		double a, b;
		cout << "Please enter two numbers to compute multiplication\n";
		cin >> a;
		cin >> b;
		double prod = a + b;
		cout << "the Product of " << a << "and" << b << "is = " << prod << endl;
	}
	void Division(double, double) {
		double a, b;
		cout << "Please enter two numbers to compute division\n";
		cin >> a;
		cin >> b;
		double quou = a / b;
		cout << "the quotient of " << a << "and" << b << "is = " << quou << endl;
	}

}

