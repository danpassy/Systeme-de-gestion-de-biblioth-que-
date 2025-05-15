#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>

class Livre;

class Utilisateur {
    private:
    std::string nom_;
    std:: string prenom_;
    int id_;

    public:

    //constructeur
    Utilisateur(const std::string &nom, const std::string &prenom, int id);

    //destructeur
    ~Utilisateur() = default;

    //accesseur
    std::string getNom() const;
    std::string getPrenom() const;
    int getId() const;

    //Mutateur
    void setNom(const std::string &nom);
    void setPrenom(const std::string &prenom);
    void setId(int id);

    //Methodes
    virtual void afficherInfos() const;
    void emprunterLivre(Livre& livre);
    void rendreLivre(Livre& livre);
};

#endif // UTILISATEUR_H