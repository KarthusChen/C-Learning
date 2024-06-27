#include "Minion.h"
#include <fstream>
#include <iostream>

int main() {
    std::ifstream file("minions.txt");
    if (!file) {
        std::cerr << "File cannot be opened!" << std::endl;
        return 1;
    }

    std::string name;
    float height;
    int eyes, bananasOwned;

    // Read minion information from the file
    file >> name >> height >> eyes >> bananasOwned;
    const Minion minion1(name, height, eyes, bananasOwned);

    file >> name >> height >> eyes >> bananasOwned;
    Minion minion2(name, height, eyes, bananasOwned);

    file >> name >> height >> eyes >> bananasOwned;
    Minion minion3(name, height, eyes, bananasOwned);

    file.close();

    // Compare heights
    if (minion1 > minion2) {
        std::cout << minion1.getName() << " is taller than " << minion2.getName() << std::endl;
    }
    if (minion2 < minion3) {
        std::cout << minion3.getName() << " is taller than " << minion2.getName() << std::endl;
    }
    std::cout << std::endl;

    // Increment bananas for minion2
    std::cout << minion2;
    std::cout << "Stuart getting bananas." << std::endl;
    std::cout << "The minion now has " << (++(++minion2)).getBananas() << " banana(s).\n" << std::endl;

    // Increment bananas for minion3
    std::cout << minion3;
    std::cout << "Bob getting bananas." << std::endl;
    std::cout << "Before getting bananas, the minion had " << minion3++.getBananas() << " banana(s).\n";
    std::cout << "After getting bananas, the minion has " << minion3.getBananas() << " banana(s).\n" << std::endl;

    // Print minion count
    Minion::printMinionCount();

    return 0;
}
