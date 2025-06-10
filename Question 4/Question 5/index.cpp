// Sort a vector
// Implement a function to sort a std::vector<int> in ascending order using std::sort. give me simple solution 

#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

void sortVector(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
}

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    sortVector(numbers);

    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}


// Sort a vector
// Implement a function to sort a std::vector<int> in ascending order using std::sort. give me simple solution 

#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

void sortVector(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
}

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    sortVector(numbers);

    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
