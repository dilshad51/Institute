// Experiment 2
// WAP in C++ using a class named MyTest that demonstrates both a default constructor and a parameterized constructor.
#include <iostream>
using namespace std;

class MyTest {
private:
    int num;

public:
    // Default Constructor
    MyTest() {
        num = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    MyTest(int n) {
        num = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Display function
    void display() {
        cout << "Value of num = " << num << endl;
    }
};

int main() {
    // Calls default constructor
    MyTest obj1;
    obj1.display();

    // Calls parameterized constructor
    MyTest obj2(100);
    obj2.display();

    return 0;
}