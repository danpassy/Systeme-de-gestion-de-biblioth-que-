#include <iostream>
#include "livre.h"
#include "utilisateur.h"

#include "utilisateur.h"
#include "livre.h"
#include <iostream>

//test utilisateur
int main() {
    // Création d'un utilisateur
    Utilisateur utilisateur("Dupont", "Jean", 101);

    // Affichage des infos de l'utilisateur
    std::cout << "\n--- Infos de l'utilisateur ---\n";
    utilisateur.afficherInfos();

    // Création de quelques livres
    Livre livre1("Le Petit Prince", "Antoine de Saint-Exupéry", "978-2-07-061275-8", 2);
    Livre livre2("1984", "George Orwell", "978-0-452-28423-4", 1);

    // Affichage des infos des livres
    std::cout << "\n--- Infos des livres ---\n";
    livre1.afficherInfos();
    livre2.afficherInfos();

    // L'utilisateur emprunte un livre
    std::cout << "\n--- Emprunt d'un livre par l'utilisateur ---\n";
    utilisateur.emprunterLivre(livre1);

    // Affichage des infos du livre après emprunt
    std::cout << "\n--- Infos du livre après emprunt ---\n";
    livre1.afficherInfos();

    // L'utilisateur rend le livre
    std::cout << "\n--- Retour du livre par l'utilisateur ---\n";
    utilisateur.rendreLivre(livre1);

    // Affichage des infos du livre après retour
    std::cout << "\n--- Infos du livre après retour ---\n";
    livre1.afficherInfos();

    return 0;
}

/*
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
*/