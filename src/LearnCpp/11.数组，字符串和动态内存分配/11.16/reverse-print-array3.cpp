#include <algorithm>
#include <array>
#include <iostream>
int main(int argc, char *argv[]) {
    using namespace std;
    array arr{1, 2, 3, 4, 5};
    reverse(arr.begin(), arr.end());
    for (const auto &temp : arr) {
        cout << temp << " ";
    }
    return 0;
}
