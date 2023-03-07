#include <iostream>
#include <string>

int main3() {
    std::string name;
    int lab, midterm, final;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your lab grade: ";
    std::cin >> lab;
    std::cout << "Enter your midterm grade: ";
    std::cin >> midterm;
    std::cout << "Enter your final grade: ";
    std::cin >> final;

    double lastScore = (lab * 25 + midterm * 35 + final * 40) / 100;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Lab: " << lab << std::endl;
    std::cout << "Midterm: " << midterm << std::endl;
    std::cout << "Final: " << final << std::endl;
    std::cout << "Last Score: " << lastScore << std::endl;

}
