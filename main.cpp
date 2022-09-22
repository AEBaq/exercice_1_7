#include <iostream>

/*
 * Entrée :
 * solde_initial = valeur fourni par l'utilisateur
 * taux_interet_annuel = valeur fourni par l'utilisateur
 * retrait_mensuel = valeur fourni par l'utilisateur
 *
 * Sortie :
 * En combien de mois, le compte va tenir
 *
 * Algorithme
 * Entrer la valeur correspondant à solde_initial
 * Entrer la valeur correspondant à taux_interet_annuel
 * Entrer la valeur correspondant à retrait_mensuel
 *
 * solde = solde_initial - retrait_mensuel - solde_initial * taux_interet_annuel/100
 *
 * nbre_mois = 1 mois
 * répéter (jusqu'à que solde <= 0) {
 *      solde = solde - retrait_mensuel - solde * interet_annuel/100
 *      nmbre_mois += 1;
 * }
 * Le compte va tenir "nmbre_mois" mois
 */

using namespace std;


int main() {
    int solde_init;
    int taux_annuel;
    int retrait_mensuel;

    cout << "Entrer la valeur du solde intial : " << endl;
    cin >> solde_init;
    cout << "Entrer le taux annuel : " << endl;
    cin >> taux_annuel;
    cout << "Entrer retrait mensuel : " << endl;
    cin >> retrait_mensuel;

    int solde = solde_init - retrait_mensuel - solde_init * taux_annuel/100;
    int nmbre_mois = 1;

    while (solde >= 0)  {
        solde = solde - retrait_mensuel - solde * taux_annuel/100;
        nmbre_mois += 1;
    }

    cout << "Le compte va tenir " << nmbre_mois << " mois." << endl;

}

// bonjour encore