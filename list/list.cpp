#include "list.h"

bool List::isEmpty() const
{
	return head == nullptr;
}

void List::push(const int& val) {
	if (isEmpty()) {
		head = new Node(val);
		lastAddedNode = head;
		return;
	}
	else {
		Node* newnode = new Node(val);
		lastAddedNode->next = newnode;
		newnode->prev = lastAddedNode;
		lastAddedNode = newnode;
	}
}

void List::print() const {
	Node* ptr = head;
	while (ptr != nullptr)
	{
		std::cout << ptr->data << " ";
		ptr = ptr->next;
	}
	std::cout << "\n";
}
