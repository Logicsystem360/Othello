// Fichier pour les fonctions de la classe joueur

#include <iostream>
#include "main.h"
#include "jeu.h"
#include "Plateau.h"
#include "joueur.h"

using namespace std;



///////////////////////////////////
//constructeur de classe "joueur"//
///////////////////////////////////

joueur::joueur(string nomstd,char coulstd,int scorestd)
{
    nom=nomstd;
    coul=coulstd;
    score=scorestd;
}

/////////////////////////////////////////////
//Methode saisir des information de joueur.//
/////////////////////////////////////////////


void joueur::saisir(string nomJoueur)
{
    //saisir nom de joueur.
    cout << "Entrez le nom de " << nomJoueur << endl;
    cout << "Nom : ";
    cin >> nom;

    //saisir couleur choisi.
    cout << "Entrez couleur que vous voulez choisir.('N' pour Noir ou 'B' pour Blanc) " << endl;
    cout << "Couleur choisi : ";
    cin >> coul;

    //si joueur ne saisi ni 'B' ni 'N'.
    while (coul!='B'&&coul!='N')
    {
        cout << "Entrez couleur que vous voulez choisir,svp.('N' pour Noir ou 'B' pour Blanc)" << endl;
        cout << "Couleur choisi : ";
        cin >> coul;
    }

    //Au debut,le score est toujour 0.Il ne faut pas de saisir.


    cout << endl;
}

////////////////////////////////////////////////
//Methode afficher les informations de joueur.//
////////////////////////////////////////////////


void joueur::afficher(string nomjoueur)
{
    //afficher le nom de joueur.
    cout << "Nom de joueur " << nomjoueur << " : " << nom <<endl;

    //afficher le couleur choisi par joueur.
    cout << "Couleur choisi :" << coul << endl;


    cout << endl;
}

