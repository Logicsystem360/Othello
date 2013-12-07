//Fichier de déclaration pour la classe Plateau

#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED

#include <iostream>
#include "main.h"
#include "jeu.h"
#include "Plateau.h"
#include "joueur.h"

using namespace std;

class plateau
{
public:
    void afficher();
private:
    char p[MAX][MAX]=
    {
        {V,V,V,V,V,V,V,V},
        {V,V,V,V,V,V,V,V},
        {V,V,V,V,V,V,V,V},
        {V,V,V,B,N,V,V,V},
        {V,V,V,N,B,V,V,V},
        {V,V,V,V,V,V,V,V},
        {V,V,V,V,V,V,V,V},
        {V,V,V,V,V,V,V,V},
    };
};


#endif // PLATEAU_H_INCLUDED
