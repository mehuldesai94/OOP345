#ifndef W3_PAIR_H
#define W3_PAIR_H


#include <iostream>
using namespace std;

template<class A, class B>
class Pair {
	A a;
	B b;
public:
	Pair() { a = A(), b = B(); };  //adopts safe empty state
	Pair(const A& ra, const B& rb) { a = ra, b = rb; };
	const A& getKey() const { return a; };  //NOT SURE
	const B& getValue() const { return b; };
};

#endif // !W3_PAIR_H
#pragma once
