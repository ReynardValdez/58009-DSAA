#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int new_item = 20;
    int position = 2;
    numbers.insert(numbers.begin() + position, new_item);

    for (int i : numbers) {
        std::cout << i << " ";
    }

    return 0;
}
