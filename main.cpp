#include <iostream>

int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int multiplyNumbers(int num1, int num2){
    int multResult = num1 * num2;
    return multResult;
}

int main(){

    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl; // 13
    std::cout << "Second number : " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // 20

    sum = addNumbers(25, 7);
    std::cout << "Sum : " << sum << std::endl; // 32

    sum = addNumbers(30, 54);
    std::cout << "Sum : " << sum << std::endl; // 84

    std::cout << "Sum : " << addNumbers(3,42) << std::endl;

    sum = multiplyNumbers(5, 10);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << multiplyNumbers(25, 6) << std::endl;


    return 0;   
}