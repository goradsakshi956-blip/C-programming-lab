#include<iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle";
    }
};

int main() {
    Rectangle R;
    R.area();
    return 0;
}