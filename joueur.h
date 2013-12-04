//Fichier de déclaration pour la classe joueur

#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED


class Joueur
{
public:
    std::string nom;
    int score;
    void saisir();
    void couleur();
    char coul;
};

#endif // JOUEUR_H_INCLUDED
