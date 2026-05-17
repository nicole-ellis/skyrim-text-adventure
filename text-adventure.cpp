// Skyrim Text Adventure Program

#include <iostream>
#include <string>
#include <list>

#ifdef _WIN32
#include <windows.h>
#endif

int main () {

// To allow ASCII art to be viewed in terminal
#ifdef _WIN32
SetConsoleOutputCP(CP_UTF8);
#endif

  // Declaring variables
  bool magePath = false;
  bool warriorPath = false;
  bool thiefPath = false;

  std::string answer1;
  std::string warriorAnswer2;
  std::string mageAnswer2;
  std::string thiefAnswer2;

  // Opening statement
  std::cout << R"(
  _                                     _             __  _              _  _                             _        
 | |_   ___  _  _      _  _  ___  _  _ ( )_ _  ___   / _|(_) _ _   __ _ | || | _  _   __ _ __ __ __ __ _ | |__ ___ 
 | ' \ / -_)| || | _  | || |/ _ \| || ||/| '_|/ -_) |  _|| || ' \ / _` || || || || | / _` |\ V  V // _` || / // -_)
 |_||_|\___| \_, |( )  \_, |\___/ \_,_|  |_|  \___| |_|  |_||_||_|\__,_||_||_| \_, | \__,_| \_/\_/ \__,_||_\_\\___|
             |__/ |/   |__/                                                    |__/                                 
  )" << "\n";
  std::cout << R"(
                                        ⠀⠀⠀⡄⠀⠀⠀⠀⠀⠀⣠⠀⠀⢀⠀⠀⢠⠀⠀⠀
                                        ⠀⠀⢸⣧⠀⠀⠀⠀⢠⣾⣇⣀⣴⣿⠀⠀⣼⡇⠀⠀
                                        ⠀⠀⣾⣿⣧⠀⠀⢀⣼⣿⣿⣿⣿⣿⠀⣼⣿⣷⠀⠀
                                        ⠀⢸⣿⣿⣿⡀⠀⠸⠿⠿⣿⣿⣿⡟⢀⣿⣿⣿⡇⠀
                                        ⠀⣾⣿⣿⣿⣿⡀⠀⢀⣼⣿⣿⡿⠁⣿⣿⣿⣿⣷⠀
                                        ⢸⣿⣿⣿⣿⠁⣠⣤⣾⣿⣿⣯⣤⣄⠙⣿⣿⣿⣿⡇
                                        ⣿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣿
                                        ⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏
                                        ⠀⠘⢿⣿⣿⣿⠛⠻⢿⣿⣿⣿⠹⠟⣿⣿⣿⣿⣿⠀
                                        ⠀⠀⠘⢿⣿⣿⣦⡄⢸⣿⣿⣿⡇⠠⣿⣿⣿⣿⡇⠀
                                        ⠀⠀⠀⠘⢿⣿⣿⠀⣸⣿⣿⣿⠇⠀⠙⣿⣿⣿⠁⠀
                                        ⠀⠀⠀⠀⠘⣿⠃⢰⣿⣿⣿⡇⠀⠀⠀⠈⢻⡇⠀⠀
                                        ⠀⠀⠀⠀⠀⠈⠀⠈⢿⣿⣿⣿⣶⡶⠂⠀⠀⠁⠀⠀
                                        ⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀
  )" << "\n\n\n";

  std::cout << "It's time for you to choose a class.\n";
  std::cout << "Would you like to be a Warrior, Mage or Thief.\n";

  
  
    // Checks which class the player chose and changes pathway to true

    while (true) 
    {
        // Stores player class

        std::cin >> answer1;

        if (answer1 == "Warrior" || answer1 == "warrior") {
            warriorPath = true;
            std::cout << "You have chosen to become a Warrior!\n";
            break;
        }
        else if (answer1 == "Mage" || answer1 =="mage") {
            magePath = true;
            std::cout << "You have chosen to become a Mage!\n";
            break;
        }
        else if (answer1 == "Thief" || answer1 == "thief") {
            thiefPath = true;
            std::cout << "You have chosen to become a Thief!\n";
            break;
        }
        else {
            std::cout << "Invalid input! Try again.\n";
        }
    }

    // Warrior pathway here
    while (warriorPath)
    {
        std::cout << "You've come across a goblin, do you challenge it to a duel?\n";
        std::cin >> warriorAnswer2;

        if (warriorAnswer2 == "Yes" || warriorAnswer2 == "yes") {
            std::cout << "You beat the goblin!\n";
            std::cout << "You're now a warrior and a victor!\n\n";
            break;
        }
        else if (warriorAnswer2 == "No" || warriorAnswer2 == "no") {
            std::cout << "You fled from the goblin?\n";
            std::cout << "Doesn't seem like you're cut out to be a warrior.\n\n";
            break;
        }
        else {
            std::cout << "Invalid input!\n";
        }
    }

    // Mage pathway here
    while (magePath) {
        std::cout << "You've come across a glowing orb, do you try absorb its power?\n";
        std::cin >> mageAnswer2;

        if (mageAnswer2 == "Yes" || mageAnswer2 == "yes") {
            std::cout << "You absorbed the orb's powers!\n";
            std::cout << "You're now a skilled mage!\n\n";
            break;
        }
        else if (mageAnswer2 == "No" || mageAnswer2 == "no") {
            std::cout << "You didn't try absorb the orb's power?\n";
            std::cout << "Doesn't seem like you're cut out to be a mage.\n\n";
            break;
        }
        else {
            std::cout << "Invalid input!\n";
        }
    }

    // Thief pathway here
    while (thiefPath) {
        std::cout << "You've come across a chest, do you open it?\n";
        std::cin >> thiefAnswer2;

        if (thiefAnswer2 == "Yes" || thiefAnswer2 == "yes") {
            std::cout << "You opened the chest and found gold!\n";
            std::cout << "You're now a rich thief!\n\n";
            break;
        }
        else if (thiefAnswer2 == "No" || thiefAnswer2 == "no") {
            std::cout << "You didn't try open the chest? As a thief?\n";
            std::cout << "Doesn't seem like you're cut out to be a thief.\n\n";
            break;
        }
        else {
            std::cout << "Invalid input!\n";
        }
    }

    std::cout << "You finished the adventure tree! Bye :)\n";

    return 0;
} 

