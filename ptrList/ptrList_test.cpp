#include "ptrList.h"


int main() {

	std::vector<int> vec = { 1, 5, 7, 8 };
	

	std::cout << "..................STARTING TESTS..................\n\n";
	std::cout << "..................CREATING WITH A VECTOR {1, 5, 7, 8}..................\n\n";
	List list(vec);
	list.print();
	std::cout << "..................PUSH 2..................\n\n";
	list.push(2);
	list.print();
	std::cout << "..................PUSH 4..................\n\n";
	list.push(4);
	list.print();
	std::cout << "..................PUSH 3..................\n\n";
	list.push(3);
	list.print();
	std::cout << "..................REMOVE 4..................\n\n";
	list.remove(4);
	list.print();
	std::cout << "..................REMOVE 4..................\n\n";
	list.remove(4);
	std::cout << "..................REMOVE 2..................\n\n";
	list.remove(2);
	list.print();
	std::cout << "..................REMOVE 3..................\n\n";
	list.remove(3);
	list.print();
	std::cout << "..................PUSH 1337..................\n\n";
	list.push(1337);
	list.print();
}