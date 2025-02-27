OOPS in C++

1. Encapsulation
Encapsulation is about bundling data (variables) and the methods (functions) that operate on that data into a single unit, typically a class,
while restricting direct access to some of the data to protect it.

How it works in C++:
Use access specifiers like private, protected, and public to control access. Private data can only be accessed through public methods (getters and setters).

2. Inheritance
Inheritance allows a class (derived/child class) to inherit properties and behaviors (data and methods) from another class (base/parent class), promoting code reuse.

How it works in C++: Use the: symbol followed by an access specifier (public, private, or protected) to inherit.
Types: Single, Multiple, Multilevel, Hierarchical, Hybrid (C++ supports all via multiple inheritance).


3. Polymorphism
Polymorphism means "many forms" and allows objects of different classes to be treated as objects of a common base class. It’s about flexibility in method execution.

Types in C++:
Compile-time (Static) Polymorphism: Achieved via function overloading or operator overloading.
Run-time (Dynamic) Polymorphism: Achieved via virtual functions and overriding.

4. Abstraction
Abstraction hides complex implementation details and shows only the essential features to the user. It’s about simplifying interaction with objects.

How it works in C++: Use abstract classes (with pure virtual functions) or interfaces-like designs. You can also achieve it with encapsulation.
