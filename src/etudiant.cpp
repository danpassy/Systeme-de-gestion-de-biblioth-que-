#include "etudiant.h"
#include <iostream>

//Constructeur
Etudiant::Etudiant(const std::string &nom, const std::string &prenom, int id):
    Utilisateur(nom, prenom, id){}

//acceseur
int Etudiant::getMaxNumberEtudiant() const{
    return maxEmpruntEtudiant_;
}

//méthodes
void Etudiant::afficherInfos() const{
    std::cout << "Type étudiant" << std::endl;
    Utilisateur::afficherInfos();
    std::cout << "Nombre de livre maximum empruntable: " << maxEmpruntEtudiant_ << std::endl;
}

