#include "DinArr.h"
using namespace std;

DinArr GetObject() {
	DinArr object(3);
	object.Input();
	return object;
}

int main() {
	DinArr first(5);
	first.Input();
	first.Console();
	DinArr second = first;
	second.Console();

	DinArr rez = GetObject();
	rez.Console();
	

	int userAnswear;
	int userLookFor;

	cout << "How many we add";
	cin >> userAnswear;
	rez.ReSize(userAnswear);
	cout << "Resize Result: " << endl;
	rez.Console();
	


	rez.Sorting();
	cout << "Sort Result: " << endl;
	rez.Console();


	cout << "Enter number: ";
	cin >> userLookFor;
	cout << "Index: " << rez.LookFor(userLookFor) << endl << endl;


	rez.Refactor();
	cout << "Reverse Result: " << endl;
	rez.Console();
}