#include "livre.h"
/*Constructeur */
Livre::Livre(const string &titre, const string &auteur, const string &isbn, bool disponible)
{
    this->titre = titre; // le this permet de distinguer l'attibut du paramétre this->titre  = attribut et titre = parametre du constructeur
    this->auteur = auteur;
    this->isbn =isbn;
    this->disponible = disponible;
    cout << "Le contruteur a éte initialisé" << endl;
}
/* De façon plus moderne on peut définir un constructeur comme suit: 
private:
    string titre_;
    string auteur_;
    string isbn_;


Livre::Livre(const string &titre, const string &auteur, const string &isbn) 
    : titre_(titre), auteur_(auteur), isbn_(isn){
    cout << " Le contruteur a été initialisé "<<endl;}

*/

/*Accesseurs*/
string Livre::getTitre() const
{
    return titre;
}

string Livre::getAuteur() const
{
    return auteur;
}

string Livre::getIsbn() const
{
    return isbn;
}


/*Mutateurs*/

