/*
Name: Mehulkumar Desai
Student number: 110288172
Email: mmdesai@myseneca.ca
*/

#ifndef Cstring_h
#define Cstring_h

#include <iostream>

namespace w1 
{
	const int MAX = 3;

	class Cstring 
	{
		char message[10];  //10 including null terminator
	public:
		Cstring(const char*);
		void display(std::ostream&) const;

	};
	std::ostream& operator << (std::ostream&, const Cstring&); //helper function
}

#endif /* Cstring_h */
