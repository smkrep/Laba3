#include <iostream>
#include <vector>

class Stack {
public:

	Stack();
	Stack(const Stack& copy);
	~Stack();
	Stack& operator=(const Stack& rhs);
	bool isEmpty();
	void push(const int& val);
	void pop();
	int top();

private:

};