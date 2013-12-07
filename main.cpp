#include <iostream>
#include "main.h"
#include "jeu.h"
#include "Plateau.h"
#include "joueur.h"

using namespace std;

int main()
{
    joueur j1,j2;
    j1.saisir("joueur1");
    j1.afficher("joueur1");
    j2.saisir("joueur2");
    j2.afficher("joueur2");
    plateau p;
    p.afficher();
    return 0;
}
