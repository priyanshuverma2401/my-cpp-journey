#include <iostream>
#include <string>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "The number you entered is: " << number << std::endl;
    std::string name;
    std::cout << "Enter your name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
