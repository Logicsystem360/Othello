// Fichier pour les fonctions de la classe joueur

#include <iostream>
#include <string>
#include "jeu.h"

using namespace std;

void Joueur::saisir()
{
    cout << "Veuillez saisir votre nom de joueur !" << endl;
    cin >> nom;
}

void Joueur::couleur()
{
    cout << "Choix de la couleur ! (N pour Noir ou B pour Blanc)" << endl;
    cin >> coul;
}
