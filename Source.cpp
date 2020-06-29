#include"Driver.h"
#include<iostream>
#include<exception>
#include<string>
#include<list>
#include"Fine.h"

using namespace std;


enum MyEroors{NONE,OVERFLOW_,ZERO};
double div(double a, double b,double&result) {
	if (b==0)
	{
		return MyEroors::ZERO;
	}
	if (b > 1'234'567) {
		return MyEroors::OVERFLOW_;
	}
	result = a / b;
	return MyEroors::NONE;
}


class Traint {
	double side1;
	double side2;
	double side3;
};


int main() {


	Fine f1("Scorost", "10.08.20", 2000);
	Fine f2("raid red color", "12.06.19", 4000);
	CarNode car;
	car.AddNode(1, &f1);
	car.AddNode(2, &f1);
	car.print();
	car.printNumber(1);
	car.deleteNumber(1);
	car.print();













	/*double first = 10,second = 3;
	double result = 0;
	MyEroors error;
	if ((error=div(first, second, result)) != MyEroors::NONE) {
		cout << "Result OK : " << result << endl;
		cout << "Result of work(code) :" << error << endl;
	}
	else {
		cout << "Error in div function with code : " << error << endl;
	}


	/*Car car("BMW", 220, 0);
	Horse h("NIN", 10);
	Driver dr("vadim", &car);
	dr.testDrive();
	dr.setVechile(&h);
	dr.testDrive();*/
	
	
	system("pause");
	return 0;
}