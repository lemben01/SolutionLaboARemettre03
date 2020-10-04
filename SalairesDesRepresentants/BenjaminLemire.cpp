// But :
/*
D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
affiche son salaire. Entrez -1 � la valeur des ventes pour quitter le programme.
*/
// Auteur : Benjamin Lemire
// Date : 2020-10-02

#include <iostream>
using namespace std;

int main()
{
   // commande qui permet d'afficher correctement les caracht�res 
   setlocale(LC_ALL, "");

   // d�claration des variables : 
   const int MONTANT_DEPART = 250;
   const float POURCENTAGE = 7.5;
   float vente;
   float total;
   int numRepresentant = 1;
   
   // la console affiche ce message � l'utilisateur pour savoir s'il veut quitter
   cout << "--Entrez -1 pour quitter--" << endl;
   // question pos� au premier utilisateur
   cout << "1 er repr�sentant, montant de vente : ";
   // permet au programme de lire la r�ponse du premier utilisateur
   cin >> vente;

   
   // on entre dans un boucle, tant que le montant de la vente n'est pas = � -1  ou tout autre chiffre infe�rieur � -1
   while (vente > -1)
   {
      // commende qui permet de mettre le system sur pause 
      system("pause");
      // commande qui permet au system de nettoyer la console chaque fois qu'on entre ou recommence la boucle
      system("cls");
      // le num�ro du repr�sentant augmenta � chaque tour
      numRepresentant++;


      // commande qui permet de calculer ce que le repr�santant obtien pour c'est vente. Dans ce cas, 
      // nous avons un montant de d�part qui commence � 250$ qui viens s'additionner � 7.5% du montant de la vente du representant en question.
      total = MONTANT_DEPART + ((vente * POURCENTAGE) / 100);
      // la console affiche le montant total que le repr�santant a fait
      cout <<"Vous avez fait "<< total <<"$" << endl;

      // la console r�affiche ce message � l'utilisateur pour savoir s'il veut quitter
      cout << "--Entrez -1 pour quitter--" << endl;
      // question pos� � l'utilisateur qui suit 
      cout <<numRepresentant << " em repr�sentant, montant de vente : ";
      // permet au programme de lire la r�ponse de l'utilisateur qui suit
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

j'ai d�cid� de mettre tout les montants qui sont n�gatifs pour sortir de la console puisque que oui, 
le repr�sentant pourait avoir perdu de l'argent au lieu d'avoir eu une vente positive. Ce qui instite donc � dire que:
si les ventes n�gatives doivent etre calcul�, -1 serait une vente qui pourrait etre possible. Pour rem�dier � cette situation, 
l'usage du caracht�re '=' par exemple aurait �t� pr�f�rable pour quitter
*/