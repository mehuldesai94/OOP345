/*
Name: Mehulkumar Desai
Student number: 110288172
Email: mmdesai@myseneca.ca
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Cstring.h"
using namespace std;

int STORED = w1::MAX;  //global variable

namespace w1
{
	Cstring::Cstring(const char* data)
	{
		if (data[0] == '\0')
		{
			strcpy(message, "");
		}
		else 
		{
			strncpy(message, data, MAX);
			message[MAX] = '\0';
		}

	}

	void Cstring::display(std::ostream& os) const 
	{
		os << message;
	}

	std::ostream& operator << (std::ostream& os, const Cstring& data) 
	{
		static int counter = 0;
		os << counter << ": ";
		counter++; //increment the number of insertion

		data.display(os);
		return os;
	}
}
