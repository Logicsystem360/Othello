//Fichier pour les fonctions de la classe plateau

#include <iostream>
#include "main.h"
#include "jeu.h"
#include "Plateau.h"
#include "joueur.h"

using namespace std;

//////////////////////////////////////
// methode pour afficher le tableau.//
//////////////////////////////////////

void plateau::afficher()
{
    int i,j;
    cout << "             Jeu d'othello        " <<endl;        //afficher le titre
    cout << "      A   B   C   D   E   F   G   H " <<endl;      //afficher les noms des colonnes
    for (i=0; i<2*MAX+1; i++)
    {
        if (i%2==1)
            cout << "  " << (i+1)/2;        //afficher les nom des lignes
        if (i%2==0)
            cout << "    ";
        for (j=0; j<2*MAX+1; j++)
        {
            if (i%2==0)
            {
                if(j%2==0)
                    cout << "+";
                else
                    cout << " - ";
            }
            else
            {
                if (j%2==0)
                    cout << " | ";
                else
                    cout << p[i/2][j/2] ;
            }
        }
        cout << endl;
    }
}


