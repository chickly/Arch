#include <iostream>
#include <iterator>
#include <utility>

void sort(int *begin, int *end) {
    for (auto startElement{begin}; startElement != end; ++startElement) {
        auto smallestElement{startElement};

        // std::next returns a pointer to the next element, just like
        // (startElement + 1) would.
        for (auto currentElement{std::next(startElement)};
             currentElement != end; ++currentElement) {
            if (*currentElement < *smallestElement) {
                smallestElement = currentElement;
            }
        }

        std::swap(*startElement, *smallestElement);
    }
}

int main() {
    int array[]{2, 1, 9, 4, 5};

    sort(std::begin(array), std::end(array));

    for (auto i : array) {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    return 0;
}
