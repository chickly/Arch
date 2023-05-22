#include <functional> // std::function
#include <iostream>
#include <iterator>
#include <utility>

// 降序排序
void sort(int *begin, int *end, std::function<bool(int, int)> compare) {
    for (auto startElement{begin}; startElement != end; ++startElement) {
        auto smallestElement{startElement};

        for (auto currentElement{std::next(startElement)};
             currentElement != end; ++currentElement) {
            // the comparison function is used to check if the current element
            // should be ordered before the currently "smallest" element.
            if (compare(*currentElement, *smallestElement)) {
                smallestElement = currentElement;
            }
        }

        std::swap(*startElement, *smallestElement);
    }
}
// 升序排序
void sort(int *begin, int *end) {
    for (auto startElement{begin}; startElement != end; ++startElement) {
        auto smallestElement{startElement};

        for (auto currentElement{std::next(startElement)};
             currentElement != end; ++currentElement) {
            if (*currentElement < *startElement) {
                smallestElement = currentElement;
            }
        }

        std::swap(*startElement, *smallestElement);
    }
}

int main() {
    int array[]{2, 1, 9, 4, 5};
    // 使用std::greater降序排序
    ::sort(std::begin(array), std::end(array), std::greater{});
    ::sort(std::begin(array), std::end(array));
    for (auto i : array) {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    return 0;
}
