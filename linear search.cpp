#include <iostream>
#include <vector>

// Function returns the index if found, otherwise returns -1
int iterativeLinearSearch(const std::vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Element found, return current index
        }
    }
    return -1; // Element not found after checking the entire collection
}

int main() {
    std::vector<int> numbers = {23, 45, 12, 89, 7, 56};
    int target = 89;

    int result = iterativeLinearSearch(numbers, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
