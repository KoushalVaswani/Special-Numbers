#include <iostream>
using namespace std;
int main() {
    int num, temp, digits = 0;
    cout << "Enter a number: ";
    cin >> num;

    long long cube = 1LL * num * num * num;

    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int power = 1;
    for (int i = 0; i < digits; i++) {
        power *= 10;
    }

    if (cube % power == num) {
        cout << "Is a Trimorphic Number";
    } else {
        cout << "Not a Trimorphic Number";
    }

    return 0;
}
