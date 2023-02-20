#include <iostream>
#include <string>
#include "../include/tictactoe.h"

//global const is here, can't be in header file
const char square[10] = {'o','1','2','3','4','5','6','7','8','9'};


//displays the board
void board(void)
{
    system("cls"); //clears the screen
    std::cout << "\n\n\tTic Tac Toe\n\n";

    std::cout << "Player 1 (X)  -  Player 2 (O)" << std::endl << std::endl;
    std::cout << std::endl;

    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << std::endl;

    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;

    std::cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << std::endl;

    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;

    std::cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << std::endl;

    std::cout << "     |     |     " << std::endl << std::endl;
}