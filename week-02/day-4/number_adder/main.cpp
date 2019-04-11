#include <iostream>

int numberAdder(int n);

int main() {

    //Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

    int n;

    std::cout<<"Give me a number! ";
    std::cin>>n;
    std::cout<<numberAdder(n);

    return 0;
}

int numberAdder(int n){
    if(n == 1){
        return 1;
    }else{
        return n + numberAdder(n-1);
    }
}
