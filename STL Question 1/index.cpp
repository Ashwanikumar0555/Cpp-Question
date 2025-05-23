#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    cout << "The vector elements are: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
} 