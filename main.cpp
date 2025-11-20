#include <iostream>

using namespace std;

class A {
    public:
    A() {cout << "A" << endl;}
};

class B : public A {

    public:
    B() {cout << "B" << endl;}
};

int main() {

    B* x = new B[2];
    B* y = &x[0];

}