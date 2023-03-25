#include "ptrList.h"


int main() {

	std::vector<int> vec = { 1, 5, 7, 8 };
	List list(vec);
	list.push(2);
	list.print();
	list.push(4);
	list.print();
	list.push(3);
	list.print();
	list.pop(4);
	list.print();
	list.pop(4);
	list.print();
	list.pop(2);
	list.print();
	list.pop(3);
	list.print();
	list.push(1337);
	list.print();
}