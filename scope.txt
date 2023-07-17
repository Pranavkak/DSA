#include <iostream>

class MyClass {
public:
    static int myStaticInt; // Declaration of the static variable

    static void myStaticFunction() {
        std::cout << "Inside myStaticFunction" << std::endl;
    }
};

int MyClass::myStaticInt = 10; // Definition of the static variable

int main() {
    MyClass::myStaticInt = 20; // Accessing the static variable using scope resolution
    MyClass::myStaticFunction(); // Accessing the static function using scope resolution

    std::cout << "MyClass::myStaticInt = " << MyClass::myStaticInt << std::endl;

    return 0;
}
