/*
 * main.cpp
 *
 *  Created on: Aug 5, 2018
 *      Author: ZING
 */

#include<bits/stdc++.h>
using namespace std;

class Obj {
public:
	int data;

	Obj(int d = 0) :
			data(d) {
		cout << "normal constructor" << endl;
	}

	Obj(const Obj& obj) {
		cout << "copy constructor" << endl;
		this->data = obj.data;
	}

	Obj(Obj&& obj) {
		cout << "move constructor" << endl;
		this->data = obj.data;
	}

	Obj& operator=(const Obj& obj) {
		cout << "copy operator = " << endl;
		this->data = obj.data;
		return (*this);
	}

	Obj& operator=(Obj&& obj) {
		cout << "move operator = " << endl;
		this->data = obj.data;
		return (*this);
	}

	~Obj() {
		cout << "Destroyed!" << endl;
	}
};

Obj func0() {
	Obj obj;
	return obj;
}

Obj func1(Obj obj) {
	cout << "func1 begins" << endl;
	cout << "ready to return" << endl;
	return obj;
}

Obj func2(Obj& obj) {
	cout << "func2 begins" << endl;
	cout << "ready to return" << endl;
	return obj;
}

Obj func3(Obj&& obj) {
	cout << "func3 begins" << endl;
	cout << "ready to return" << endl;
	return obj;
}
//-fno-elide-constructors

int main() {
	Obj obj(1); // normal constructor
	Obj obj1 = obj; // copy operator =
	Obj obj2; // normal constructor

	cout << "######test for func0" << endl;
	obj2 = func0();

	cout << "######test for func1" << endl;
	obj2 = func1(obj);

	cout << "######test for func2" << endl;
	obj2 = func2(obj);

	cout << "######test for func3" << endl;
	// obj2 = func3(obj); // compile error
	obj2 = func3(func1(obj));

	cout << "ready to return from main" << endl;
	return 0;
}
