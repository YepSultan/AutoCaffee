#include <iostream>
#include <string>

using namespace std;

#define in cin
#define out cout
#define nl endl


string fullnames, id, times, bar; 
int age;
int start {0};
int end_s {2};

class Booking {
public:
	void getNames(){
+-
		out << "Welcome to AutoCoffee!" << nl;
		out << "Please follow the instruction: " << nl;

		while(start != end_s){
			out << "Enter your fullnam: ";
			getline(cin, fullnames);
			out << "What's your order?: ";
			in >> age;
			start ++;

		out << fullnames << " " << age << nl;
		}
	}
};

int main(int argc, char const *argv[])
{
	Booking bk;
	bk.getjNames();
	return 0;
}