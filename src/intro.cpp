#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "../include/intro.h"


void introAnim(void)
{
    std::string answer = "";
    int count = 0;


    while(answer != yes || answer != yesM || answer != noM || answer != no)
    {
        std::cout << "Hola, soy tu nuevo sistema de computadora avanzada enviada desde un iglu en canada" << std::endl;
        std::cout << "Quieres ver mi casa? Si/No" << std::endl;
        std::cout << "---> ";

        std::cin >> answer;

        if(answer == yes || answer == yesM || answer == noM || answer == no)
        {
            if(answer == yes || answer == yesM)
            {
                std::cout << "Aqui esta" << std::endl;
                std::cout << " " << std::endl;
                std::cout << R"(
                                 ___
                            ,.-"',..'"-.
                          ,' `.,' : '`'.`.
                         ;`-. " `. ``:` `.'.
                        ..   '`-.:...-:-` ' .
                        ; `.;   .      :   ' .
                        |. . ```:---...,;,, .|
                        | `:--..:    /   \ ' |
                         `.;    :```' "./##\:'
                           ``-..:___|  |####|
                                     `.|##"'	
                )" << std::endl; 
                break;    
            }
            else
            {
                std::cout << "No me importa, aqui esta" << std::endl;
                std::cout << " " << std::endl;
                std::cout << R"(
                                 ___
                            ,.-"',..'"-.
                          ,' `.,' : '`'.`.
                         ;`-. " `. ``:` `.'.
                        ..   '`-.:...-:-` ' .
                        ; `.;   .      :   ' .
                        |. . ```:---...,;,, .|
                        | `:--..:    /   \ ' |
                         `.;    :```' "./##\:'
                           ``-..:___|  |####|
                                     `.|##"'	
                )" << std::endl;
                break;
            }
        }
        else   
        {
            std::cout << "Escribe una opcion correcta" << std::endl;
            count++;
            if(count > counter)
            {
                break;
            }
        }
    }

    if(count > counter)
    {
        while(true)
        {
            std::cout << "Te atrape y ahora no puedes hacer nada jejejeje" << std::endl;
        }
    }
}







