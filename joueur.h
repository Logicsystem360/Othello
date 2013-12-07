//Fichier de déclaration pour la classe joueur

#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

#include <iostream>
#include "main.h"
#include "jeu.h"
#include "Plateau.h"
#include "joueur.h"

using namespace std;

class joueur
{
public:
    joueur(string nomstd="NULL",char coulstd='N',int scorestd=0);
    void saisir(string);
    void afficher(string);
private:
    string nom ; // le nom du joueur
    char coul ; // caractère représentant le joueur : ‘N’ ou ‘B’
    int score ; // le score du joueur pour la partie en cours
};

#endif // JOUEUR_H_INCLUDED
