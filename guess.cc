#include <iostream>
#include <string>

//Computer guesses a Number between 0 and 100.
//Writes a Number into Console and asks, if Number to be guessed is higher or lower than printed Number


int guess_new_number(int &lower_bound, int &upper_bound) {

    if (lower_bound == upper_bound - 1) {
        std::cout << "\nNo other number possible... Resetting boundvalues." << std::endl;
        lower_bound = 0;
        upper_bound = 100;
    }

    std::cout << "\nlower bound: " << lower_bound << ", upper bound: " << upper_bound << std::endl;

    return (upper_bound + lower_bound) / 2;
}

int main() {
    int lower_bound = 0;
    int upper_bound = 100;
    int guessed_number;

    char user_answer;

    std::cout << "Good day, dear Person!! Think of a Number between 0 and 100. i try to guess it and you can tell me, if i was right." << std::endl;

    while (user_answer != 'e') {

        guessed_number = guess_new_number(lower_bound, upper_bound);

        std::cout << "\nmy guessed Number is: " << guessed_number << "\nPlease input your answer here: h (higher), l (lower), s (success), e (exit): ";

        std::cin >> user_answer;

        switch (user_answer)
        {
            case 'l':
                std::cout << "Calculate lower number..." << std::endl;
                upper_bound = guessed_number;
                break;
            case 'h':
                std::cout << "Calculate higher number..." << std::endl;
                lower_bound = guessed_number;
                break;
            case 's':
                std::cout << "Yaaaayyyy!!!! :D \nStarting from the beginning." << std::endl;
                lower_bound = 0;
                upper_bound = 100;
                break;
            case 'e':
                std::cout << "ending application... " << std::endl;
                break;
            default:
                std::cout << "unrecognized Input, try Again..." << std::endl;
                break;
        }
    }
    return 0;
}