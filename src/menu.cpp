#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "../include/mainMenu.h"
#include "../include/learning.h"
#include "../include/globalConst.h"

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
        menuSelection(selection);
    }
}

//NOT FINISHED
void menuSelection(int selection)
{
    if (selection == 1)
    {
        std::cout << "\t1. Aprender sobre variables: Numeros" << std::endl;
        std::cout << "\t2. Aprender sobre variables: Letras" << std::endl;
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
}