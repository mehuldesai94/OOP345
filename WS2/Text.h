/*
Name: Mehulkumar Desai
Student number: 110288172
Email: mmdesai@myseneca.ca
*/

#ifndef _W2_TEXT_H
#define _W2_TEXT_H

#include <string>
#include <memory>

namespace w2
{
	class Text
	{
		std::string filename;
		std::string* fileString;
		size_t fileCount;
	public:
		explicit Text(const std::string file = "Unknown");
		void readFile();
		void countLines();
		Text(const Text&);
		Text& operator=(const Text&);
		Text(Text&&);
		Text& operator=(Text&&);
		~Text();

		// Returns the number of records of text data
		size_t size() const;
	};
}

#endif // !_W2_TEXT_H