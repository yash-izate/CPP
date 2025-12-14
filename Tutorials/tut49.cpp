/*
================================================================
Topic: Standard Template Library (STL) in C++

What is STL?
------------
STL (Standard Template Library) is a collection of generic
classes and functions provided by C++ to store and process data
efficiently.

Why STL is used?
----------------
1. Saves development time
2. Provides reusable and reliable code
3. Efficient and optimized performance
4. Type-safe (uses templates)
5. Reduces complexity of programs

Main Components of STL:
----------------------

1. Containers
   Used to store data.
   Types of containers:
   a) Sequence Containers:
      - vector
      - list
      - deque
   b) Associative Containers:
      - set
      - multiset
      - map
      - multimap
   c) Unordered Containers:
      - unordered_set
      - unordered_map

2. Algorithms
   Used to perform operations on data stored in containers.
   Examples:
   - sort()
   - find()
   - reverse()
   - count()
   - binary_search()

3. Iterators
   Used to access elements of containers.
   They work like pointers.
   Common iterators:
   - begin()
   - end()

STL Header Files:
-----------------
<vector>     → vector container
<list>       → list container
<map>        → map container
<set>        → set container
<algorithm>  → STL algorithms
<iterator>   → iterator support

Advantages of STL:
------------------
1. Code reusability
2. Faster program development
3. Better performance
4. Easy to use and understand

================================================================
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Creating a vector container
    vector<int> v;

    // Inserting elements into vector
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);

    // Sorting the vector using STL algorithm
    sort(v.begin(), v.end());

    // Displaying elements using iterator
    cout << "Sorted Elements: ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
