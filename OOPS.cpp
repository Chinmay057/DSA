#include <iostream>
#include <string>

// Use the entire std namespace
using namespace std;

// Define a simple class named 'Student'
class Student {
public:
    // Data members (attributes)
    string name;
    int roll_number;
    double marks;

    // Member functions (methods) to interact with the data
    void display_details() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
    }

    void set_details(string student_name, int student_roll_number, double student_marks) {
        name = student_name;
        roll_number = student_roll_number;
        marks = student_marks;
    }
};

int main() {
    // Create an object of the 'Student' class
    Student student1;

    // Set the data for the object using a member function
    student1.set_details("Alice", 101, 85.5);

    // Access and display the data using a member function
    student1.display_details();

    return 0;
}