/**
 * Lylian Bourgin
 * Labo nombre premier
 * 07.10.2026
 */

#include <iomanip>
#include <iostream>
#include <limits>

int main() {

    bool flag = true;
    const int nb_col = 5;
    const int valeur_min = 2;
    const int valeur_max = 1000;
    const int espace_entre_chiffre = 7;

    while (flag) {

        int nombre_utilisateur = 0;

        do {

            std::cout << "entrer une valeur [" << valeur_min << "-" << valeur_max << "] : ";
            std::cin >> nombre_utilisateur;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }while (nombre_utilisateur < valeur_min || nombre_utilisateur > valeur_max);

        bool est_premier = true;
        int compteur_nombre_premier = 0;

        std::cout << "Voici la liste des nombres premiers" << std::endl;

        for (int i = valeur_min; i <= nombre_utilisateur; i++) {
            // Inférieur et non inférieur ou égal car sinon il se divise par lui-même.
            for (int x = valeur_min ; x < i; x++) {
                if (i % x == 0) {
                    est_premier = false;
                    break;
                }
            }

            if (est_premier) {
                std::cout << std::setw(espace_entre_chiffre) << i;
                compteur_nombre_premier++;

                if (compteur_nombre_premier == nb_col) {
                    std::cout << std::endl;
                    compteur_nombre_premier = 0;
                }
            }

            est_premier = true;
        }

        if (compteur_nombre_premier != 0) {
            std::cout << std::endl; // Si ce n'est pas le dernier élément on mets un retour à la ligne
                                    // pour toujours avoir 1 retour à la ligne à la fin
        }
        std::cout << std::endl;

        char reponse_utilisateur = ' ';

        do {
            std::cout << "Voulez-vous recommencer [O/N] : ";
            std::cin >> reponse_utilisateur;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }while (reponse_utilisateur != 'O' && reponse_utilisateur != 'N');

        if (reponse_utilisateur == 'N') {
            flag = false;
        }
    }

    std::cout << "Fin de programme";

    return 0;

}