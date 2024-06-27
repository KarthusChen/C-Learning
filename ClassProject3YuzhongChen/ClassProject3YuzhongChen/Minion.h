#ifndef MINION_H
#define MINION_H

#include <string>
#include <iostream>

class Minion {
private:
    std::string name;
    float height;
    int eyes;
    int bananasOwned;
    static int minionCount;

public:
    Minion(std::string name, float height, int eyes, int bananasOwned);
    int getBananas() const;
    std::string getName() const;
    static void printMinionCount();

    bool operator>(const Minion& other) const;
    bool operator<(const Minion& other) const;
    Minion& operator++(); // Pre-increment
    Minion operator++(int); // Post-increment

    friend std::ostream& operator<<(std::ostream& out, const Minion& minion);
};

#endif // MINION_H

