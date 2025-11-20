#include <iostream>

using namespace std;

class A {
    public:
    A() {cout << "A" << endl;}
    virtual void hi() {
        cout << "hi" << endl;
    }
};

class B : public A {

    public:
    B() {cout << "B" << endl;}
    void hi() {
        cout << "hi from B" << endl;
    }
};

int main() {

	// I am going to start adding code for my work

    B* x = new B[2];
    B* y = &x[0];

    y->hi();

}