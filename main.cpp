#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "levels.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main() {
    int currentLevel = 1;

    while (true) {
        bool levelComplete = false;

        switch (currentLevel) {
            case 1:
                levelComplete = lvl0();
                break;
            case 2:
                levelComplete = lvl1();
                break;
            case 3:
                levelComplete = lvl2();
                break;
            case 4:
                levelComplete = lvl3();
                break;
            case 5:
                levelComplete = lvl4();
            case 6:
                std::cout<<"Hai completato la beta!"<<std::endl;
                exit(0);
        }

        if (levelComplete) {
            currentLevel++;
        }
        else
        	exit(0);
    }
    return 0;
}