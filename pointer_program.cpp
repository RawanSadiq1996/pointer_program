#include <iostream>

int main() {
    // Declare variables
    int int1, int2, int3;

    // Ask user for input
    std::cout << "Enter three integer values:\n";
    std::cin >> int1 >> int2 >> int3;

    // Dynamically allocate memory for the pointers
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Store the values in the dynamically allocated memory
    *ptr1 = int1;
    *ptr2 = int2;
    *ptr3 = int3;

    // Display the contents of the variables and pointers
    std::cout << "\nVariable values:\n";
    std::cout << "int1: " << int1 << ", int2: " << int2 << ", int3: " << int3 << "\n";

    std::cout << "\nPointer values:\n";
    std::cout << "*ptr1: " << *ptr1 << ", *ptr2: " << *ptr2 << ", *ptr3: " << *ptr3 << "\n";

    // Release the allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}




