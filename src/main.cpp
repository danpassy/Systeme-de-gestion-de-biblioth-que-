#include <iostream>

void printMessage(){
    std::cout << "=========================================================\n";
    std::cout << "       Welcome to your Virtual Bibliotheque!\n";
    std::cout << "=========================================================\n";
    std::cout << "1. Add a book to the Library\n";
    std::cout << "2. Add a user\n";
    std::cout << "3. Borrow a book\n";
    std::cout << "4. Give Back a book\n";
    std::cout << "5. Display all the books\n";
    std::cout << "6. Display all the Users\n";
    std::cout << "0. quit\n";
    std::cout << "Enter Your Choice: ";

}

int main(int, char**){
    int choice;
    do {
        printMessage();
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Add a book to the Library
                break;
            case 2:
                // Add a user
                break;
            case 3:
                // Borrow a book
                break;
            case 4:
                // Give Back a book
                break;
            case 5:
                // Display all the books
                break;
            case 6:
                // Display all the Users
                break;
            case 0:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
