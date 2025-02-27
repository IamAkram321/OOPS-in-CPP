#include <iostream> // Include input-output stream library
using namespace std;

class Student
{
public:
    string name;    // Public member variable to store the student's name
    float *cgpaPtr; // Pointer to a float, will store the CGPA

    // Constructor to initialize name and allocate memory for CGPA
    Student(string name, float cgpa)
    {
        this->name = name;   // Assign the provided name to the object
        cgpaPtr = new float; // Dynamically allocate memory for CGPA
        *cgpaPtr = cgpa;     // Store the provided CGPA in the allocated memory
    }

    // Copy constructor to create a deep copy of the original object
    Student(Student &org)
    {
        this->name = org.name;   // Copy the name from the original object
        cgpaPtr = new float;     // Allocate new memory for CGPA
        *cgpaPtr = *org.cgpaPtr; // Copy the CGPA value from the original object
    }

    // Destructor to free the dynamically allocated memory
    ~Student()
    {
        delete cgpaPtr; // Free the memory allocated for CGPA
    }

    // Method to print the student's information
    void getInfo()
    {
        cout << "Name:" << name << endl;     // Print the student's name
        cout << "CGPA:" << *cgpaPtr << endl; // Print the student's CGPA
    }
};

int main()
{
    Student s1("Akram", 8.9); // Create a Student object s1 with name "Akram" and CGPA 8.9
    Student s2(s1);           // Create a Student object s2 by copying s1 (using copy constructor)
    s1.getInfo();             // Print s1's information
    *(s2.cgpaPtr) = 9.2;      // Modify s2's CGPA to 9.2 using pointer dereference
    s2.name = "Pradip";       // Modify s2's name to "Pradip"
    s2.getInfo();             // Print s2's information (modified)
    return 0;                 // End of program
}
