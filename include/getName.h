#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "globalConst.h"


void getName(void);
int checkStringForNumbers(std::string name);
void showLoadingAnim(void);
void showNameAnim(std::string name);