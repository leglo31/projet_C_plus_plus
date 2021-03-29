#include <iostream>
using namespace std;

void	introMenu(string nom);
void	menuCompte();
void	menuClient();

int main()
{
	int choix       = 0;
	int quitter     = 0;

	while (quitter!=1)
	{
		cout << "\n\n\t\t==================\n";
		cout << "\t\t MENU PRINCIPAL:\n";
		cout << "\t\t==================\n\n";
		cout << "\t\[1] * Clients\n";
		cout << "\t\[2] * Compte\n";
		cout << "\t\[0] * Quitter\n\n\n\n\n\t\t  >>";
		cin >> choix;

		switch(choix) {
		case 0:
			//Quitte le programme (et te dit au revoir)
			cout << "\n\n\t\t=======================\n\n";
			cout << "\t\t   Au revoir et merci\n\n";
			cout << "\t\t=======================\n\n\n\n\n\n\n\n";
			quitter = 1;
			break;
		case 1:
			introMenu("LES CLIENTS");
			menuClient();
			break;
		case 2:
			introMenu("LES COMPTES");
			menuCompte();
			break;
		default:
			cout << "\n\n\n\n";
			cout << "Ce n'est pas un choix valide, recommencez la saisie\n";
		}
	}
}

//affiche l'en tete du menu

void	introMenu(string nom)
{
	cout << "\n\n\t\t"<< nom <<"\n";
	cout << "\t\t==================\n\n";
}

void menuCompte()
{
	int choix       = 0;
	int quitter     = 0;

	while (quitter!=1)
	{
		cout << "\n\n\t\t==================\n";
		cout << "\t\t MENU COMPTES:\n";
		cout << "\t\t==================\n\n";
		cout << "\t\[1] * Créer un compte\n";
		cout << "\t\[2] * Rechercher un compte\n";
		cout << "\t\[3] * Clôturer un compte\n";
		cout << "\t\[4] * Lister les comptes\n";
		cout << "\t\[0] * Quitter\n\n\n\n\n\t\t  >>";
		cin >> choix;

		switch(choix) {
		case 0:
			//Quitte le programme (et te dit au revoir)
			cout << "\n\n\t\t=======================\n\n";
			cout << "\t\t   Au revoir et merci\n\n";
			cout << "\t\t=======================\n\n\n\n\n\n\n\n";
			quitter = 1;
			break;
		case 1:
			introMenu("CREATION COMPTE");

			break;
		case 2:
			introMenu("RECHERCHER COMPTE");

			break;
		case 3:
			introMenu("SUPPRIMER COMPTE");

			break;
		case 4:
			introMenu("LISTER COMPTE");

			break;

		default:
			cout << "\n\n\n\n";
			cout << "Ce n'est pas un choix valide, recommencez la saisie\n";
		}
	}
}

void menuClient()
{
	int choix       = 0;
	int quitter     = 0;

	while (quitter!=1)
	{
		cout << "\n\n\t\t==================\n";
		cout << "\t\t MENU CLIENT:\n";
		cout << "\t\t==================\n\n";
		cout << "\t\[1] * Créer un client\n";
		cout << "\t\[2] * Rechercher un client\n";
		cout << "\t\[3] * Supprimer un client\n";
		cout << "\t\[4] * Lister les clients\n";
		cout << "\t\[0] * Quitter\n\n\n\n\n\t\t  >>";
		cin >> choix;

		switch(choix) {
		case 0:
			//Quitte le programme (et te dit au revoir)
			cout << "\n\n\t\t=======================\n\n";
			cout << "\t\t   Au revoir et merci\n\n";
			cout << "\t\t=======================\n\n\n\n\n\n\n\n";
			quitter = 1;
			break;
		case 1:
			introMenu("CREATION CLIENT");
			menuClient();
			break;
		case 2:
			introMenu("RECHERCHER CLIENT");
			menuCompte();
			break;
		case 3:
			introMenu("SUPPRIMER CLIENT");
			menuCompte();
			break;
		case 4:
			introMenu("LISTER CLIENT");
			menuCompte();
			break;
		default:
			cout << "\n\n\n";
			cout << "Ce n'est pas un choix valide, recommencez la saisie\n\n";
		}
	}
}
