#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    
    std::reverse(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;

    return 0;
}
