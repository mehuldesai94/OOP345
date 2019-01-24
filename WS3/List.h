#ifndef W3_LIST_H
#define W3_LIST_H


#include <iostream>
#include <cstring>
using namespace std;

template<class T, int N>
class List {
	T a[N]; //T and N are specified by client code. a is an array of any data type
	size_t count;
public:
	List() { };
	size_t size() const { return count; };   //returns the number of entries in array a
	const T& operator[](int index) const { return a[index]; };  //returns requested array index
	void operator+=(const T& n) {
		if (size() < N) {
			a[size()] = n; //Adds n to a IF SPACE IS AVAILABLE
			count++;
		}
	};
};


#endif // !W3_LIST_H
