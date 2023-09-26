#include <iostream>

int main(){

char op;
double num_1;
double num_2;
double result;

std::cout <<"********** BASIC CALCULATOR **********\n";

std::cout << "Enter the arithmetic operator (+ - * /)";
std::cin >> op;

std::cout << "Enter the first number: ";
std::cin >> num_1;
std::cout << "Enter the second number: ";
std::cin >> num_2;

switch (op){
    case '+':
      result = num_1 + num_2;
      break;
    case '-':
      result = num_1 - num_2;
      break;
    case '*':
      result = num_1 * num_2;
      break;
    case '/':
      result = num_1 / num_2;
      break;
    default:
    std::cout << "How can you fk it up";
} 


std::cout << "your result is: " << result << '\n' ;



std::cout <<"***************************************";
return 0;
}