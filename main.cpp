#include <iostream>
#include <string>

using namespace std;

#define in cin
#define out cout
#define nl endl


string fullnames, id, times, place; 
int age;
int start {0};
int end_s {2};

class Booking {
public:
	void getNames(){

		out << "Welcome to KazTrip!" << nl;
		out << "Please follow the instruction: " << nl;

		while(start != end_s){
			out << "Enter your fullnam: ";
			in >> fullnames;
			out << "Enter your Age: ";
			in >> age;
			start ++;

		out << fullnames << " " << age << nl;
		}
	}
};

int main(int argc, char const *argv[])
{
	Booking bk;
	bk.getNames();
	return 0;
}