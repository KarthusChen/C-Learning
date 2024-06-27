#include "Minion.h"

int Minion::minionCount = 0;

Minion::Minion(std::string name, float height, int eyes, int bananasOwned)
    : name(name), height(height), eyes(eyes), bananasOwned(bananasOwned) {
    ++minionCount;
}

int Minion::getBananas() const {
    return bananasOwned;
}

std::string Minion::getName() const {
    return name;
}

void Minion::printMinionCount() {
    std::cout << minionCount << " minions created." << std::endl;
}

bool Minion::operator>(const Minion& other) const {
    return this->height > other.height;
}

bool Minion::operator<(const Minion& other) const {
    return this->height < other.height;
}

Minion& Minion::operator++() {
    ++bananasOwned;
    return *this;
}

Minion Minion::operator++(int) {
    Minion temp = *this;
    ++(*this);
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Minion& minion) {
    out << "The minion " << minion.name << " is " << minion.height
        << " inches tall, has " << minion.eyes << " eye(s), and owns "
        << minion.bananasOwned << " banana(s)." << std::endl;
    return out;
}
