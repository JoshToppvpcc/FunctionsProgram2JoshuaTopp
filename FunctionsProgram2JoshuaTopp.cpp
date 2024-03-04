// FunctionsProgram2JoshuaTopp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void GetPrices(float &p1, float &p2, float &p3) {
	cout << "Please enter the price of the item currently," << endl << "the price last year, then the price 2 years ago : ";
	cin >> p1 >> p2 >> p3;
}
void CalculateInflation(float &p1,float &p2,float &p3,float &inflationLastYear,float &inflationFirstYear) {
	inflationLastYear = ((p1 - p2) / p2)* 100;
	inflationFirstYear = ((p2 - p3) / p3)* 100;
}
void DisplayInflation(float &inflationLastYear, float & inflationFirstYear) {
	cout << "The inflation from 2 years ago" << endl << "to last year on that item is : " << inflationFirstYear << " % " << endl;
	cout << "The inflation from last year" << endl << "to this current year on that item is : " << inflationLastYear << " % ";

}
int main()
{
	float p1;
	float p2;
	float p3;
	float inflationLastYear;
	float inflationFirstYear;
	GetPrices(p1, p2, p3);
	CalculateInflation(p1, p2, p3, inflationLastYear, inflationFirstYear);
	DisplayInflation(inflationLastYear, inflationFirstYear);



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
