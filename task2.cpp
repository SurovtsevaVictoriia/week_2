#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <array>
#include <deque>
#include <forward_list>
#include <chrono>
#include <ratio>
//deque
//list
//forward list

template <typename T>
auto qsort_dur(T & container) {

	auto now = std::chrono::system_clock::now();
	std::sort(container.begin(), container.end());
	auto end = std::chrono::system_clock::now();

	return std::chrono::duration_cast<std::chrono::milliseconds>(end - now).count();
}

template <typename T>
auto self_dur(T & container){

	auto now = std::chrono::system_clock::now();
	container.sort();
	auto end = std::chrono::system_clock::now();

	return std::chrono::duration_cast<std::chrono::milliseconds>(end - now).count();
}



int main() {

	const size_t N = 100000;

	std::array<int, N> my_array = {0};
	std::vector<int> my_vector(N);
	std::deque <int> my_deque(N);
	std::list<int> my_list(N);
	std::forward_list < int > my_forward_list (N);

	std::cout << "my_array " << qsort_dur(my_array) << std::endl;
	std::cout << "my_vector " << qsort_dur(my_vector) << std::endl;
	std::cout << "my_deque " << qsort_dur(my_deque) << std::endl;
	std::cout << "my_list " << self_dur(my_list) << std::endl; 
	std::cout << "my_forward_list " << self_dur(my_forward_list) << std::endl;


	return 0;

}


