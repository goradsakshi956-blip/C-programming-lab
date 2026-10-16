#include <iostream>
using namespace std;

class Number {
public:
    int x;

    Number(int a) {
        x = a;
    }

    void operator++() {
        ++x;
    }

    void display() {
        cout << "Number = " << x;
    }
};

int main() {
    int y;
    cout << "Enter a number: ";
    cin >> y;

    Number n1(y);
    ++n1;
    n1.display();

    return 0;
}