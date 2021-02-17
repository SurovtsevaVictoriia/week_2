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

	std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - now).count();
	return std::chrono::duration_cast<std::chrono::milliseconds>(end - now).count();
}


int main() {

	std::array<int, 10> my_array = { 9,8,7,6,5,4,3,2,1,0 };
	std::vector<int> my_vector(10);
	std::deque <int> my_deque(10);
	std::list<int> my_list = { 9,8,7,6,5,4,3,2,1,0 };
	std::forward_list < int > my_forward_list = { 9,8,7,6,5,4,3,2,1,0 };


	auto now1 = std::chrono::system_clock::now();
	std::sort(my_array.begin(),my_array.end());
	auto end1 = std::chrono::system_clock::now();

	/*
	auto now2 = std::chrono::system_clock::now();
	std::sort(my_vector.begin(), my_vector.end());
	auto end2 = std::chrono::system_clock::now();

	auto now3 = std::chrono::system_clock::now();
	std::sort(my_deque.begin(), my_deque.end());
	auto end3 = std::chrono::system_clock::now();

	auto now4 = std::chrono::system_clock::now();
	std::sort(my_list.begin(), my_list.end());
	auto end4 = std::chrono::system_clock::now();

	auto now5 = std::chrono::system_clock::now();
	std::sort(my_forward_list.begin(), my_forward_list.end());
	auto end5 = std::chrono::system_clock::now();
	*/


	auto elapse1 = std::chrono::duration_cast<std::chrono::milliseconds>(end1 - now1);
	//auto elapse2 = std::chrono::duration_cast<std::chrono::milliseconds>(end2 - now2);

	/*std::cout << qsort_dur(my_array) << std::endl;*/

	std::cout << elapse1.count() << std::endl;

}


