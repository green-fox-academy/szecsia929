#include <iostream>

void swap(int *IntPtr1, int *IntPtr2);

int main() {
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    int *aPtr = &a;
    int *bPtr = &b;

    std::cout << "Before\n a=" << a << "\n b=" << b << std::endl;
    swap(aPtr, bPtr);
    std::cout << "After\n a=" << a << "\n b=" << b << std::endl;

    return 0;
}

void swap(int *IntPtr1, int *IntPtr2) {

    int buffer = *IntPtr1;

    *IntPtr1 = *IntPtr2;
    *IntPtr2 = buffer;

}