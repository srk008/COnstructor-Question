#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize attributes
    Person(const string& n, int a) : name(n), age(a) {}

    // Function to display information of the person
    void showInfo() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Teacher : public Person {
private:
    int salary;

public:
    // Constructor to initialize attributes
    Teacher(const string& n, int a, int s) : Person(n, a), salary(s) {}
	

    // Function to display information of the teacher
    void showInfo() const {
        Person::showInfo(); // Call the base class showInfo function
        cout << "Salary: " << salary << " INR" << endl;
    }
};

class Student : public Person {
private:
    int totalMarks;

public:
    // Constructor to initialize attributes
    Student(const string& n, int a, int tm) : Person(n, a), totalMarks(tm) {}

    // Function to display information of the student
    void showInfo() const {
        Person::showInfo(); // Call the base class showInfo function
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    // Create objects of Student class
    Student student1("John", 20, 85);
    Student student2("Alice", 21, 92);
    Student student3("Bob", 19, 78);

    // Create objects of Teacher class
    Teacher teacher1("Mr. Smith", 35, 50000);
    Teacher teacher2("Mrs. Johnson", 40, 60000);

    // Display information of students
    cout << "Student Information:\n";
    student1.showInfo();
    cout << endl;
    student2.showInfo();
    cout << endl;
    student3.showInfo();
    cout << endl;

    // Display information of teachers
    cout << "Teacher Information:\n";
    teacher1.showInfo();
    cout << endl;
    teacher2.showInfo();

    return 0;
}

