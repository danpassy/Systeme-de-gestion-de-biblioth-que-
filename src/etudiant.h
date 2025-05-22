#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "utilisateur.h"
#include "string"

class Etudiant : public Utilisateur{
    private:
    //attribut le nombre maximum
    const int maxEmpruntEtudiant_ = 3; // valeur fixée pour TOUS les étudiants

    public:
    //constructeur
    Etudiant(const std::string &nom, const std::string &prenom,int id);

    //deconsrtructeru
    ~Etudiant() = default;

    //accesseur
    int getMaxNumberEtudiant() const;

    //Méthodes
    void afficherInfos() const override; // rédéfinition 

};

#endif //ETUDAINT_H