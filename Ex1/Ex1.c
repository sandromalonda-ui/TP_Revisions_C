/*************************************************************
 * Nom du fichier : Ex1.c
 * Auteur : Sita Alexandre
 * Classe / Groupe : BTS CIEL 2
 * Date : 09/09/2026
 * Projet : TP Révisions C - Ex1
 * Environnement :
 * - Cible / Microprocesseur : x86_64
 * - IDE / Compilateur : Visual Studio 2026 (MSVC C11)
 * Description :
 * Programme affichant la valeur absolue d'un nombre entier.
 *************************************************************/

#include <stdio.h>

int main(void)
{
    int V;

    printf("Saisir un nombre entier : ");
    scanf_s("%d", &V);

    if (V >= 0)
    {
        printf("%d\n", V);
    }
    else
    {
        printf("%d\n", -V);
    }

    return 0;
}