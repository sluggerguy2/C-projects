#include <iostream>

int main() {
    
    int score = 0;
    std::cout << "Score initialized at " << score;
    std::cout << ": (int score = 0).\n";

    score = 4 + 2; //score now equals 6
    std::cout << "Score is now " << score << ": (score = 4 + 2).\n";


    score = 4 - 2; //score now equals 2
    std::cout << "Score is now " << score << ": (score = 4 - 2).\n";

    score = 2 * 6; //score now equals 12
    std::cout << "Score is now " << score << ": (score = 2 * 6).\n";

    score = 6 / 2; //score now equals 3
    std::cout << "Score is now " << score << ": (score = 6 / 2).\n";

    score = 14 % 3; // score is now 2 
    std::cout << "Score is now " << score << ": ";
    std::cout << "(score = 14 % 3).\n";
    std::cout << "3 goes into 14 four times with a remainder of 2.\n";

    return 0;
}