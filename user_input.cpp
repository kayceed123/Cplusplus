#include <iostream>

/* cout << (insertion operator)
cin >> (extraction operator) */

int main(){

    int age;
    std::cout <<"How old are you?: ";
    std::cin >> age;

    std::string name;
    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Your name is " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    return 0;
}