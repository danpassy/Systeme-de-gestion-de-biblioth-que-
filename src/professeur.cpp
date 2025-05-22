#include <iostream>
#include "professeur.h"

//constructeur 
Professeur::Professeur(const std::string &nom, const std::string &prenom, int id): 
    Utilisateur(nom, prenom, id){}

// accesseur 
int Professeur::getMaxEmpruntProf() const{
    return maxEmpruntProf_;
}
//méthode
void Professeur::afficherInfos() const{
    std::cout << "Type Professeur" <<std::endl;
    Utilisateur::afficherInfos();
    std::cout << "Nombre de livre maximum Emprumtable: " << maxEmpruntProf_ << std::endl;
}

