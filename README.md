# C++ Experiment 11: Classes and Objects in C++
---

## Aim  
---

- To understand the concept of classes and objects in C++.
- To demonstrate how classes are used to model real-world entities.
- To implement object-oriented programming (OOP) principles using classes and objects.

---

## Tool Used  
VS Code or Programiz Online C++ Compiler.

---

## Objectives  
---

- To define and create classes in C++.
- To understand the role of data members and member functions.
- To implement object creation and initialization.
- To study encapsulation, abstraction, and reusability through classes.
- To differentiate between class definition and object instantiation.

---

## Theory

---

### Why C++ is More Efficient than C
- C++ supports Object-Oriented Programming (OOP), which improves code reusability and maintainability.
- Built-in string class makes string manipulation easier than C-style strings.
- Rich Standard Template Library (STL) reduces coding time.
- Better type safety compared to C.
- Function overloading and templates provide flexibility.
- Memory management tools like RAII help prevent leaks.
- Direct support for function overloading and inline functions improves efficiency.

---

### Classes  
---

- A class is a user-defined data type in C++.
- It acts as a blueprint for creating objects.
- A class groups data members (variables) and member functions (methods) into a single unit.
- Syntax starts with the keyword class followed by the class name.
- A class contains:
1.Data members → Variables that hold data.
2.Member functions → Functions that define operations on data.

---

### Access Specifiers in Classes
---

- They define how the members of a class can be accessed:
- Public → Accessible from outside the class.
- Private → Accessible only within the class (default).
- Protected → Accessible in the class and its derived classes.

---

### Encapsulation 
---

- Bundling data and methods together inside a class.
- Prevents unauthorized access to data.
- Achieved using private data members and public methods.

---

### Constructors 
---

- A special member function of a class, automatically called when an object is created.
- Used to initialize data members.
- Has the same name as the class.
- Types:
  1.Default constructor
  2.Parameterized constructor
  3.Copy constructor

---

### Destructors
---

- A special function with a ~ (tilde) before the class name.
- Automatically called when an object goes out of scope.
- Used to release resources (like memory, files).

---

### Advantages of using classes
---

- Reusability → Write once, use many times.
- Modularity → Breaks complex problems into smaller parts.
- Security → Data hiding through encapsulation.
- Abstraction → Only necessary details are visible to the user.
- Flexibility → Easy to modify and extend programs.

---

### Objects
---

- An object is a real-world entity that has state and behavior.
- In C++, an object is an instance of a class.
- Objects are created using the class blueprint

---

### Relationship Between Class and Object
---

- Class → Blueprint, defines the structure and behavior.
- Object → Actual entity created using the class.
- Analogy:
1.Class = “Car template”
2.Object = “My Toyota Corolla”

---

### Properties of Objects
---

- State (Attributes) → Represented by data members of the class.
- Behavior (Methods) → Represented by member functions of the class.
- Identity → Each object has a unique identity (stored at a unique memory location).

---

### Constructors and Objects
---

- Constructors initialize object data automatically when created.
- Default constructor → Called automatically if no parameters are passed.
- Parameterized constructor → Initializes object with specific values.
- Copy constructor → Creates a new object as a copy of an existing object.

---

### Destructors and Objects
---

- Destructor is automatically called when an object goes out of scope.
- Frees resources allocated to the object (memory, file handles, etc.).

---

### Advantages of using objects
---

- Code Reusability → Same class can create multiple objects.
- Better Data Security → Data members can be private and accessed only via functions.
- Easier Maintenance → Changes in class definition automatically affect all objects.
- Real-World Modeling → Objects closely model real-world entities.

---


## Algorithms

### Program 1 Increment of pointers
---

- Start
- Declare variables of different data types:

a as int

b as float

c as double

d as bool
- Declare pointers for each variable and store their addresses:

aptr = &a

bptr = &b

cptr = &c

dptr = &d
- For each pointer:
a. Print the address before increment.
b. Increment the pointer by 1 (ptr++).
c. Print the address after increment.
- End.

---

### Program 2 Difference / Addition
---

- Start
- Declare two integer variables x = 100 and y = 50.
- Declare an integer pointer xptr and assign it the address of x.
- Declare another integer pointer yptr and assign it the address of y.
- Dereference both pointers and calculate the sum:

sum = *xptr + *yptr.

- Print the result → "Sum is: sum".
- Dereference both pointers and calculate the difference:
difference = *xptr - *yptr.
- Print the result → "Difference is: difference".
- End 
---

### Program 3 Traversing array using pointer
---

- Start
- Declare an integer array arr[5] = {2, 4, 6, 8, 10}.
- Initialize a pointer ptr to point to the last element of the array (arr + 4).
- Use a for loop that runs from index i = 4 down to 0:
  
  Print the value pointed to by ptr (*ptr).
  
  Decrement the pointer (ptr--) so it moves to the previous element.
- After the loop ends, all elements of the array are printed in reverse order.
- End

---

### Program 4 Printing string using pointers
---

- Start
- Declare a character array str[] = "Hello World".
- Initialize a pointer ptr to point to the first character of the string (ptr = str).
- Begin a while loop that runs until the character pointed to by ptr is the null terminator ('\0').
- 
Print the character at *ptr.

Increment the pointer (ptr++) to move to the next character.
- When *ptr == '\0', exit the loop.
- End

---

## Concepts Used  
---

- Pointer declaration and initialization.
- Dereferencing (* operator).
- Address-of operator (&).
- Pointer arithmetic (increment and decrement).
- Array traversal using pointers.
- Character array traversal.
- Type-dependent pointer incrementation.
- Null pointers and void pointers.
- Memory representation of pointers.

---

## Conclusion
---

- In this experiment, we learned the use of pointers to access and manipulate data using memory addresses. 
- We performed arithmetic operations, array reversal, and string traversal using pointers. 
- This shows that pointers provide efficient memory access, flexibility, and are essential for advanced concepts like dynamic memory allocation.

---
