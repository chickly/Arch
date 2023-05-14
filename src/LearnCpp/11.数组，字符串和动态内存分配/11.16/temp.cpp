#include <array>
#include <iostream>
using namespace std;
template <typename T, size_t N> void reversePrint(array<T, N> const& arr, size_t index) {
	if (index == 0) {
		cout << arr[index] << " ";
	} else {
		cout << arr[index] << " ";
		reversePrint(arr, index - 1);
	}
}
int main() {
	array arr{1, 2, 3, 4, 5};
	reversePrint(arr, arr.size() - 1);
	return 0;
}
