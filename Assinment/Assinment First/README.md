# **Lab Work of Assingment First**

**Unit 2: C++ Programming Concepts**
--

Lab 1 (Arrays & Pointers): Write a program that takes n integers from the user and stores them in a dynamically allocated array. Then, use a function that accepts a
pointer to the array and its size to reverse the order of the elements in the array. Finally, print the reversed array.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/7973ddbdeea876fab5fcb358f3944346c41e3917/Assinment/Assinment%20First/reverse_dynamic_array.cpp">
<button>Click to View</button>
</a>

---

Lab 2 (new & delete): Write a program that defines a Student struct with name and rollNumber. In main(), dynamically allocate an array of Student objects
based on a user-provided number. Prompt the user to enter the data for each student and then display it. Ensure proper deallocation of memory.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/f2a1a166edef3a8e9f84365192a84898cf1f95db/Assinment/Assinment%20First/lab2_Student_dynamic_arr.cpp">
<button>Click to View</button>
</a>

---

Lab 3 (const & enum): Define an enum class called Color with values RED, GREEN, and BLUE. Write a class Shape that has a private Color member. Provide
a constructor to initialize it and a const member function getColor() that returns the color. In main(), create a Shape object and display its color.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/297ea89ed1f24e42f18b9a10b01dcc135a882bbb/Assinment/Assinment%20First/Lab3_ShapeColor.cpp">
<button>Click to View</button>
</a>


---

**Unit 3: Functions Used in C++**
--

Lab 4 (Function Overloading & Default Arguments): Create a class MathOperations. Overload a function multiply to handle: 
a. Two integers. 
b. Three integers. 
c. A double and an integer (where the integer is a multiplier). 
Add default arguments to one of the functions (e.g., for the three-integer version, set the third integer to 1 by default). Demonstrate all functions in main().
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/a7b69a2d9e146ac18272cc69a8b9407b42b308e1/Assinment/Assinment%20First/Lab4_MultiplyOverloading.cpp">
<button>Click to View</button>
</a>

---

Lab 5 (Inline Function): Write a program that uses an inline function isEven(int) to check if a number is even. In main(), ask the user for a number and use the inline
function to print whether it is even or odd. Also, create a non-inline function that performs the same task (but is not inlined). Discuss the potential performance
difference by comparing a function call in a loop (e.g., 1 million iterations) with a macro and the inline function.*
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/2b61dd6f5b0816e7b95e0bb3bd8e11a067e3bf52/Assinment/Assinment%20First/Lab5_IsEven_Inline.cpp">
<button>Click to View</button>
</a>

---

**Unit 4: Classes and Objects**
--
Lab 6 (Class & Access Specifiers): Design a class BankAccount with private data members: accountNumber, holderName, balance. Provide public member  functions:
a. deposit(double amount).
b. withdraw(double amount) (should not allow withdrawal if balance is
insufficient).
c. display() to print account details.
Write a program to create a BankAccount object, perform a few transactions, and display the final balance.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/6d9c9ba3fc85f1a59a306e6e384f3bfeac310301/Assinment/Assinment%20First/Lab6_BankAccount_Class.cpp">
<button>Click to View</button>
</a>

---
Lab 7 (Nesting of Member Functions): Create a class Temperature with private data members for celsius. Implement a public member function display() that, in
turn, calls a private member function toFahrenheit() to convert and display the temperature in Fahrenheit. The display() function should show both Celsius and
Fahrenheit.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/9cdd8594e157c346da31b4d45b3a6073a0eb9b60/Assinment/Assinment%20First/Lab7_Temperature_NestingFunctions.cpp">
<button>Click to View</button>
</a>

---

Lab 8 (Array of Objects & this pointer): Create a class Employee with data members id, name, and salary. Write a member function setData() that uses the 
this pointer to assign values. In main(), create an array of Employee objects, take input for 5 employees, and then write a function (or a member function) to find 
and display the employee with the highest salary.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/9ce646bef56036afff222811931009d9922ef594/Assinment/Assinment%20First/Lab8_Employee_ArrayOfObjects_ThisPointer.cpp">
<button>Click to View</button>
</a>

---

Lab 9 (Passing Objects by Reference): Define a class Complex with integer data
members real and imag. Write a global function addComplex(const Complex
&c1, const Complex &c2) that takes two Complex objects by const reference
and returns a Complex object. In main(), create two Complex numbers, add
them, and display the result.*/
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/e52d2a057e4762567bb715ae333f2d6599699d10/Assinment/Assinment%20First/Lab_9_Passing_Objects_By_Reference.cpp">
<button>Click to View</button>
</a>

---

Lab 10 (Returning Objects): For the Complex class created above, write a
member function add(const Complex &c) that returns a new Complex object
(the sum). Demonstrate chaining of operations, e.g., c1.add(c2).add(c3).
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/e52d2a057e4762567bb715ae333f2d6599699d10/Assinment/Assinment%20First/Lab_10_Returning_Objects.cpp">
<button>Click to View</button>
</a>

---

Lab 11 (Static Data Member & Function): Write a class Product with name and
serialNumber. Use a static data member counter to automatically generate a
unique serial number for each Product object created. Write a static member
function getTotalProducts() that returns the total number of Product objects
created. Test your class in main() by creating multiple objects and displaying
their serial numbers and the total count.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/92763a4e1c7907c538a4a29f5ce49886ef783e9c/Assinment/Assinment%20First/Lab_11_Static_Data_Member_And_Function.cpp">
<button>Click to View</button>
</a>

---

Lab 12 (Friend Function): Create two classes Manager and Worker. Both have
private data members for salary. Write a friend function compareSalary(const
Manager &m, const Worker &w) that compares their salaries and prints who
earns more (or if they are equal).
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/4b0683924438bef826277c4ecc5f30defe94ae61/Assinment/Assinment%20First/lab12_friend_function_compare_salary.cpp">
<button>Click to View</button>
</a>

---

Lab 13 (Friend Class): Design a class DataStorage with private data members
(int secret). Create a friend class DataProcessor that can access and modify the
secret value in DataStorage. Demonstrate this by creating objects of both
classes and having DataProcessor manipulate the data.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/4b0683924438bef826277c4ecc5f30defe94ae61/Assinment/Assinment%20First/lab13_friend_class_data_storage.cpp">
<button>Click to View</button>
</a>

---

Lab 14 (String Class - Basics): Create a class MyString that has a char* data
member to hold a C-style string. Implement the following member functions:
a. A constructor that takes a const char* and allocates memory.
b. A destructor to free the memory.
c. A member function display() to print the string.
d. Do not implement the copy constructor or assignment operator yet. In
main(), create a MyString object and pass it by value to a function. You
should observe the program crash or double free. Explain why this
happens. (This is a lead-in to the next lab).
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/4b0683924438bef826277c4ecc5f30defe94ae61/Assinment/Assinment%20First/lab14_mystring_basics.cpp">
<button>Click to View</button>
</a>

---

Lab 15 (Copy Constructor & Deep Copy): Extend the previous MyString class.
Add a proper copy constructor that performs a deep copy. Also, add a function
append(const MyString &other) that concatenates another MyString object to
the current one (remember to reallocate memory). Write a main() function to
demonstrate these functionalities and the deep copy.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/10cf0423d8d721db255e009205cd0cb974bc3eb8/Assinment/Assinment%20First/lab15_mystring_deep_copy.cpp">
<button>Click to View</button>
</a>

---

Lab 16 (Friend Function for Operator Overloading):
   Create a Complex class. Declare a friend function
   operator+(const Complex &c1, const Complex &c2)
   to overload the + operator. In main(), demonstrate
   that c1 + c2 works.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/10cf0423d8d721db255e009205cd0cb974bc3eb8/Assinment/Assinment%20First/lab16_complex_friend_operator_overloading.cpp">
<button>Click to View</button>
</a>

---

Lab 17 (Returning Objects by Value vs Reference): Write a class Counter with an
int value. Implement member functions increment() (returns by value),
incrementByRef() (returns by reference), and incrementByPtr() (returns by
pointer). In main(), demonstrate the difference in chaining:
c.increment().increment() vs c.incrementByRef().incrementByRef(). Explain why
one works and the other doesn't.
<a href="https://github.com/2narl/cpp_program_2ndsem/blob/10cf0423d8d721db255e009205cd0cb974bc3eb8/Assinment/Assinment%20First/lab17_return_by_value_reference_pointer.cpp">
<button>Click to View</button>
</a>

---

<a href="">
<button>Click to View</button>
</a>

---

<a href="">
<button>Click to View</button>
</a>

---

<a href="">
<button>Click to View</button>
</a>

---


<a href="">
<button>Click to View</button>
</a>

---


<a href="">
<button>Click to View</button>
</a>

---


<a href="">
<button>Click to View</button>
</a>

---
