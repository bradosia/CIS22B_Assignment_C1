/*
Branden Lee
CIS 22B
Fall 2017
Assignment C
Problem C1

Used Microsoft Visual Studio 2017

Car class
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

/**************************************************
** global functions, and variables
**************************************************/

void input (string& reportingMarkInit, int& carNumberInit, string& kindInit, bool& loadedInit, string& destinationInit);

/**************************************************
** Car class
**************************************************/
class Car
{
private:
	string reportingMark;
	int carNumber;
	string kind;
	bool loaded;
	string destination;
public:
	/******************* Car::setup *******************
	** Puts the data into the data structure
	** height and radius into a pointer to the Cone
	**************************************************/
	void setup (string reportingMarkInit, int carNumberInit, string kindInit, bool loadedInit, string destinationInit)
	{
		reportingMark = reportingMarkInit;
		carNumber = carNumberInit;
		kind = kindInit;
		loaded = loadedInit;
		destination = destinationInit;
	};

	/********************* Car::output ****************
	** Calls the getVolume function to get the volume
	** Prints the height, radius, and volume in a neat
	** format
	**************************************************/
	void output ()
	{
		// cout << bool will output an integer
		// we create a temporary string to output the bool
		// std::boolalpha can also be used
		string loadedString = (!loaded) ? "false" : "true";
		cout << endl << "The car parameters are: " << endl
			<< setw (16) << left << "reportingMark:" << reportingMark << endl
			<< setw (16) << left << "carNumber: " << carNumber << endl
			<< setw (16) << left << "kind: " << kind << endl
			<< setw (16) << left << "loaded: " << loadedString << endl
			<< setw (16) << left << "destination: " << destination << endl;
	};
};

int main ()
{
	Car* ptr = new Car ();
	string reportingMark;
	int carNumber;
	string kind;
	bool loaded;
	string destination;
	input (reportingMark, carNumber, kind, loaded, destination);
	ptr->setup (reportingMark, carNumber, kind, loaded, destination);
	ptr->output ();
	delete ptr;
	system ("pause");
	return 0;
}

/********************* input **********************
** Reads the height and radius from the user as
** reference parameters
**************************************************/
void input (string& reportingMarkInit, int& carNumberInit, string& kindInit, bool& loadedInit, string& destinationInit)
{
	string loadedString;
	bool destinationPrompted = false;
	while (reportingMarkInit.empty () || kindInit.empty () || (kindInit != "business" && kindInit != "maintenance" && kindInit != "other"))
	{
		cout << "Enter each value promted for below followed by a hard return: " << endl;
		cin.clear ();
		cout << "reportingMark: ";
		cin >> reportingMarkInit;
		cout << "carNumber: ";
		cin >> carNumberInit;
		cout << "kind: ";
		cin >> kindInit;
		cout << "loaded: ";
		cin >> loadedString;
		cout << endl;
	}
	// cin by default doesn't automatically parse "true" as boolean true
	// we shall temporarily store the bool string and check if its true
	// all other values we will assume are false.
	loadedInit = (loadedString != "true") ? false : true;
	std::cin.ignore (std::numeric_limits<std::streamsize>::max (), '\n'); //ignore newline
	// user required to enter destination if loaded is true.
	// user is prompted only once for destination if loaded is false;
	while (!destinationPrompted || loadedInit && (destinationInit.empty () || destinationInit == "NONE"))
	{
		if (destinationPrompted) cout << "Destination is REQUIRED if car is loaded" << endl;
		destinationPrompted = true;
		cout << "Enter the destination " << endl
			<< "i.e. Salt Lake City" << endl;
		cin.clear ();
		getline (cin, destinationInit);
	}
}

/* Execution results
Enter each value promted for below followed by a hard return:
reportingMark: SP
carNumber: 34567
kind: business
loaded: true

Enter the destination
i.e. Salt Lake City
Salt Lake City

The car parameters are:
reportingMark:  SP
carNumber:      34567
kind:           business
loaded:         true
destination:    Salt Lake City
*/