#include <iostream>
using namespace std;

class Base {
protected:
    int protectedData;

public:
    void setData(int value) {
        protectedData = value;
    }
};

class Derived : public Base {
public:
    void displayData() {
        cout << "Accessing protected member in Derived class: " << protectedData << endl;
    }
};

class SubDerived : public Derived {
public:
    void modifyAndShow() {
        protectedData += 10;
        cout << "Modified protected member in SubDerived class: " << protectedData << endl;
    }
};

int main() {
    Derived d1;
    SubDerived s1;

    d1.setData(50);
    d1.displayData();

    s1.setData(100);
    s1.modifyAndShow();

    return 0;
}

