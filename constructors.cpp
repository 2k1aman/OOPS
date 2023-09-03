#include <iostream>
#include <cstring>

class Person {
public:
    int* ages;
    int size;

    // Parameterized constructor to allocate memory for 'ages' array
    Person(int sz) : size(sz) {
        ages = new int[size];
        for (int i = 0; i < size; ++i) {
            ages[i] = 0;
        }
    }

    // Copy constructor (deep copy)
    Person(const Person& other) : size(other.size) {
        ages = new int[size]; // Allocate new memory for the 'ages' array
        for (int i = 0; i < size; ++i) {
            ages[i] = other.ages[i]; // Copy elements one by one
        }
    }

    // Destructor to release memory
    ~Person() {
        delete[] ages;
    }

    void display() {
        std::cout << "Ages: ";
        for (int i = 0; i < size; ++i) {
            std::cout << ages[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Person person1(3); // Create person1 with an array of size 3

    // Initialize ages for person1
    person1.ages[0] = 25;
    person1.ages[1] = 30;
    person1.ages[2] = 35;

    // Deep copy using the copy constructor
    Person person2 = person1; // person2 has its own copy of the 'ages' array

    person1.display(); // Output: Ages: 25 30 35
    person2.display(); // Output: Ages: 25 30 35

    // Modify the age of person1
    person1.ages[1] = 40;

    person1.display(); // Output: Ages: 25 40 35
    person2.display(); // Output: Ages: 25 30 35 (deep copy ensures separate data)

    return 0;
}
