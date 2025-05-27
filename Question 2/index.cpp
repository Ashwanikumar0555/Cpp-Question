#include <iostream>
#include <vector>
#include <string>

void printVector(const std::vector<std::string>& vec) {
    for (const std::string& str : vec) {
        std::cout << str << std::endl;
    }
}

int main() {
    std::vector<std::string> fruits = {"Apple", "Banana", "Mango", "Orange"};

    std::cout << "Fruits in the vector:" << std::endl;
    printVector(fruits);

    return 0;
}

//////////////
