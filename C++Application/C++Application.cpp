#include <iomanip>
#include <iostream>
#include <ios>
#include<ctime>
using namespace std;

class DavariClass
{
public:
	string name, surName = "";
	long long phoneNumber = 0;

	void printMessage(string name) {
		cout << "Welcome to C++ " << name << endl;
		cout << endl;
	}

	void userInfo(string name, string surName, long long phoneNumber) {
		cout << "User Info:\n"
			<< setw(16)
			<< "Name: " << name << endl << setw(23)
			<< "Family name: " << surName << endl << setw(24)
			<< "Phone number: " << phoneNumber << endl;
		cout << endl;
	}

	string requestSend(string request) {
		return request;
	}
};

class DateTimeClass {
public:
	time_t now = time(0);
	char* dt = ctime(&now);
};

int main()
{
	string address = "";

	DavariClass davariObj;
	DateTimeClass getDateTimeObj;

	string name = davariObj.name = "Mahdar.io";
	string familyName = davariObj.surName = "Davari";
	long long phoneNumber = davariObj.phoneNumber = 9354301297;

	davariObj.printMessage(name);
	davariObj.userInfo(name, familyName, phoneNumber);

	cout << "Enter your address: \n";
	cin >> address;

	cout << "Your addres is: " << davariObj.requestSend(address) << endl;

	cout << "The curent date and time is: " << getDateTimeObj.dt;
	return 0;
}


