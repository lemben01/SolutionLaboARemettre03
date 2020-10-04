// But :
/*
Le code suivant permet d’obtenir dans la variable iRandom un nombre aléatoire entre 0 et 100 :
#include <time.h>
using namespace std;
int main()
{
 int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
 srand(time(0)); // pour activer l’aléatoire dans le programme
 iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
}


Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
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
   // décalration des variables
   // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   int iRandom;
   int nbEntree;
   
   // pour activer l’aléatoire dans le programme
   srand(time(0));
   // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
   iRandom = rand() % 101;

   // entre dans un boucle qui commence par 1 est exécute le code jusqu'à ce que le compteur soit égal à 5
   for (int compteur = 1; compteur <= 5;)
   {
      // Met le système sur pause a chaque fois que la boucle vas recommencer, l'utilisateur devra appuyer sur une touche pour continuer
      system("pause");
      // Permet de nettoyer la console à chaque fois que la boucle recommence après que l'utilisateur a peser sur une touche pour continuer
      system("cls");
      // Pause une la question suivante à l'utilisateur et affiche le compteur du nombre de chance que l'utilisateur est rendu
      cout << compteur << " Veuillez entrer un nombre entre 0 et 100 : ";
      // La console lit la reponse que l'utilisateur a entrée
      cin >> nbEntree;
      // Si le nombre entrée restpecte la consigne suivante : C'est a dire que le nombre est plus grand ou égale à 0 et plus petit ou égale à 100
      if (nbEntree >= 0 && nbEntree <= 100)
      {
         // Si le nombre entrée est plus grand que le chiffre aléatoire
         if (nbEntree > iRandom)
         {
            // La console affiche si le nombre entrée est plus grand que le nombre aléatoire
            cout << "le nombre entrez est plus grand que celui de la console." << endl;
            // Enleverle // pour la commande suivant pour que la console affiche la réponse du nombre aléatoire (permet de mieux tester le programme)
            //cout << iRandom << endl;
            // Augmente la valeur de compteur
            compteur++;
         }
         // Si le nombre entrée est plus petit que le chiffre aléatoire
         else if (nbEntree < iRandom)
         {
            // La console affiche si le nombre entrée est plus petit que le nombre aléatoire
            cout << "le nombre entrez est plus petit que celui de la console." << endl;
            // Enleverle // pour la commande suivant pour que la console affiche la réponse du nombre aléatoire (permet de mieux tester le programme)
            //cout << iRandom << endl;
            // Augmente la valeur de compteur
            compteur++;
         }
         // Si le nombre entrée est égale au chiffre aléatoire
         else
         {
            // La console affiche si le nombre entrée est égal au nombre aléatoire
            cout << "Bravo, vous avez gané, les deux nombre sont égal" << endl;
            // Enleverle // pour la commande suivant pour que la console affiche la réponse du nombre aléatoire (permet de mieux tester le programme)
            cout << iRandom << endl;
            // Met le programme sur pause
            system("pause");
            // Le programme vas quitter puisque l'utilisateur est trop bon, ou trop chanceux pour avoir trouver la réponse du nombre aléatoire avant d'avoir utiliser ses 5 chances
            exit(1);
         }
      }
      else
      {
         // Le message suivant est afficher sur la console si l'utilisateur n'a pas respecter les consignes
         cout << "le nombre que vous avez entré ne respecte pas les consignes..." << endl;
      }
   }
   // ces message sont afficher si l'utilisateur à épuisé son nombres de chances...
   cout << "Vous avez dépassé le nombre de chance possible... " << endl;
   cout << "Meilleur chance la prochaine fois ;)";
   return 0;
}
/*
PLAN DE TEST
-------------------------------------------------------------------------------------------------------------------------------------
nombre de chance        nombre aléatoire        nombre entrée        réponse de la console
1                       72                      5                    le nombre entrez est plus petit que celui de la console.
2                       72                      101                  le nombre que vous avez entré ne respecte pas les consignes...
2                       72                      80                   le nombre entrez est plus grand que celui de la console.
3                       72                      72                   Bravo, vous avez gané, les deux nombre sont égal
-------------------------------------------------------------------------------------------------------------------------------------

-------------------------------------------------------------------------------------------------------------------------------------
nombre de chance        nombre aléatoire        nombre entrée        réponse de la console
1                       36                      -1                   le nombre que vous avez entré ne respecte pas les consignes...
1                       36                      18                   le nombre entrez est plus petit que celui de la console.
2                       36                      80                   le nombre entrez est plus grand que celui de la console.
3                       36                      36                   Bravo, vous avez gané, les deux nombre sont égal
-------------------------------------------------------------------------------------------------------------------------------------
*/
