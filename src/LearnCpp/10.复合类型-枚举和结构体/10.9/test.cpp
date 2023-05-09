#include <iostream>
#include <utility>
template <typename T, typename U> struct Pair {
	T first{};
	U second{};
};
template <typename T, typename U> void Print(std::pair<T, U> p) {
	std::cout << p.first << p.second << "\n";
}
int main() {
	Pair<int, char> p1{5, 'a'}; // instantiates Pair<int> and creates object p1
	std::cout << p1.first << ' ' << p1.second << '\n';
  std::pair<int , double> P1{5,5.5};
	Pair<double, double> p2{1.2, 1.4}; // instantiates Pair<double> and creates object p2
	std::cout << p2.first << ' ' << p2.second << '\n';

	Pair<double, double> p3{7.8, 9.0}; // creates object p3 using prior definition for Pair<double>
	std::cout << p3.first << ' ' << p3.second << '\n';

	return 0;
}