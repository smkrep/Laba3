#include <iostream>


class List {
public:
	List() = default;
	List(const List& copy);
	~List() = default;

	List& operator=(const List& rhs);

	bool isEmpty() const;
	void push(const int& val);
	void pop(const int& val);
	void print() const;
	void clear();


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
	Node* lastAddedNode = nullptr;

};