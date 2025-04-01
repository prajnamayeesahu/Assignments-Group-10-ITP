#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sqrtNum = sqrt(num);
    if (sqrtNum * sqrtNum == num) {
        cout << num << " is a perfect square." << endl;
    } else {
        cout << num << " is not a perfect square." << endl;
    }
    return 0;
}