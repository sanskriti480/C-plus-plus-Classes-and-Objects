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

### Program 1
---

- Start the program.
- Define a class cuboid.
- Declare three public integer data members: height, width, length and initialize them with 2, 3, and 5 respectively.
- In main(), create an object c1 of class cuboid.
- Calculate the volume using the formula:
- 
  1.volume = height * width * length
  
  2.by accessing the object’s public attributes.
  
- Display the calculated volume.
- End the program.

---

### Program 2
---

- Start the program.
- Define a class cuboid.
- Declare three public integer data members: height, width, length and initialize them with 2, 3, and 5 respectively.
- Define a public member function volume() that:
- 
  1.Calculates the volume: v = height * width * length
  
  2.Returns v.
  
- In main(), create an object c1 of class cuboid.
- Call the volume() function using the object c1 and store the result in vol.
- Display vol.
- End the program.

---

### Program 3
---

- Start the program.
- Define a class cuboid.
- Declare three private integer data members: height, width, length and initialize them with 10, 4, 6 respectively.
- Define a public member function volume() that:
- 
  1.Calculates the volume: v = height * width * length
  
  2.Returns v.
  
- In main(), create an object c1 of class cuboid.
- Call the volume() function using c1 to access private attributes indirectly.
- Display the calculated volume.
- End the program.

---

### Program 4 
---

- Start the program.
- Define a class cuboid.
- Declare three public integer data members: height, width, length.
- Define a public member function Input() that:
- 
  1.Prompts the user to enter height, width, and length.
  
  2.Stores the user input in the respective data members.
  
- Define a public member function volume() that:
- 
  1.Calculates the volume: v = height * width * length
  
  2.Returns v.
  
- Define a public member function disp() that:
  
  1.Calls the volume() function
  
  2.Displays the volume of the cuboid.
  
- In main(), create an object c1 of class cuboid.
- Call c1.Input() to take input from the user.
- Call c1.disp() to display the calculated volume.
- End the program.

---

## Concepts Used  
---

- Class Declaration – Defining a blueprint for objects.
- Object Creation – Instantiating objects of a class.
- Data Members – Variables inside a class (public/private).
- Member Functions – Functions inside a class to perform operations.
- Access Specifiers – public and private to control access.
- Function Call – Calling member functions using objects.
- User Input – Using cin to take input for object attributes.
- Output – Using cout to display results.
- Encapsulation – Hiding private data and accessing via public methods.
- Volume Calculation Logic – Using multiplication formula for cuboid.

---

## Conclusion
---

- These programs demonstrate the fundamental concepts of classes and objects in C++.
- They show how data members and member functions work together to model real-world entities.
- The programs highlight encapsulation, using private and public access specifiers to control data access.
- Overall, they illustrate how C++ provides a structured and efficient way to perform operations on objects using class-based design.

---
