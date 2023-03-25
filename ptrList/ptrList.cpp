#include "ptrList.h"

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
	if (isEmpty()) {
		std::cout << "The list is empty!\n";
		return;
	}
	while (ptr != nullptr)
	{
		std::cout << ptr->data << " ";
		ptr = ptr->next;
	}
	std::cout << "\n";
}

void List::pop(const int& val) {
	if (isEmpty()) {
		std::cout << "Error! The list is already empty!\n";
		return;
	}
	else {
		Node* ptr = head;
		while (ptr != nullptr) {
			if (ptr->data == val) {
				Node* onDelete = new Node();
				onDelete = ptr;

				if(ptr->next != nullptr)ptr->next->prev = ptr->prev;
				if (ptr->prev != nullptr) ptr->prev->next = ptr->next;
				else head = ptr->next;
				
				delete onDelete;
				std::cout << "Item popped successfully\n";
				return;
			}
			else {
				ptr = ptr->next;
			}
		}
		std::cout << "Error! No such item in the list\n";
	}
}
