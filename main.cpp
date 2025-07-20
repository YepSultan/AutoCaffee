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

	string fullnames, id, times, bar, menu; 
	int age;


public:
	void getOrder(){
		out << "Enter your fullnam: ";
		getline(cin, fullnames);
		out << "What's your order?: ";
		in >> age;
		in.ignore();
		out << fullnames << " | " << "Order: "<< age << nl;
	}
};
 
int main(int argc, char const *argv[])
{

	Booking b1;
	Booking b2;
	Booking b3;
	b1.getOrder();
	b2.getOrder();
	b3.getOrder();
	return 0;
}