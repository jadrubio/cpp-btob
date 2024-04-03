#include <iostream>

int main() {
    int num;
    std::cout << "Hello!  Welcome to FizzBuzz.  Please enter a number between 1 and 100.  "
                 "I will print out all the numbers but(!) I will say 'Fizz' if the number is divisible by 3, "
                 "'Buzz' if it is divisible by 5 and 'FizzBuzz' if it is divisible by both 3 and 5!"<< std::endl;

    std::cout << "Lets get started! Please enter a number between 1-100: ";
    std::cin >> num;

    for (int i=0; i <= num; i++) {
        if (i% 15 == 0) {
            std::cout << "FizzBuzz" <<std::endl;
        }else if (i % 3 == 0) {
            std::cout << "Fizz"<< std::endl;
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout<<i<<std::endl;
        }
    }

    return 0;
}
