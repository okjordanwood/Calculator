#include <iostream>
#include <cmath>

void displayMenu() {
    std::cout << "=====================\n";
    std::cout << "     Calculator        \n";
    std::cout << "=====================\n";
    std::cout << "Select an operation\n";
    std::cout << "1. Addition (+)\n";
    std::cout << "2. Subtraction (-)\n";
    std::cout << "3. Multiplication (*)\n";
    std::cout << "4. Division (/)\n";
    std::cout << "5. Modulus (%)\n";
    std::cout << "6. Exponentation (^)\n";
    std::cout << "7. Square Root (√)\n";
    std::cout << "8. Exit\n";
}

int main() {
    double num1, num2, result;
    char op;
    int choice;

    while (true) {
        // Display the menu
        displayMenu();

        // Prompt user to select an operation
        std::cout << "Enter your choice (1-8): ";
        std::cin >> choice;

        // Exit prompt if user chooses 5
        if (choice == 8) {
            std::cout << "Exiting the calculator. Goodbye" << std::endl;
            break;
        }

        // Check for valid choice
        if (choice < 1 || choice > 7) {
            std::cout << "Invalid choice option. Please select a number 1-8." << std::endl;
            continue;
        }

        // Prompt user for the numbers
        if (choice != 7) {
            std::cout << "Enter the 2 numbers you would like to perform an operation on. Enter them in the order you want operated (e.g., 5 * 3, 5 comes first).";
            std::cin >> num1 >> num2;
            std::cout << std::endl;
        } else {
            std::cout << "Enter the number you want to find the square root of: ";
            std::cin >> num1;
            std::cout << std::endl;
        }

        switch(choice) {
            case 1:
                op = '+';
                result = num1 + num2;
            break;
            case 2:
                op = '-';
                result = num1 - num2;
            break;
            case 3:
                op = '*';
                result = num1 * num2;
            break;
            case 4:
                op = '/';
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    std::cout << "Division by 0 is not allowed" << std::endl;
                    continue;
                }
            break;
            case 5:
                op = '%';
                result = static_cast<int>(num1) % static_cast<int>(num2);
            break;
            case 6:
                op = '^';
                result = std::pow(num1, num2);
                std::cout << num1 << "^" << num2 << " = " << result << std::endl;
            continue;
            case 7:
                op = '√';
                result = std::sqrt(num1);
                std::cout << "sqrt(" << num1 << ")" << " = " << result << std::endl;
            continue;
            default:
                std::cout << "Error: Invalid operator" << std::endl;
            continue;
        }

        // Display the result
        std::cout << num1 << " " << op << " " << num2 << " = " << result << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
