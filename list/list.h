#include <iostream>


class List {
public:
	List() = default;
	List(const List& copy);
	~List();

	List& operator=(const List& rhs);

	bool isEmpty();
	void push(const int& val);
	void pop(const int& val);


private: 
	struct Node {
		Node() = default;

		Node(const int& val)
		{
			data = val;
		}

		int data = 0;
		Node* next = nullptr;
		Node* prev = nullptr;
		~Node() = default;
	};

	Node* head = nullptr;

};