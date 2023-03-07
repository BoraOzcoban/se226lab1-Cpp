#include <iostream>
#include <string>

int main1() {
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "." << std::endl;

    std::string id;
    std::cout << "What is your student ID? ";
    std::getline(std::cin, id);

    std::cout << "Your ID is " << id << "." << std::endl;

    return 0;
}
