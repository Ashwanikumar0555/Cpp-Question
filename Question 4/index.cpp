#include <iostream>      
#include <vector>        
#include <algorithm>     

bool elementExists(const std::vector<int>& vec, int value) {
    return std::find(vec.begin(), vec.end(), value) != vec.end();
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    int x;
    std::cout << "Enter a number to search: ";
    std::cin >> x;  

    if (elementExists(numbers, x)) {
        std::cout << "✅ Element found in the vector!" << std::endl;
    } else {
        std::cout << "❌ Element not found in the vector." << std::endl;
    }

    return 0;  
}

// How to find an element in a std::vector in C++ using std::find 

#include <iostream>
#include <vector>
#include <algorithm>

bool elementExists(const std::vector<int>& vec, int value) {
    return std::find(vec.begin(), vec.end(), value) != vec.end();

}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    int x;
    std::cout << "Enter a number to search: ";  
    std::cin >> x;

    if (elementExists(numbers, x)) {
        std::cout << "✅ Element found in the vector!" << std::endl;
    } else {
        std::cout << "❌ Element not found in the vector." << std::endl;
    }
    return 0;
}



#include <iostream>      
#include <vector>        
#include <algorithm>     

bool elementExists(const std::vector<int>& vec, int value) {
    return std::find(vec.begin(), vec.end(), value) != vec.end();
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    int x;
    std::cout << "Enter a number to search: ";
    std::cin >> x;  

    if (elementExists(numbers, x)) {
        std::cout << "✅ Element found in the vector!" << std::endl;
    } else {
        std::cout << "❌ Element not found in the vector." << std::endl;
    }

    return 0;  
}

// How to find an element in a std::vector in C++ using std::find 

#include <iostream>
#include <vector>
#include <algorithm>

bool elementExists(const std::vector<int>& vec, int value) {
    return std::find(vec.begin(), vec.end(), value) != vec.end();

}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    int x;
    std::cout << "Enter a number to search: ";  
    std::cin >> x;

    if (elementExists(numbers, x)) {
        std::cout << "✅ Element found in the vector!" << std::endl;
    } else {
        std::cout << "❌ Element not found in the vector." << std::endl;
    }
    return 0;
}