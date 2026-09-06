#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Create a vector
    vector<int> numbers;

    // Add elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Display vector elements
    cout << "Vector elements: ";

    for (int x : numbers) {
        cout << x << " ";
    }

    // Display size
    cout << "\nSize of vector: " << numbers.size();

    // Remove last element
    numbers.pop_back();

    // Display vector after removing element
    cout << "\nAfter pop_back(): ";

    for (int x : numbers) {
        cout << x << " ";
    }

    return 0;
}