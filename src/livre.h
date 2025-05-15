#ifndef LIVRE_H
#define LIVRE_H

#include <string>


class Livre
{
private:
    /* Attributs*/
    std::string titre_;
    std::string auteur_;
    std::string isbn_;
    int nombreExemplaire_{0};

public:
    /*Construteur*/
    Livre(const std::string& titre, const std::string& auteur, const std::string& isbn, int nombreExemplaire);

    /*Descontructeur*/
    //~Livre();

    /*Accesseurs*/
    std::string getTitre() const;
    std::string getAuteur() const;
    std::string getIsbn() const;
    int getNombreExemplaire() const;

    /*Mutateurs*/
    void setTitre( const std::string& titre);
    void setAuteur( const std::string& auteur);
    void setIsbn( const std::string& isbn);
    void setNombreExemplaire(int nombreExemeplaire);
    
    /*Méthodes*/
    void afficherInfos() const;
    void emprunter();
    void rendre();
};

#endif  //LIVRE_H
