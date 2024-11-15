#include "Apartment.h"
#include "home.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");

	human h1("Alice", 25);
	human h2("Bob", 30);
	human h3("Charlie", 35);

	Apartment a1(2);
	a1.print();

	Apartment a2 = a1;
	a2.print();

	home house(2);
	house.print_apart();

	home house2 = house;
	house2.print_apart();

	return 0;
}