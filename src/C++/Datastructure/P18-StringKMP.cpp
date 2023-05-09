#include <iostream>
#include <iterator>
#include <stack>
#include <vector>
constexpr int SIZE = 10;
int Stack(char arr[], int size) {
	std::stack<char> S;
	for (int i = 0; i < size; i++) {
		if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{') {
			S.push(arr[i]);
		} else if (arr[i] == ')' || arr[i] == ']' || arr[i] == '}'){
      S.pop();
    }else{
      

    }

	}
	}
    }

	int main() {
		char* arr = new char[SIZE];
		std::cout << "Enter is string:";
		std::cin.getline(arr, SIZE);

		// Stack(arr, SIZE);
		return 0;
	}