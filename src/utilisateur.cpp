#include "utilisateur.h"
#include "livre.h"
#include <iostream>


//constructeur
Utilisateur::Utilisateur(const std::string &nom, const std::string &prenom, int id):
    nom_(nom), prenom_(prenom), id_(id)
{
    std::cout << "Initialisation du contructeur 'Utilisateur' " << std::endl;
}

//accesseurs
std::string Utilisateur::getNom() const
{
    return nom_;
}

std::string Utilisateur::getPrenom() const
{
    return prenom_;
}

int Utilisateur::getId() const
{
    return id_;
}

//Mutateur
void Utilisateur::setNom(const std::string &nom)
{
    nom_ = nom;
}

void Utilisateur::setPrenom(const std::string &prenom)
{
    prenom_ = prenom;
}
void Utilisateur::setId(int id)
{
    id_ = id;
}

//methodes
void Utilisateur::afficherInfos() const
{
    std::cout << "Nom Utilisateur: " << nom_ << "\nPrenom Utilisateur: " << prenom_ << "\nId Utilisateur: " << id_ <<"." << std::endl;
}

void Utilisateur::emprunterLivre(Livre &livre)
{
    livre.emprunter();
}
void Utilisateur::rendreLivre(Livre &livre)
{
    livre.rendre();
}
