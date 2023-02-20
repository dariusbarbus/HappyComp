#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "../include/mainMenu.h"
#include "../include/learning.h"
#include "../include/globalConst.h"
#include "../include/tictactoe.h"


void menuDisplay(void)
{
    int selection = 0;

    while (selection != 3)
    {
        std::cout << "Que te gustaria hacer hoy?\n" << std::endl;
        std::cout << "\t1. Aprender sobre programacion?\n" << std::endl; 
        std::cout << "\t2. Jugar\n" << std::endl; 
        std::cout << "\t3. Salir\n" << std::endl;
        std::cout << "---> ";


        std::cin >> selection;

        if (selection == 1 || selection == 2)
        {
            menuSelection(selection);
        }
        else
        {
            continue;
        }

    }
}

//NOT FINISHED
void menuSelection(int selection)
{
    if (selection == 1)
    {
        std::cout << "\t1. Aprender sobre variables: Numeros\n" << std::endl;
        std::cout << "\t2. Aprender sobre variables: Letras\n" << std::endl;
        std::cout << "---> ";


        int selection = 0;
        std::cin >> selection;


        switch (selection)
        {
        case 1:
            system("CLS");
            learning(learingOptions[0]);
            break;
        case 2:
            learning(learingOptions[1]);
            break;
        default:
            break;
        }
    }
    else
    {
        std::cout << "\t1. Jugar Michi\n" << std::endl;
        std::cout << "---> ";


        int selection = 0;
        std::cin >> selection;


        switch (selection)
        {
        case 1:
            system("CLS");
            mainGame();
            break;
        default:
            break;
        }
    }
    
}