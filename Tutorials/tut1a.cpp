// Comment - single line (//)  & Multi Line (/*  */)

/* Variable - It is a container to hold data.

Scope - Scope of a variable is the region in code where the existance of variable is valid.
Based On Scope Variable can be classified into two types :-

1. Local Variable - Local variables are declared inside the braces of any function and can be accessed only from there.
2. Global Variable - Global variables are declared outside any function and can be accessed from anywhere.

Notes:- Local and  Global variable can have same name in C++.
*/

/*
Data Types -   Data types define the type of data a variable can hold.
               Data types in C++ are categorized in three groups:  1. Built-in.  2. User-defined  3. Derived

              // Built in Data types in C++
                int    =   integer numbers
                float  =   decimal numbers of low precision
                char   =   character  'a' , '@',  '&'
                double =   decimal numbers of high precision
                bool   =  true or false

             // User Defined Data Types in C++
             struct = Used to group different data types under one name.
             class  = similar to struct but supports data hiding, member functions and OOPs concepts.
             union  = Stores different datatype but only one at a time.
             typedef / using   = Creates a new name (alias) for an existing data type.
             enum = Set of named integer constant.
             template =  allow creation of generic data type.

             // Derived Data types in C++
             Arrays = a collection of elements of the same data type stored in contiguous memory
             Pointers =  Stores memory address of another variable
             References (&x) = an alias for an existing variable (nickmname).

*/

/* Basic Input and Output in C++
            cout <<    Insertion operator
            cin  >>    Extraction Operator
*/

#include <iostream>

/*This is a header file; there are two types of header files -
  1. System Header Files - It comes with the compiler.
  2. User Defined Header Files - It is written by the programmer.
  */

using namespace std;

/* It tells the  C++ Compiler :  "Use the standard library by default"
   It unlocks all standard C++ features without typing std:: everytime.
*/

// global variable
int num = 100;

// Entry point of the program
int main()

{

  int num;

  cin >> num;
  cout << ++num;

  // to call global variable we use (::) scope resolution operator
  cout << " --> " << ::num << endl;

  return 0;
}