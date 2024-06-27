#include <iostream>
#include <fstream>
#include <cmath>

// Function for calculating the power required for defense matrix
float matrix_power(int botsPower[], int botsCount, float bossPower) {
    float totalDamage = bossPower;
    for (int i = 0; i < botsCount; i++) {
        totalDamage += botsPower[i];
    }
    return totalDamage;
}

// Template function for calculating missile power
template <typename T>
T single_missile_power(T power) {
    if (power <= 15) {
        return 2 * power;
    }
    else {
        return 5 * power;
    }
}

// Overloaded function to load defense matrix
void load_dva(float& defenseMatrix, float matrixPowerRequired) {
    if (matrixPowerRequired > defenseMatrix) {
        defenseMatrix = matrixPowerRequired;
    }
}

// Overloaded function to load micro missiles
void load_dva(int& microMissiles, float missilePowerRequired) {
    int requiredMissiles = ceil(missilePowerRequired / 60.0);
    if (requiredMissiles > microMissiles) {
        microMissiles = requiredMissiles;
    }
}

int main() {
    std::ifstream infile("combat.txt");
    if (!infile) {
        std::cout << "Failed to open combat.txt!" << std::endl;
        return 1;
    }

    int botsCount;
    int botsPower[100];  // Assuming a max of 100 bots
    float bossPower;
    int microMissiles;
    float defenseMatrix;

    infile >> botsCount;
    for (int i = 0; i < botsCount; i++) {
        infile >> botsPower[i];
    }
    infile >> bossPower;
    infile >> microMissiles >> defenseMatrix;
    infile.close();

    float matrixPowerRequired = matrix_power(botsPower, botsCount, bossPower);

    float missilePowerRequired = 0.0;
    for (int i = 0; i < botsCount; i++) {
        missilePowerRequired += single_missile_power(botsPower[i]);
    }
    missilePowerRequired += single_missile_power(bossPower);

    // Load D.Va
    load_dva(defenseMatrix, matrixPowerRequired);
    load_dva(microMissiles, missilePowerRequired);

    // Generate report
    std::ofstream report("report.txt");
    if (!report) {
        std::cout << "Failed to write to report.txt!" << std::endl;
        return 1;
    }

    report << "D.Va's Combat Report" << std::endl;
    report << "Combat with " << botsCount << " enemy bots and one enemy boss with power " << bossPower << "." << std::endl;
    report << "Loaded mech with " << microMissiles << " micro missiles and the defense matrix with power " << defenseMatrix << "." << std::endl;
    report << "Ready for combat!" << std::endl;
    report.close();

    return 0;
}
