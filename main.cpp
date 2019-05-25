// ctrl + alt + l for style

/**@file main.cpp
 * @brief Entire media player production program (for now)
 *  A demonstration of functions and files.
 *
 * @author Karan patel
 * @bug

 */


#include <iostream>
#include <fstream> // Stream class to both read and write from/to files.
#include <string>

//Prototype
int showMenu();

void getChoice();

bool continueProgram = true;


int prodNum = 1;
int audioSerialNum = 1;
int audioMobileSerialNum = 1;
int visualSerialNum = 1;
int visualMobileSerialNum = 1;


int main() {

    //Week 1: Procedural Project 1: repl.it
    std::cout << "Production Line Tracker" << std::endl << std::endl;
    showMenu();

    //Week 2: Procedural Project 2a
    std::cout << "Production Line Tracker" << std::endl;
    std::cout << "" << std::endl;

    do {
        showMenu();
        getChoice();
    } while (continueProgram);


    std::cout << "Enter the Manufacturer\n";
    std::string manufacturer;
    std::cin >> manufacturer;

    std::cout << "Enter the Product Name\n";
    std::string prodName;
    std::cin >> prodName;

    std::cout << "Enter the item type\n";
    std::cout << "1. Audio\n" <<
              "2. Visual\n" <<
              "3. AudioMobile\n" <<
              "4. VisualMobile\n";
    int itemTypeChoice;
    std::cin >> itemTypeChoice;

    std::string itemTypeCode;

    if (itemTypeChoice == 1) {
        itemTypeCode = "MM";
    } else if (itemTypeChoice == 2) {
        itemTypeCode = "VI";
    } else if (itemTypeChoice == 3) {
        itemTypeCode = "AM";
    } else if (itemTypeChoice == 4) {
        itemTypeCode = "VM";
    } else {
        std::cout << "Not Valid: Try Again" << std::endl;
        std::cin >> itemTypeChoice;
    }


    std::cout << "Enter the number of items that were produced\n";
    int numProduced;
    std::cin >> numProduced;

    std::string manufacturerCode = manufacturer.substr(0, 3);

    while (prodNum <= numProduced) {

        if (itemTypeCode == "MM") {
            std::cout << "Production Number: " << prodNum << " Serial Number: " << manufacturerCode << itemTypeCode
                      << "00000" << audioSerialNum << std::endl;
            prodNum++;
            audioSerialNum++;
        } else if (itemTypeCode == "VI") {
            std::cout << "Production Number: " << prodNum << " Serial Number: " << manufacturerCode << itemTypeCode
                      << "00000" << visualSerialNum << std::endl;
            prodNum++;
            visualSerialNum++;
        } else if (itemTypeCode == "AM") {
            std::cout << "Production Number: " << prodNum << " Serial Number: " << manufacturerCode << itemTypeCode
                      << "00000" << audioMobileSerialNum << std::endl;
            prodNum++;
            audioMobileSerialNum++;
        } else if (itemTypeCode == "VM") {
            std::cout << "Production Number: " << prodNum << " Serial Number: " << manufacturerCode << itemTypeCode
                      << "00000" << visualMobileSerialNum << std::endl;
            prodNum++;
            visualMobileSerialNum++;
        }
    }


    return 0;

}

int showMenu() {

    std::cout << "1. Produce Items" << std::endl;
    std::cout << "2. Add Employee Account" << std::endl;
    std::cout << "3. Add Music Player" << std::endl;
    std::cout << "4. Add Movie Player" << std::endl;
    std::cout << "5. Display Production Statistics" << std::endl;
    std::cout << "6. Exit" << std::endl;

    std::cout << "" << std::endl;
    return 0;

}

void getChoice() {
    int choice;
    std::cin >> choice;
    switch (choice) {
        case 1 :
            std::cout << "Produce Items Stub" << std::endl; //After selecting 1 from the the main menu - showMenu()
            break;
        case 2 :
            std::cout << "Add Employee Account Stub" << std::endl; //Similar as case 1 to case 5
            break;
        case 3 :
            std::cout << "Add Music Player Stub" << std::endl;
            break;
        case 4 :
            std::cout << "Add Movie Player Stub" << std::endl;
            break;
        case 5 :
            std::cout << "Display Production Statistics Stub" << std::endl;
            break;
        case 6:
            continueProgram = false; //When the user enters 6, the do-while ends nad returns to main menu
            break;
        default:
            std::cout << "Not a valid selection" << std::endl;
    }
}


