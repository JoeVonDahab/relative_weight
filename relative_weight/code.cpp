#include <iostream>
#include <limits>

int main() {
    char choice;
    do {
        double weight;
        std::cout << "\nEnter weight: ";
        while (!(std::cin >> weight)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid. Please enter a number: ";
        }

        int selection;
        std::cout << "1 Mercury, 2 Venus, 3 Mars, 4 Jupiter, 5 Saturn, 6 Uranus, 7 Neptune\nChoice: ";
        while (!(std::cin >> selection)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid. Enter (1-7): ";
        }

        double planet = 0;
        switch (selection) {
            case 1: planet = 0.382; break;
            case 2: planet = 0.913; break;
            case 3: planet = 0.384; break;
            case 4: planet = 2.345; break;
            case 5: planet = 1.066; break;
            case 6: planet = 0.927; break;
            case 7: planet = 1.19;  break;
            default: std::cout << "Invalid selection\n"; break;
        }

        std::cout << "Weight on planet: " << (weight * planet) << "\n\n";
        
        std::cout << "Calculate another? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}