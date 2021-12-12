/*
-----------------------------------------------------------------------------------
Nom du fichier : matrice.cpp
Nom du labo    : Labo 7 : Vecteur et Matrice
Auteur(s)      : Tim Ernst et Antonio Pollino
Date creation  : 08.12.2021
Description    : Fichier contenant les prototypes des fonctions du fichier
                 matrice.cpp.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO7_MATRICES_MATRICE_H
#define LABO7_MATRICES_MATRICE_H
#include <vector>
#include <iostream>

using Vecteur = std::vector<int>;
using Matrice = std::vector<Vecteur>;

/// Nom         operator<<
/// But         Afficher un Vecteur au format (v1, v2, …, vn)
///
/// \param os
/// \param v    Vecteur à afficher
/// \return     Retourne le flux avec les données
std::ostream& operator<< (std::ostream& os, const Vecteur& v);

/// Nom         operator<<
/// But         Afficher une Matrice au format [(..),(..),(..)]
///
/// \param os
/// \param m    Matrice à afficher
/// \return     Retourne le flux avec les données
std::ostream& operator<< (std::ostream& os, const Matrice& m);

/// Nom         estCarre
/// But         Définir si une matrice est carrée
///
/// \param m    La matrice sur laquelle les tests seront effectués
/// \return     Retourne un booléen indiquant si la matrice est carrée
bool estCarree (const Matrice& m);

/// Nom         estReguliere
/// But         Définir si les lignes de la matrice ont la même taille
///
/// \param m    La matrice sur laquelle les tests seront effectués
/// \return     Retourne un booléen indiquant si la matrice est régulière
///             (toutes les lignes de même taille)
bool estReguliere (const Matrice& m);

/// Nom         minCol
/// But         Définir la longueur minimum des vecteurs d'une matrice
///
/// \param m    La matrice dont lla longueur des vecteurs sera contrôlée
/// \return     Retourne la longueur minimum des vecteurs d’une matrice
size_t minCol (const Matrice& m);

/// Nom         sommeLigne
/// But         Calculer la somme des valeurs d'une ligne comprise dans une matrice
///
/// \param m    La matrice dont les valeurs des lignes vont être additionnées
/// \return     Retourne un vecteur contenant la somme des valeurs de
///             chacune des lignes.
Vecteur sommeLigne (const Matrice& m);

/// Nom         sommeColonne
/// But         Calculer la somme des valeur d'une colonne comprise dans une matrice
///
/// \param m    La matrice dont les valeurs des colonnes vont être additionnées
/// \return     Retourne un vecteur contenant la somme des valeurs de
///             chacune des colonnes.
Vecteur sommeColonne (const Matrice& m);

/// Nom         vectSommeMin
/// But         Calculer la ligne d'une matrice dont la somme de ces éléments est
///             la plus faible
///
/// \param m    La matrice dont les lignes vont être additionnées
/// \return     Retour le vecteur d’une matrice dont la somme des valeurs
///             est la plus faible
Vecteur vectSommeMin (const Matrice& m);

/// Nom         shuffleMatrice
/// But         Mélanger les vecteurs d’une matrice sans altérer les vecteurs.
///
/// \param m    La matrice dont les vecteurs vont être mélangés
void shuffleMatrice (Matrice& m);

/// Nom         sortMatrice
/// But         Trier dans l’ordre croissant une matrice en fonction de
///             l’élément minimum d’un vecteur
///
/// \param m    La matrice dont les vecteurs vont être trié dans l'ordre croissant
void sortMatrice (Matrice& m);

#endif //LABO7_MATRICES_MATRICE_H
