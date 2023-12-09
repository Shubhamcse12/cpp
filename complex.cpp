#include<iostream>
using namespace std;

// Class to represent complex numbers
class complex {
public:
    int real; // Real part of the complex number
    int img;  // Imaginary part of the complex number

    // Parameterized constructor to initialize real and imaginary parts
    complex(int x = 0, int y = 0) : real(x), img(y) {}

    // Overloaded '+' operator to add two complex numbers
    complex operator+ (const complex &c) {
        complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main() {
    // Create two complex numbers
    complex c1(1, 2);
    complex c2(1, 3);

    // Add two complex numbers using the overloaded '+' operator
    complex c3 = c1 + c2;

    // Display the result
    cout << "Sum: " << c3.real << " + " << c3.img << "i" << endl;

    return 0;
}
