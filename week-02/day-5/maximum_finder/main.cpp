#include <iostream>

int largest(int array[], int size);

int main() {

    int array[5] = {22, 634, 120, 988, 10};
    std::cout << largest(array, 5) << std::endl;

    return 0;
}

int largest(int array[], int size) {
    if(size == 0){
        return array[size];
    }else if(array[0]>array[size]){
        return largest(array, size-1);
    }else{
        return largest(&array[size-(size-1)], size-1);
    }
}