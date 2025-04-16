/*
 * Question:
 * 
 * You are given two base classes: `Person` and `Employee`. 
 * 
 * - The `Person` class has the following attributes and methods:
 *   - Attributes: `name` (string) and `age` (int).
 *   - Method: `displayInfo()` to display the name and age of the person.
 *
 * - The `Employee` class has the following attributes and methods:
 *   - Attribute: `salary` (double).
 *   - Method: `displaySalary()` to display the salary of the employee.
 *
 * You need to create a derived class `Manager` that inherits from both `Person` and `Employee`.
 * 
 * The `Manager` class should have:
 * - A method `showManagerDetails()` that will display the manager's name, age, salary, and position (Manager).
 *
 * The goal is to write the code to:
 * - Create the `Person`, `Employee`, and `Manager` classes.
 * - Use the `Manager` class to display the manager's details.
 *
 * Expected Output for the Manager object (after setting values for name, age, and salary):
 * -----------------------------------
 * Position: Manager
 * Name: John Doe
 * Age: 35
 * Salary: 80000
 * -----------------------------------
 */






 
 #include<iostream>
 using namespace std;
 
 // Base class 1: Person
 class Person {
 public:
     // Attributes of the Person class
     string name;
     int age;
 
     // Method to display information about the person
     void displayInfo() {
         cout << "Name: " << name << endl;   // Displays name
         cout << "Age: " << age << endl;    // Displays age
     }
 };
 
 // Base class 2: Employee
 class Employee {
 public:
     // Attribute of the Employee class
     double salary;
 
     // Method to display the salary of the employee
     void displaySalary() {
         cout << "Salary: " << salary << endl;   // Displays salary
     }
 };
 
 // Derived class: Manager (inherits from both Person and Employee)
 class Manager : public Person, public Employee {
 public:
     // Method to show manager's details
     void showManagerDetails() {
         cout << "Position: Manager" << endl;  // Display position
         displayInfo();    // Calling Person's method to display name and age
         displaySalary();  // Calling Employee's method to display salary
     }
 };
 
 int main() {
     // Creating an object of the Manager class
     Manager mgr;
     
     // Initializing attributes for the manager object
     mgr.name = "John Doe";       // Set manager's name
     mgr.age = 35;                // Set manager's age
     mgr.salary = 80000;          // Set manager's salary
 
     // Calling the method to display the manager's details
     mgr.showManagerDetails();  // Displaying Manager's details
 
     return 0;
 }
 