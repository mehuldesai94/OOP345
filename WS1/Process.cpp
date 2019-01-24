/*
Name: Mehulkumar Desai
Student number: 110288172
Email: mmdesai@myseneca.ca
*/

#include <iostream>
#include "Process.h"
#include "Cstring.h"
using namespace std;
using namespace w1;

void process(const char* inputDate, std::ostream& os)
{
	Cstring inputObj(inputDate); //creating a Cstring object and passing "s" as a constructor parameter
	os << inputObj << endl;
}
