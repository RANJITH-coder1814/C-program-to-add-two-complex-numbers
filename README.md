# C-program-to-add-two-complex-numbers
C++ 
# Complex Number Addition using Member Function (C++)

## 📌 Overview
This repository contains a C++ program that demonstrates how to add two complex numbers using a **member function** of a class.  
The program follows **Object-Oriented Programming (OOP)** principles and is suitable for beginners learning C++.

## 🧠 Concepts Used
- Classes and Objects
- Constructors
- Member Functions
- Encapsulation
- Passing Objects as Arguments

## 🧾 Program Explanation
- A `complex` class is defined with two private data members:
  - `real` → real part of the complex number
  - `img` → imaginary part of the complex number
- A constructor initializes the values
- The `add()` member function adds two complex numbers
- The `display()` function prints the complex number in proper format

## 💻 Source Code
```cpp
#include<iostream>
using namespace std;

class complex {
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    complex add(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    complex c1(10, 5), c2(3, 4), c3;

    c3 = c1.add(c2);

    cout << "First complex number is ";
    c1.display();

    cout << "Second complex number is ";
    c2.display();

    cout << "Sum is ";
    c3.display();
▶️ Output
First complex number is 10 + 5i
Second complex number is 3 + 4i
Sum is 13 + 9i

    return 0;
}
