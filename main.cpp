/*
-----------------------------------------------------------------------------------
Nom du fichier : matrice.cpp
Nom du labo    : Labo 7 : Vecteur et Matrice
Auteur(s)      : Tim Ernst et Antonio Pollino
Date creation  : 12.12.2021
Description    : Protocole de test des fonctions de la bibliothèques matrice.cpp
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <limits>
#include "matrice.h"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

int main(){
   Vecteur v = {1,2,3,4,5,6,7,8,9};

   vector<Matrice> vectorTest;
   vectorTest.push_back({{}});

   vectorTest.push_back({{},
                         {},
                         {},
                         {}});
   vectorTest.push_back({{},
                         {4},
                         {2,-3,1,7,5},
                         {9,8,0}});

   vectorTest.push_back({{},
                         {4,5,6},
                         {2,-3,1},
                         {9,8,0}});

   vectorTest.push_back({{1,2,3},
                         {7,8,9},
                         {2,3,1}});

   cout << boolalpha;
   cout << "Test de la bibliotheque matrice.cpp"  << endl;
   for (Matrice m : vectorTest) {
      cout << "---------------------------------" << endl;
      cout << m << endl;
      cout << "Est Carree                     : " << estCarree(m)    << endl;
      cout << "Est Reguliere                  : " << estReguliere(m) << endl;
      cout << "Longueur min. des vecteurs     : " << minCol(m)       << endl;
      cout << "Somme des lignes               : " << sommeLigne(m)   << endl;
      cout << "Somme des colonnes             : " << sommeColonne(m) << endl;
      cout << "Plus petite somme d'un vecteur : " << vectSommeMin(m) << endl;
      cout << "Melange de la matrice          : " << endl;
      shuffleMatrice(m);
      cout << m                                   << endl;
      cout << "Tri de la matrice              : " << endl;
      sortMatrice(m);
      cout << m                                   << endl;
      cout << "---------------------------------" << endl;
   }

   cout << "Presser ENTER pour quitter";
   VIDER_BUFFER;
   return EXIT_SUCCESS;
}