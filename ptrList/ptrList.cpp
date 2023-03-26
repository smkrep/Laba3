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

void List::remove(const int& val) {
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

				if (ptr->prev != nullptr) {
					ptr->prev->next = ptr->next;
					lastAddedNode = ptr->prev;
				}
				else {
					head = ptr->next;
					lastAddedNode = head;
				}
				
				delete onDelete;
				std::cout << "Item " << val << " popped successfully\n";
				return;
			}
			else {
				ptr = ptr->next;
			}
		}
		std::cout << "Error! No such item in the list\n";
	}
}

List::List(const std::vector<int>& values) {
	for (int i = 0; i < values.size(); i++) {
		this->push(values[i]);
	}
	std::cout << "Constructed with vector\n";
}


