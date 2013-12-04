#include <iostream>
#include "jeu.h"

using namespace std;

void plateau::afficher()
{
    int i,j;
    cout << "           Jeu d'othello        " <<endl;
    cout << "   A   B   C   D   E   F   G   H " <<endl;
    for (i=0; i<2*MAX+1; i++)
    {
        for (j=0; j<2*MAX+1; j++)
        {
            //D'abord,ce sont les quatre coins.
            if (i==0 && j==0)
            {
                cout << "©³";
            }
            else if (i==2*MAX && j==0)
            {
                cout << "©»";
            }
            else if (i==0 && j==2*MAX)
            {
                cout << "©·";
            }
            else if (i==2*MAX && j==2*MAX)
            {
                cout << "©¿";
            }
            //ce sont les bordures.
            else if (i==0)
            {
                if (j%2==1)
                {
                    cout << "©¥";
                }
                else
                {
                    cout << "©×";
                }
            }
            else if (i==2*MAX)
            {
                if (j%2==1)
                {
                    cout << "©¥";
                }
                else
                {
                    cout << "©ß";
                }
            }
            else if (j==2*MAX)
            {
                if (i%2==1)
                {
                    cout << "©§";
                }
                else
                {
                    cout << "©Ï";
                }
            }
            else if (j==0)
            {
                if (i%2==1)
                {
                    cout << "©§";
                }
                else
                {
                    cout << "©Ç";
                }
            }
            //ce sont dans le plateau.
            else if (i%2==0)
            {
                if (j%2==1)
                {
                    cout << "©¥";
                }
                else
                {
                    cout << "©ï";
                }
            }
            else if (i%2==1)
            {
                if (j%2==0)
                {
                    cout << "©§";
                }
                else        //afficher les pions.
                {
                    cout << " " <<p[(i-1)/2][j/2];
                }
            }
        }
        cout << endl;
    }
}
