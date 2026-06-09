**Object Oriented Programming in C++ (BIT154CO)**

**Chapter.1:**

**Q.n.1. What is OOP? Explain any four features with examples. Differntiate OOP and POP.**

Object-Oriented Programming (OOP) is a programming paradigm that organizes software design around objects rather than functions and procedures. An object contains data (attributes) and methods or functions that operate on the data.

Examples of OOP languages C++, python.
Four Features of OOP with Examples:
1. Encapsulation
 
   Encapsulation is the process of binding data and methods into a single unit (class) and restricting direct access to data.
   
   Example:
```cpp
   class Student {
   private:
    int age;

   public:
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};
  ```
Benefit: Protects data from unauthorized access.

2. Inheritance

Inheritance allows a new class to acquire properties and methods of an existing class.

Example:
```cpp
   class Animal {
   public:
    void sound() {
        cout << "Animal Sound";
        }
   };

   class Dog : public Animal {
   };
```
Here, Dog inherits the sound() method from Animal.

Benefit: Promotes code reusability.

3. Polymorphism

Polymorphism means one interface, many forms. The same function can perform different tasks.

Example:
```cpp
   class Shape {
   public:
      void draw() {
          cout << "Drawing Shape";
      }
   };

   class Circle : public Shape {
   public:
      void draw() {
          cout << "Drawing Circle";
      }
   };
```
4. Abstraction

Abstraction means showing only essential information and hiding implementation details.

Example:
```cpp
class ATM {
public:
    void withdrawMoney();
};
```

**Difference Between OOP and POP**

| Basic | OOP (Object-Oriented Programming) | POP(Procedure-Oriented programming) |
| --- | --- | --- |
| Approach | Object-Based | Function-Based  |
| Focus | Data and Objects | Functions and Procedures |
| Data Security | High due to encapsulation | Less Secure |
| Reusability | Supports inheritance and reusability | Limited reusability |
| Program Design | Bottom-up approach | Top-down approach |
| Data Access | Data can be hidden using access specifiers | Data is generally global and accessible |
| Example: | C++, Python | C |

**Chapter.2:**

**Qn.1. What is the objective or use of "New" Keyword in oop.**

Ans: In c++, The new keyword is used to dynamically allocate memory to variables or objects during program execution. The memory is allocated from the heap memory, and  new returns the address of the allocated memory.

Syntax
```cpp
pointer = new data_type;
```

Example: Dynamic Memory Allocation
```cpp
#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 50;

    cout << *ptr;

    delete ptr;   // Free memory
    return 0;
}
```

Example: Creating an Object
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Student Object Created";
    }
};

int main() {
    Student *s = new Student();
    s->display();

    delete s;     // Free memory
    return 0;
}
```

**Uses of new Keyword**

1.Allocates memory dynamically at runtime.

2.Creates objects dynamically.

3.Returns the address of the allocated memory.

4.Allows memory size to be determined during execution.

5.Works with classes and objects in OOP.

**Qn.2.Explain reference variables and scope resolution operator with example. Write a program using setw, set precision, and setfill.**

Ans: **Reference Variable in C++**

A reference variable is an alias (another name) for an existing variable. Once a reference is initialized, it refers to the same memory location as the original variable.

Syntax:
```cpp
data_type &reference_name = variable_name;
```
Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &y = x;   // y is a reference to x

    y = 20;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
```
Advantages:

1.Avoids copying of data.

2.Makes function parameter passing more efficient.

3.Provides an alternative name for a variable.


**Scope Resolution Operator (::):**

The scope resolution operator (::) is used to define the scope of a variable or function. It helps access global variables when local variables have the same name and define member functions outside a class.

Example: Accessing Global Variable
```cpp
#include <iostream>
using namespace std;

int x = 100;   // Global variable

int main() {
    int x = 50;    // Local variable

    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;

    return 0;
}
```
Output:
```
Local x = 50
Global x = 100
```
Uses of Scope Resolution Operator:

1.Access global variables.

2.Define class member functions outside the class.

3.Access static class members.

**Manipulators in C++**

Manipulators are special functions used to format input and output streams in C++. They make the output more readable and organized.

Manipulators are defined in the <iomanip> header file.

Common Manipulators in C++
1. setw():

Sets the width of the output field.

Syntax:
```cpp
setw(width)
```
Example:
```cpp
cout << setw(10) << 100;
```
Output:
```
       100
```
2. setfill()

Fills empty spaces with a specified character.

Syntax:
```cpp
setprecision(n)
```
Example:
```cpp
cout << setfill('*') << setw(10) << 100;
```
Output:
```
*******100
```
3. setprecision()

Sets the number of digits after the decimal point.

Syntax:
```cpp
setfill(character)
```
Example:
```cpp
cout << fixed << setprecision(2) << 12.3456;
```
Output:
```
12.35
```
**C++ Program Using setw(), setprecision(), and setfill()**
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 100;
    double value = 123.45678;

    cout << "Using setw() and setfill():" << endl;
    cout << setfill('*') << setw(10) << num << endl;

    cout << "\nUsing setprecision():" << endl;
    cout << fixed << setprecision(2) << value << endl;

    return 0;
}
```
Output:
```
Using setw() and setfill():
*******100

Using setprecision():
123.46
```


























