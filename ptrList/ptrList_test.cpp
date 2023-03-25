#include "ptrList.h"


int main() {

	List list;
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
	list.push(348);
	list.print();
}