// But :
/*
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire. Entrez -1 à la valeur des ventes pour quitter le programme.
*/
// Auteur : Benjamin Lemire
// Date : 2020-10-02

#include <iostream>
using namespace std;

int main()
{
   // commande qui permet d'afficher correctement les carachtères 
   setlocale(LC_ALL, "");

   // déclaration des variables : 
   const int MONTANT_DEPART = 250;
   const float POURCENTAGE = 7.5;
   float vente;
   float total;
   int numRepresentant = 1;
   
   // la console affiche ce message à l'utilisateur pour savoir s'il veut quitter
   cout << "--Entrez -1 pour quitter--" << endl;
   // question posé au premier utilisateur
   cout << "1 er représentant, montant de vente : ";
   // permet au programme de lire la réponse du premier utilisateur
   cin >> vente;

   
   // on entre dans un boucle, tant que le montant de la vente n'est pas = à -1  ou tout autre chiffre infeérieur à -1
   while (vente > -1)
   {
      // commende qui permet de mettre le system sur pause 
      system("pause");
      // commande qui permet au system de nettoyer la console chaque fois qu'on entre ou recommence la boucle
      system("cls");
      // le numéro du représentant augmenta à chaque tour
      numRepresentant++;


      // commande qui permet de calculer ce que le représantant obtien pour c'est vente. Dans ce cas, 
      // nous avons un montant de départ qui commence à 250$ qui viens s'additionner à 7.5% du montant de la vente du representant en question.
      total = MONTANT_DEPART + ((vente * POURCENTAGE) / 100);
      // la console affiche le montant total que le représantant a fait
      cout <<"Vous avez fait "<< total <<"$" << endl;

      // la console réaffiche ce message à l'utilisateur pour savoir s'il veut quitter
      cout << "--Entrez -1 pour quitter--" << endl;
      // question posé à l'utilisateur qui suit 
      cout <<numRepresentant << " em représentant, montant de vente : ";
      // permet au programme de lire la réponse de l'utilisateur qui suit
      cin >> vente;
   }
   return 0;
}

/*
Plan de test

venteDuRepresentant           %deVente$         total
5000$                         7.5%              250 + (7.5% de 5000$) = 625$
56                            7.5%              250 + (7.5% de 5000$) = 254.2$
-1                            --                --
-56                           --                --

j'ai décidé de mettre tout les montants qui sont négatifs pour sortir de la console puisque que oui, 
le représentant pourait avoir perdu de l'argent au lieu d'avoir eu une vente positive. Ce qui instite donc à dire que:
si les ventes négatives doivent etre calculé, -1 serait une vente qui pourrait etre possible. Pour remédier à cette situation, 
l'usage du carachtère '=' par exemple aurait été préférable pour quitter
*/