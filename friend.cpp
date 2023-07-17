#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Friend function declaration
    friend Complex addComplex(const Complex& c1, const Complex& c2);

    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

// Friend function definition
Complex addComplex(const Complex& c1, const Complex& c2) {
    double realSum = c1.real + c2.real;
    double imaginarySum = c1.imaginary + c2.imaginary;
    return Complex(realSum, imaginarySum);
}

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.2, 0.8);
    Complex sum = addComplex(c1, c2);

    std::cout << "c1 = ";
    c1.display();
    std::cout << "c2 = ";
    c2.display();
    std::cout << "Sum = ";
    sum.display();

    return 0;
}
