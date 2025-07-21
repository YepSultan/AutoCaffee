#include <iostream>
#include <string>

using namespace std;

#define in cin
#define out cout
#define nl endl



class BaseBase {
public:
	void getData(){
			
	}
};


class Booking {
private:

	string fullnames, id, drink, bar, menu; 
	int orderCode;


public:
	void getOrder(){
	
	out << nl;
	out << "---  Menu ---" << nl;
	out << "1. Iced Latte " << nl;
	out << "2. Thai Coffee" << nl;
	out << "3. Limonade " << nl;
	out << "4. Expresso " << nl;
	out << "5. Milk-Chocko " << nl;

	out << "Enter your fullnam: ";
	getline(cin, fullnames);
	out << "What's your order?: ";
	in >> orderCode;
	in.ignore();

	switch(orderCode) 
	{
		case 1: drink = "Iced Latte"; break; 
		case 2: drink = "Thai Coffee"; break;
		case 3: drink = "Limonade"; break;
		case 4: drink = "Expresso"; break;
		case 5: drink = "Milk-Chocko"; break;

	}
	out << fullnames << " | " << "Order: "<< drink << nl;
	}
};
 
int main(int argc, char const *argv[])
{

	string input, ordering;
	ordering = "Yes";
	Booking b1;


	out << "Wanna order something? [Yes/No]: ";
	in >> input;
	in.ignore();

	if (input == ordering)
	{
		b1.getOrder();
	}
	else if (input == "No")
	{
		out << nl;
		out << "Thanks for coming and good luck!" << nl;
		out << nl;
	}
	else
	{
		out << nl;
		out << "<<<<<<<----------------->>>>>>>" << nl;
		out << "It's seems like u tryna do something else :/ " << nl;
		out << "<<<<<<<----------------->>>>>>>" << nl;
		out << nl;
	}






	return 0;
}