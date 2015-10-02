#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Acteur.h"
using namespace std;

// un vecteur pour contenir pour les acteurs
vector<Acteur> unVecteur;

int LireUnFichier();
void CreerInstanceActeur(string uneLigne);

int main()
{
   cout << "Il y a " << LireUnFichier() << " acteurs dans la liste. " << endl << endl;

   for (unsigned int i = 0; i < unVecteur.size(); i++)
   {
      cout << unVecteur[i].getNomComplet() << endl;
   }
}

int LireUnFichier()
{
   string uneLigne;
   ifstream  unFichier("ListeActeur1.txt");
   
   if (unFichier.is_open())
   {
      while (getline(unFichier, uneLigne))
      {
         CreerInstanceActeur(uneLigne);
      }

      unFichier.close();
   }
   else
      cout << "Fichier non lisible" << endl;

   return Acteur::nbrActeur();
}

void CreerInstanceActeur(string uneLigne)
{
   Acteur unActeur(uneLigne);

   unVecteur.push_back(unActeur);
}
