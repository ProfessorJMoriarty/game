#include <iostream> { //Library }
using namespace std; 

int Main() { //Starting Point of Program}
	int input;
	cout << "How many Cookies would you like" << endl;
	cin >> input;

	if (input <= 5) {
		cout << "Are you sure you want that quantity" << endl;
	}
	else if (input < 10)
		cout << "Here take" << input << " Cookie(s)" << endl;
	else
		cout << "Be nice and leave some nice to others" << end;




