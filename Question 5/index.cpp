// How to reverse a vector in c++ 

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<double> numbers = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "Original vector: ";
    for (double num : numbers) {
        std::cout << num << " ";
    }

    std::reverse(numbers.begin(), numbers.end());

    std::cout << "\nReversed vector: ";
    for (double num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main() {
//     std::vector<double> numbers = {1.1, 2.2, 3.3, 4.4, 5.5};

//     std::cout << "Original vector: ";
//     for (double num : numbers) {
//         std::cout << num << " ";
//     }

//     std::reverse(numbers.begin(), numbers.end());

//     std::cout << "\nReversed vector: ";
//     for (double num : numbers) {
//         std::cout << num << " ";
//     }

//     return 0;
// }
