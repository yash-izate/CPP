/*
Question:
You are given a C++ program with three classes: Base, Derived, and Child, demonstrating 
the use of different access specifiers (private, protected, and public) in inheritance.

Program Details:

The Base class contains:
    - A private integer variable 'a', a protected integer variable 'b', and a public integer variable 'c'.
    - A public method 'showBase()' that displays the values of 'a', 'b', and 'c'.
    
The Derived class inherits from Base and contains a method 'showDerived()' that displays the value of 'b' and 'c'.

The Child class inherits from Derived and contains a method 'showChild()' that displays the value of 'b' and 'c'.

Your Task:
1. What will be the output when the 'showBase()', 'showDerived()', and 'showChild()' methods are called in the main() function?
*/