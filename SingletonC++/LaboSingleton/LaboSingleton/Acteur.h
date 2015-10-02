#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Acteur
{
public:
   Acteur(string nom);
   Acteur(Acteur const& copie);
   ~Acteur(){ cptAct--; }
   static int nbrActeur() { return cptAct; }
   string getNomComplet();

private:
   static int cptAct;
   string _nom;
   string _prenom;
};

