#include <iostream>
#include <string>
#include "../include/tictactoe.h"

//using a global variable that WILL be modified while playing
char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };


//runs the Main Game
void mainGame(void)
{
    play();
    checkWin();
    board();
}



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



/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/

int checkWin(void)
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
        && square[4] != '4' && square[5] != '5' && square[6] != '6'
        && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}



//main game
void play(void)
{
    int player = 1;
    int i = 0;
    int choice = 0;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        std::cout << "Player " << player << ", entra un numero:  ";
        std::cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            std::cout << "Jugada invalida ";

            player--;
            std::cin.ignore();
            std::cin.get();
        }
        i = checkWin();

        player++;
    } while (i == -1);
    board();
    if (i == 1)

        std::cout << "==>\aPlayer " << --player << " Gano ";
    else
        std::cout << "==>\aEmpate";

    std::cin.ignore();
    std::cin.get();
}