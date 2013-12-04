//Fichier de déclaration pour la classe Plateau

#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED

const int MAX=8;
const char B='B';
const char N='N';
const char V='X';

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
