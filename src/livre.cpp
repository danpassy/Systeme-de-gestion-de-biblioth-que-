#include "livre.h"
#include <iostream>

using namespace std;

/*Constructeur */
Livre::Livre(const string &titre, const string &auteur, const string &isbn,int nombreExemplaire):
    titre_(titre), auteur_(auteur), isbn_(isbn), nombreExemplaire_(nombreExemplaire)
{
    cout << "Le construteur a éte initialisé" << endl;
}

/*Accesseurs*/

string Livre::getTitre() const
{
    return titre_;
}

string Livre::getAuteur() const
{
    return auteur_;
}

string Livre::getIsbn() const
{
    return isbn_;
}
int  Livre::getNombreExemplaire() const
{
    return nombreExemplaire_;
}

/*Mutateurs*/

void Livre::setTitre(const string &titre)
{
    titre_ = titre;
}

void Livre::setAuteur(const string &auteur)
{
    auteur_ = auteur;
}

void Livre::setIsbn( const string &isbn)
{
    isbn_ = isbn;
}

void Livre::setNombreExemplaire(int nombreExemplaire)
{
    nombreExemplaire_ = nombreExemplaire;
}

// affiche les infos d'un livre 
void Livre::afficherInfos() const
{
    cout << "Titre du livre: " << titre_ << "\nNom de l'auteur: " << auteur_ << "\nDisponiblité: " << nombreExemplaire_ <<"."<< endl;
}

//afficher si le livre est disponible ou pas
void Livre::emprunter()
{
    if( nombreExemplaire_ > 0){
        --nombreExemplaire_;
        cout << "Livre  emprunté avec succes. nombre d'exemplaires restants: " << nombreExemplaire_ << endl;
    }
    else{
        cout << "Aucun Exemplaire disponible" <<endl;
    }
}

void Livre::rendre()
{
    ++nombreExemplaire_;
    cout << "Livre rendu avec succes: nombre d'exemplaire diponible: " << nombreExemplaire_<< endl;
}
