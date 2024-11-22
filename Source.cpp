#include "human.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");

	human h1("Joe", 25);
	
	human::display();

	return 0;
}