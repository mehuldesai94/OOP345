/*
Name: Mehulkumar Desai
Student number: 110288172
Email: mmdesai@myseneca.ca
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Text.h"

namespace w2
{
	// Accepts a filename and set to safe-empty
	Text::Text(std::string file)
		:filename(file)
		, fileString(new std::string[fileCount])
		, fileCount(0)
	{
		// If all the conditions are met
		if (!filename.empty())
		{
			countLines();
			readFile();
		}
	}

	// Read file into std::string::m_StringPtr
	void Text::readFile()
	{
		std::string buf;							// will contain one line from the file
		std::ifstream file(filename);
		int i = 0;

		fileString = new std::string[fileCount];		// allocate memory of size m_Count

		while (std::getline(file, buf))				// goes through the file while storing one line at a time in buf
		{
			fileString[i] = buf;
			i++;
		}
	}

	// Counts how many lines are in the file
	void Text::countLines()
	{
		std::ifstream file(filename);
		std::string buf;

		while (std::getline(file, buf))
			fileCount++;
	}

	// Copy Constructor - copies the elements from other into 'this'
	Text::Text(const Text& other)
	{
		*this = other;
	}

	// Copy Assignment Operator
	Text& Text::operator=(const Text& old)
	{
		// Shallow Copy
		fileCount = old.fileCount;
		filename = old.filename;

		if (this != &old)
		{
			// Allocate new memory
			delete[] fileString;
			fileString = new std::string[fileCount];

			// Deep copy - copies the content of the resource not just the address
			for (size_t i = 0; i < fileCount; i++)
				fileString[i] = old.fileString[i];
		}
		return *this;
	}

	// Move Constructor
	Text::Text(Text&& src)
	{
		*this = std::move(src);
	}

	// Move operator
	Text& Text::operator=(Text&& src)
	{
		if (this != &src)
		{
			filename = src.filename;
			fileCount = src.fileCount;

			// Deallocate the memory for the current object's m_StringPtr
			delete[] fileString;

			fileString = src.fileString;
			src.fileString= nullptr;
		}
		return *this;
	}

	// Destructor
	Text::~Text()
	{
		delete[] fileString;
		fileString = nullptr;
	}

	// Return size of Count
	size_t Text::size() const
	{
		return fileCount;
	}
}