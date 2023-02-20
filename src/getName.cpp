#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "../include/getName.h"


void getName(void)
{
    std::string answer = "";

    int i = 0;
    int returnValue = 0;

    while(true)
    {
        std::cout << "Ahora si, comenzemos" << std::endl;
        std::cout << "Cual es tu nombre?" << std::endl;
        std::cout << "---> ";

        std::cin >> answer;

        returnValue = checkStringForNumbers(answer);
        if(returnValue == error)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    showLoadingAnim();
    showNameAnim(answer);
}



int checkStringForNumbers(std::string name)
{
    for(int i = 0; i < name.length(); i++)
    {
        if(isdigit(name[i]))
        {
            std::cout << "No valen numeros, solo letras" << std::endl;
            return error;
        }
    }
    return 1;
}



void showLoadingAnim(void)
{
    int i = 0;
    std::string alphaShufle = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

    std::cout << "Procesando..." << std::endl;

    std::cout << "-\b" << std::flush;

    for (int i = 0; i < counter; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
        std::cout << "\\\b" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
        std::cout << "|\b" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
        std::cout << "/\b" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
        std::cout << "-\b" << std::flush;
    }
}


void showNameAnim(std::string name)
{
    std::string alphaShufle = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    int size = name.length();

    std::cout << "Hola: ";

    for (int j = 0; j < size; j++)
    {
        for(int i = 0; i < 52; i++)
        {
            std::cout << alphaShufle[i] << "\b" << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(25));
            if(name[j] == alphaShufle[i])
            {
                std::cout << name[j]; 
                break;
            }
        }   
    }
}