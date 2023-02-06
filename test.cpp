#include<iostream>
#include<memory>
#include<vector>
#include<array>
#include<string>
#include<filesystem>
#include<list>
#include<map>
#include<queue>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<atomic>
#include<algorithm>
#include<queue>
#include<type_traits>

#define LOG(msg) std::cout << "\033[1;31m > ("<< __func__ << "): \033[0;41m" << msg << "\033[0m"<<std::endl;


//template <class T, class CONTAINER_T, class COMPARISON_T>
//const CONTAINER_T& getContainer(const std::priority_queue<T, CONTAINER_T, COMPARISON_T>& pq) {
//	struct _AccessProtected : private std::priority_queue<T, CONTAINER_T, COMPARISON_T> {
//		static const CONTAINER_T& getContainer(const std::priority_queue<T, CONTAINER_T, COMPARISON_T>& pq) {
//			return pq.*&_AccessProtected::c;
//		}
//	};
//}
//

struct A {
	A(const std::string& str_) : str(str_) {std::cout<<"constructed!"<<std::endl;}
	A(const A& other) {std::cout<<"COPIED!"<<std::endl;}
	std::string str;
};

struct B {
	A item;
	B(const std::string& test) : item(test) {}
	const A& get() const {return item;}
	const A& get2() const {return item;}
};

using small_int = uint8_t;

template <class T, small_int N>
using test_arr = std::array<T, N>;

int main() {
	test_arr<int, 2> arr1;
	test_arr<int, 2> arr2;

	arr1 == arr2;
	return 0;
}
