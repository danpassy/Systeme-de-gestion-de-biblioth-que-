#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>

using namespace std;


class Livre
{
private:
    /* Attributs*/
    string titre;
    string auteur;
    string isbn;
    bool disponible = false;

public:
    /*Construteur*/
    Livre(const string& titre, const string& auteur, const string& isbn);

    /*Descontructeur*/
    //~Livre();

    /*Accesseurs*/
    void getTitre() const;
    void getAuteur() const;
    void getIsbn() const;
    bool getDisponible() const;

    /*Mutateurs*/
    void setTitre( const string& titre);
    void setAuteur( const string& auteur);
    void setIsbn( const string& isbn);
    void setDisponible( bool disponible);
    
    /*Méthodes*/
    void afficherInfos();

    void emprunter();

    void rendre();
};

#endif  //LIVRE_H
