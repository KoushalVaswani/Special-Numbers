#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int a = 0, b = 1;

    while (a < num) {
        int c = a + b;
        a = b;
        b = c;
    }

    if (a == num)
        cout << " Is a Fibonacci Number";
    else
        cout << "Not a Fibonacci Number";

    return 0;
}
