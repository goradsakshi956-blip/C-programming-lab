#include <iostream>
using namespace std;

class Number {
public:
    int x;

    Number(int a) {
        x = a;
    }

    Number operator-(Number n) {
        return Number(x - n.x);
    }

    void display() {
        cout << "Number = " << x;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number n1(a), n2(b);
    Number n3 = n1 - n2;

    n3.display();

    return 0;
}