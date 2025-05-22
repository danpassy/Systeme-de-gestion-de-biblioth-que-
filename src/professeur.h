#ifndef PROFESSEUR_H
#define PROFESSEUR_H

#include "utilisateur.h"
#include "string"

class Professeur : public Utilisateur{

    private:
    const int maxEmpruntProf_ = 5;

    public:
    //Constructeur
    Professeur(const std::string &nom, const std::string &prenom, int id);

    //accesseur
    int getMaxEmpruntProf() const;

    //methodes
    void afficherInfos() const override;

};

#endif //PROFESSEUR_H