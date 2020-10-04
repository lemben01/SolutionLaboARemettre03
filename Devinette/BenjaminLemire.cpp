// But :
/*
Le code suivant permet d�obtenir dans la variable iRandom un nombre al�atoire entre 0 et 100 :
#include <time.h>
using namespace std;
int main()
{
 int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
 srand(time(0)); // pour activer l�al�atoire dans le programme
 iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
}


Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom.
L�utilisateur a un maximum de 5 chances. Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
nombre.
*/
// Auteur : Benjamin Lemire 
// Date : 2020-10-03

#include <iostream>
#include <time.h>
using namespace std;

int main()
{

   setlocale(LC_ALL, "");
   // d�calration des variables
   // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
   int iRandom;
   int nbEntree;
   
   // pour activer l�al�atoire dans le programme
   srand(time(0));
   // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
   iRandom = rand() % 101;

   // entre dans un boucle qui commence par 1 est ex�cute le code jusqu'� ce que le compteur soit �gal � 5
   for (int compteur = 1; compteur <= 5;)
   {
      // Met le syst�me sur pause a chaque fois que la boucle vas recommencer, l'utilisateur devra appuyer sur une touche pour continuer
      system("pause");
      // Permet de nettoyer la console � chaque fois que la boucle recommence apr�s que l'utilisateur a peser sur une touche pour continuer
      system("cls");
      // Pause une la question suivante � l'utilisateur et affiche le compteur du nombre de chance que l'utilisateur est rendu
      cout << compteur << " Veuillez entrer un nombre entre 0 et 100 : ";
      // La console lit la reponse que l'utilisateur a entr�e
      cin >> nbEntree;
      // Si le nombre entr�e restpecte la consigne suivante : C'est a dire que le nombre est plus grand ou �gale � 0 et plus petit ou �gale � 100
      if (nbEntree >= 0 && nbEntree <= 100)
      {
         // Si le nombre entr�e est plus grand que le chiffre al�atoire
         if (nbEntree > iRandom)
         {
            // La console affiche si le nombre entr�e est plus grand que le nombre al�atoire
            cout << "le nombre entrez est plus grand que celui de la console." << endl;
            // Enleverle // pour la commande suivant pour que la console affiche la r�ponse du nombre al�atoire (permet de mieux tester le programme)
            //cout << iRandom << endl;
            // Augmente la valeur de compteur
            compteur++;
         }
         // Si le nombre entr�e est plus petit que le chiffre al�atoire
         else if (nbEntree < iRandom)
         {
            // La console affiche si le nombre entr�e est plus petit que le nombre al�atoire
            cout << "le nombre entrez est plus petit que celui de la console." << endl;
            // Enleverle // pour la commande suivant pour que la console affiche la r�ponse du nombre al�atoire (permet de mieux tester le programme)
            //cout << iRandom << endl;
            // Augmente la valeur de compteur
            compteur++;
         }
         // Si le nombre entr�e est �gale au chiffre al�atoire
         else
         {
            // La console affiche si le nombre entr�e est �gal au nombre al�atoire
            cout << "Bravo, vous avez gan�, les deux nombre sont �gal" << endl;
            // Enleverle // pour la commande suivant pour que la console affiche la r�ponse du nombre al�atoire (permet de mieux tester le programme)
            cout << iRandom << endl;
            // Met le programme sur pause
            system("pause");
            // Le programme vas quitter puisque l'utilisateur est trop bon, ou trop chanceux pour avoir trouver la r�ponse du nombre al�atoire avant d'avoir utiliser ses 5 chances
            exit(1);
         }
      }
      else
      {
         // Le message suivant est afficher sur la console si l'utilisateur n'a pas respecter les consignes
         cout << "le nombre que vous avez entr� ne respecte pas les consignes..." << endl;
      }
   }
   // ces message sont afficher si l'utilisateur � �puis� son nombres de chances...
   cout << "Vous avez d�pass� le nombre de chance possible... " << endl;
   cout << "Meilleur chance la prochaine fois ;)";
   return 0;
}
/*
PLAN DE TEST
-------------------------------------------------------------------------------------------------------------------------------------
nombre de chance        nombre al�atoire        nombre entr�e        r�ponse de la console
1                       72                      5                    le nombre entrez est plus petit que celui de la console.
2                       72                      101                  le nombre que vous avez entr� ne respecte pas les consignes...
2                       72                      80                   le nombre entrez est plus grand que celui de la console.
3                       72                      72                   Bravo, vous avez gan�, les deux nombre sont �gal
-------------------------------------------------------------------------------------------------------------------------------------

-------------------------------------------------------------------------------------------------------------------------------------
nombre de chance        nombre al�atoire        nombre entr�e        r�ponse de la console
1                       36                      -1                   le nombre que vous avez entr� ne respecte pas les consignes...
1                       36                      18                   le nombre entrez est plus petit que celui de la console.
2                       36                      80                   le nombre entrez est plus grand que celui de la console.
3                       36                      36                   Bravo, vous avez gan�, les deux nombre sont �gal
-------------------------------------------------------------------------------------------------------------------------------------
*/
