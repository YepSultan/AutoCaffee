#include <iostream>
#include <string>
#include <fstream>
#include <thread>

using namespace std;

// Main Body
class Booking {
private:

	string fullnames, drink;
	int orderCode;

private:
	void saveToFile(){
		ofstream file("orders.txt", std::ios::app);
		file << fullnames << " | Order: " << drink << "\n";
		file.close();
	}
public:
	void readTheFile(){
		ifstream readFile;
		readFile.open("orders.txt");

		string line;

		while (getline(readFile, line)){
			cout << line << endl;
		}

		readFile.close();
	}
public:
	void requestFile(){
		string answerUser;
		cout << "Show your orders? Yes/No: ";
		cin >> answerUser;

		if (answerUser == "Yes"){
			cout << "Orders: " << endl;
			cout << endl;
			readTheFile();
			cout << endl;
		}
		else{
			cout << "Good Luck" << endl;
		}
	}

public:
	void getOrder(){
	
	cout << endl;
	cout << "	|---  Menu --- |" << endl;
	cout << "	|1. Iced Latte |" << endl;
	cout << "	|2. Thai Coffee|" << endl;
	cout << "	|3. Lemonade   |" << endl;
	cout << "	|4. Espresso   |" << endl;
	cout << "	|5. Milk Choco|" << endl;
	cout << "	|---  Menu --- |" << endl;

	cout << endl;
	cout << "Enter your fullname: ";
	getline(cin, fullnames);
	cout << "What's your order?: ";
	cin >> orderCode;
	cout << endl;
	cin.ignore();

	switch(orderCode) 
	{
		case 1: drink = "Iced Latte"; break; 
		case 2: drink = "Thai Coffee"; break;
		case 3: drink = "Lemonade"; break;
		case 4: drink = "Espresso"; break;
		case 5: drink = "Milk Choco"; break;

	}
	cout << "////////////////////////////////////" << endl;
	cout << fullnames << " | " << " Order: "<< drink << " |-- making --|" << endl;
	cout << "////////////////////////////////////" << endl;

	saveToFile();
	}
};


class Program {
public:
	void programStart(){

	string input, ordering;
	ordering = "Yes";
	Booking b1;
	cout << endl;
	cout << "       AutoCaffee - Console         " << endl;
	cout << "////////////////////////////////////" << endl;
	cout << "/ Wanna order something? [Yes/No]: /" << endl;
	cout << "////////////////////////////////////" << endl;
	cout << endl;
	cout << "-------:: ";
	cin >> input;
	cin.ignore();

	if (input == ordering)
	{
		b1.getOrder();

	}
	else if (input == "No")
	{
		cout << endl;
		cout << "Thanks for coming and good luck!" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "<<<<<<<----------------->>>>>>>" << endl;
		cout << "It's seems like u r for looking something else :/ " << endl;
		cout << "<<<<<<<----------------->>>>>>>" << endl;
		cout << endl;
	}

	b1.requestFile();

	}


};

int main()
{
	Program().programStart();
	return 0;
}