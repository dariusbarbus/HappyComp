#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <string>
#include "../include/learning.h"

void learning(std::string choice)
{
    std::string strInput = "";
    char delimiter = '*';

    std::fstream fp;
    fp.open("learning.db", std::ios::in);

    //check if file is open
    if(!fp)
    {
        std::cout << "FIle could not be opened" << std::endl;
    }

    else
    {
        //reads the file
        while (std::getline(fp, strInput, delimiter))
        {
            if (strInput.find(choice, 0) != std::string::npos)
            {
                std::cout << strInput << std::endl;
                break;
            }
        }
    }
}


//while(!EOF) //std::getline(fp, strInput)
//{
//    if(strInput.find(choice, 0) != std::string::npos) 
//    {
//        std::cout << strInput << std::endl;
//    }
//}





