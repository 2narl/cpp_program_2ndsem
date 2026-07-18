**Object Oriented Programming in C++ (BIT154CO)**

**Chapter.1:**
--
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

| Basic          | OOP (Object-Oriented Programming)          | POP(Procedure-Oriented programming)     |
| -------------- | ------------------------------------------ | --------------------------------------- |
| Approach       | Object-Based                               | Function-Based                          |
| Focus          | Data and Objects                           | Functions and Procedures                |
| Data Security  | High due to encapsulation                  | Less Secure                             |
| Reusability    | Supports inheritance and reusability       | Limited reusability                     |
| Program Design | Bottom-up approach                         | Top-down approach                       |
| Data Access    | Data can be hidden using access specifiers | Data is generally global and accessible |
| Example:       | C++, Python                                | C                                       |

**Chapter.2:**
--
**Qn.1. What is the objective or use of "New" Keyword in oop.**

Ans: In c++, The new keyword is used to dynamically allocate memory to variables or objects during program execution. The memory is allocated from the heap memory, and new returns the address of the allocated memory.

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

Manipulators are defined in the given header file.
Syntax:

```
 <iomanip>
```

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
setfill(character)
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
setprecision(n)
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

Advantages of Manipulators:

1.Improve output formatting.

2.Make data presentation clear and attractive.

3.Control width, precision, alignment, and fill characters.

4.Useful in reports, tables, and financial calculations.

**Chapter.3**
--
**Qn.1 What are inline function? Write a C++ program demonstrating function overloading and default arguments.**

Ans-**Inline Function in C++:**

An inline function is a function whose code is expanded at the point where it is called, instead of making a normal function call. It is declared using the inline keyword.

Syntax:

```cpp
inline return_type function_name(parameters)
{
    // function body
}
```

Example:

```cpp
#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

int main()
{
    cout << square(5);
    return 0;
}
```

Advantages:

1.Reduces function call overhead.

2.Improves execution speed for small functions.

3.Makes code more efficient.

**Function Overloading in C++**

Function overloading is a feature in which multiple functions can have the same name but different parameter lists.

Example:Program Demonstrating Function Overloading.

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Demo d;

    cout << "Sum of two numbers = " << d.add(10, 20) << endl;
    cout << "Sum of three numbers = " << d.add(10, 20, 30) << endl;

    return 0;
}
```

Output:

```
Sum of two numbers = 30
Sum of three numbers = 60
```

**Default Arguments in C++**

Default arguments are values assigned to function parameters that are automatically used when no argument is provided during the function call.

Example:Program Demonstrating Default Arguments.

```cpp
#include <iostream>
using namespace std;

int add(int a, int b = 10)
{
    return a + b;
}

int main()
{
    cout << "add(5) = " << add(5) << endl;
    cout << "add(5, 20) = " << add(5, 20) << endl;

    return 0;
}
```

Output:

```
add(5) = 15
add(5, 20) = 25
```

Example: Combined Program (Function Overloading and Default Arguments):

```cpp
#include <iostream>
using namespace std;

class Test {
public:
    int sum(int a, int b = 10) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Test t;

    cout << "sum(5) = " << t.sum(5) << endl;
    cout << "sum(5, 15) = " << t.sum(5, 15) << endl;
    cout << "sum(5, 10, 15) = " << t.sum(5, 10, 15) << endl;

    return 0;
}
```

Output:

```
sum(5) = 15
sum(5, 15) = 20
sum(5, 10, 15) = 30
```

---

#### Q.2 What is a Friend Function? Differentiate it from a Member Function. Write a C++ program to add two Distance objects using a Friend Function.

A **friend function** is a function that is **not a member of a class**, but it is allowed to access the **private** and **protected** data members of that class.

A friend function is **declared inside the class** using the `friend` keyword and **defined outside** the class.

#### Syntax

```cpp
class ClassName
{
private:
    int data;

public:
    friend void functionName(ClassName);
};
```

**Features of a Friend Function**

- It is not a member of the class.
- It can access **private** and **protected** data members.
- It is declared using the **`friend`** keyword.
- It is called like a **normal function** (not through an object).

---

#### Difference Between Friend Function and Member Function

| Friend Function | Member Function |
|-----------------|-----------------|
| Not a member of the class. | Member of the class. |
| Declared using the `friend` keyword. | Declared normally inside the class. |
| Can access private and protected members. | Can access private and protected members. |
| Called like a normal function. | Called using an object (`obj.function()`). |
| Does not use the `this` pointer. | Uses the `this` pointer implicitly. |

---

**C++ Program: Add Two Distance Objects Using a Friend Function**

```cpp
#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;
    int centimeter;

public:
    // Constructor
    Distance(int m = 0, int cm = 0)
    {
        meter = m;
        centimeter = cm;
    }

    // Friend function declaration
    friend Distance addDistance(Distance d1, Distance d2);

    // Display function
    void display()
    {
        cout << meter << " meter " << centimeter << " centimeter";
    }
};

// Friend function definition
Distance addDistance(Distance d1, Distance d2)
{
    Distance temp;

    temp.meter = d1.meter + d2.meter;
    temp.centimeter = d1.centimeter + d2.centimeter;

    // Convert 100 cm into 1 meter
    if (temp.centimeter >= 100)
    {
        temp.meter += temp.centimeter / 100;
        temp.centimeter = temp.centimeter % 100;
    }

    return temp;
}

int main()
{
    Distance d1(5, 80);
    Distance d2(3, 40);

    Distance result;

    result = addDistance(d1, d2);

    cout << "First Distance : ";
    d1.display();

    cout << "\nSecond Distance: ";
    d2.display();

    cout << "\nTotal Distance : ";
    result.display();

    return 0;
}
```

---

**Output**

```text
First Distance : 5 meter 80 centimeter
Second Distance: 3 meter 40 centimeter
Total Distance : 9 meter 20 centimeter
```

---

**Explanation**

- The `Distance` class contains two private data members: `meter` and `centimeter`.
- The function `addDistance()` is declared as a **friend function**, allowing it to access the private members of both `Distance` objects.
- It adds the meter and centimeter values separately.
- If the total centimeters become **100 or more**, they are converted into meters.
- The function returns a new `Distance` object containing the final summed distance.

---

**Chapter 6**
--
#### Qn.1 Explain All Types of Constructors in C++ with Programs. What is a Copy Constructor and When is it Invoked?


A **constructor** is a special member function of a class that is automatically called when an object is created. It is mainly used to initialize the data members of the class.

**Characteristics of a Constructor**
- Constructor name is the same as the class name.
- It has no return type (not even `void`).
- It is called automatically when an object is created.
- Constructors can be overloaded.

---

**Types of Constructors in C++**

#### 1. Default Constructor

A **default constructor** is a constructor that takes no arguments. It initializes objects with default values.

**Program**

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    Student() {
        id = 101;
    }

    void display() {
        cout << "ID = " << id << endl;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}
```

Output:

```
ID = 101
```

**Advantages:**
- Automatically initializes objects.
- Reduces uninitialized data.

---

#### 2. Parameterized Constructor

A **parameterized constructor** accepts arguments to initialize an object with user-defined values.

**Program**

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    Student(int x) {
        id = x;
    }

    void display() {
        cout << "ID = " << id << endl;
    }
};

int main() {
    Student s(205);
    s.display();

    return 0;
}
```

Output:

```
ID = 205
```

**Advantages:**
- Initializes objects with different values.
- Makes programs more flexible.

---

#### 3. Copy Constructor

A **copy constructor** creates a new object by copying the contents of an existing object.

**Syntax**

```cpp
ClassName(const ClassName &obj);
```

**Program**

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    Student(int x) {
        id = x;
    }

    Student(const Student &s) {
        id = s.id;
    }

    void display() {
        cout << "ID = " << id << endl;
    }
};

int main() {
    Student s1(100);
    Student s2 = s1;

    s1.display();
    s2.display();

    return 0;
}
```

Output:

```
ID = 100
ID = 100
```

**Advantages:**
- Creates duplicate objects.
- Useful for deep copying dynamic memory.

---

#### 4. Dynamic Constructor

A **dynamic constructor** allocates memory dynamically using the `new` operator.

**Program**

```cpp
#include <iostream>
using namespace std;

class Number {
private:
    int *ptr;

public:
    Number(int value) {
        ptr = new int;
        *ptr = value;
    }

    void display() {
        cout << "Value = " << *ptr << endl;
    }

    ~Number() {
        delete ptr;
    }
};

int main() {
    Number n(50);
    n.display();

    return 0;
}
```

Output:

```
Value = 50
```

**Advantages**
- Efficient memory management.
- Useful for dynamic data structures.

---

#### 5. Constructor Overloading

Constructor overloading means defining multiple constructors with different parameter lists.

**Program**

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    Student() {
        id = 0;
    }

    Student(int x) {
        id = x;
    }

    void display() {
        cout << "ID = " << id << endl;
    }
};

int main() {
    Student s1;
    Student s2(200);

    s1.display();
    s2.display();

    return 0;
}
```

Output:

```
ID = 0
ID = 200
```

---


**What is a Copy Constructor?**

A **copy constructor** is a special constructor that initializes a new object using another object of the same class.

#### Syntax

```cpp
ClassName(const ClassName &obj);
```

***Example***

```cpp
Student s1(10);
Student s2 = s1;
```

Here, the copy constructor copies the contents of `s1` into `s2`.

---

#### When is a Copy Constructor Invoked?

A copy constructor is invoked in the following situations:

**When an object is initialized from another object**

```cpp
Student s1(10);
Student s2 = s1;
```

---

**When an object is passed by value to a function**

```cpp
void display(Student s) {
}

int main() {
    Student s1(10);
    display(s1);
}
```

---

**When an object is returned by value from a function**

```cpp
Student create() {
    Student s(20);
    return s;
}
```

---

**Difference Between Default, Parameterized and Copy Constructor**

| Constructor | Arguments | Purpose |
|------------|-----------|---------|
| Default Constructor | No | Initializes object with default values |
| Parameterized Constructor | Yes | Initializes object with user-defined values |
| Copy Constructor | Existing object | Creates a copy of another object |

---

