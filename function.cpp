#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate sum
int calculateSum(const vector<int>& numbers) {
    int sum = 0;

    for (int num : numbers) {
        sum += num;
    }

    return sum;
}

// Function to find maximum element
int findMaximum(const vector<int>& numbers) {
    return *max_element(numbers.begin(), numbers.end());
}

int main() {

    vector<int> numbers = {10, 25, 15, 40, 30};

    cout << "Numbers: ";

    for (int num : numbers) {
        cout << num << " ";
    }

    cout << "\n";

    cout << "Sum = " << calculateSum(numbers) << endl;
    cout << "Maximum = " << findMaximum(numbers) << endl;

    return 0;
}