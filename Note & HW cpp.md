Q.n.1. What is OOP? Explain any four features with examples. Differntiate OOP and POP.

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


Qn.2. What is the objective or use of "New" Keyword in oop.

Ans: In c++
