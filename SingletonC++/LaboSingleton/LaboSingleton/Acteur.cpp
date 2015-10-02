#include "Acteur.h"

int Acteur::cptAct = 0;

Acteur::Acteur(string nom)
{
   // incremente le nombre d'instance creer
   cptAct++;

   // enleve les espaces devant les noms
   nom = nom.substr(nom.find_first_not_of(' '), nom.find_last_not_of(' '));

   // trouve la position entre le nom et prenom
   int pos = nom.find_last_of(' ');

   // substring la chaine de caractere pour trouver les deux sous-chaines
   _prenom = nom.substr(0, pos);
   _nom = nom.substr(pos + 1, nom.length());
}

Acteur::Acteur(Acteur const &copie)
{
   // incremente le nombre d'instance creer
   cptAct++;

   // copie les choses 
   _nom = copie._nom;
   _prenom = copie._prenom;
}


string Acteur::getNomComplet()
{
   // retourne le nom de l'instance
   return _prenom + " " + _nom;
}