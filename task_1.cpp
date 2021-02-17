#include <iostream>
#include <vector>

template <typename T>
void print(std::vector<T>& a) {
	std::cout << " size " << a.size() << std::endl;
	std::cout << " capacity " << a.capacity() << std::endl;
}

int main() {

	std::vector<int> a (100);
	std::cout << "vector created " << std::endl;

	print(a);

	//size 100
	//capacity 100

	a.push_back(0);

	std::cout << "push backed 1 element" << std::endl;
	print(a);

	//size 101
	//capacity 150

	std::vector<double> b;
	std::cout << "new vector created " << std::endl;
	print(b);
	//size 0
	//capacity 0

	b.reserve(201);
	std::cout << "reserved 201 " << std::endl;
	print(b);

	//size 0
	//capacity 201

	std::vector<int> c(100000000);
	std::cout << "new big vector created " << std::endl;
	print(c);

	c.push_back(0);

	std::cout << "push backed 1 element" << std::endl;
	print(c);

	//size 100000001
	//capacity 150000000 - still added a half


}
