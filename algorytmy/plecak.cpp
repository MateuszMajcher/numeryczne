#include <iostream>
#include <stdlib.h>
using namespace std;
int limit,n,maxWartosc=0;

void Pakuj(int i,int *waga,int *wartosc,bool *rzecz,bool *wynik,
            int obecnaWartosc,int obecnaWaga)
{

   if(i==n)                               //jezeli jestesmy na jednym z koncow

   {

           if(obecnaWartosc>maxWartosc)   //porownaj wartosc plecaka

           {

                                  maxWartosc=obecnaWartosc;

                                  for(int j=0;j<n;j++)

                                  wynik[j]=rzecz[j];

                                  }

           }

   else

   {

       if (obecnaWaga+waga[i]<=limit)     //sprawdz czy element sie zmiesci

       {

                  rzecz[i]=1;             //dodaj go i sprawdzaj dalej

                  obecnaWaga+=waga[i];

                  obecnaWartosc+=wartosc[i];

                  Pakuj(i+1,waga,wartosc,rzecz,wynik,obecnaWartosc,obecnaWaga);

                  rzecz[i]=0;             //odejmij go i sprawdz inne mozliwosci

                  obecnaWaga-=waga[i];

                  obecnaWartosc-=wartosc[i];

                  }

      Pakuj(i+1,waga,wartosc,rzecz,wynik,obecnaWartosc,obecnaWaga);  //idz dalej

      }

}

 

int main ()

{ 

int *waga,*wartosc,i,j,wartoscPlecaka=0,wagaPlecaka=0;

double *stosunek;

bool *wynik,*rzecz;

 

/* Wprowadzenie danych */

 

cout<<endl<<endl<<"\tPodaj limit plecaka: ";

cin>>limit;

cout<<"\tPodaj ilosc przedmiotow: ";

cin>>n;

cout<<"\n\n";

 

waga=new int[n];                //wagi przedmiotow

wartosc=new int[n];             //wartosci przedmiotow

stosunek=new double[n];         //do posortowania

wynik=new bool[n];              //do zapisania wynikow

rzecz=new bool[n];              //do zapamietania obecnych elementow

 

for(i=0;i<n;i++)

{ 

                cout<<"\tPodaj wage przedmiotu "<<i<<" : "; 

                cin>>waga[i];

                cout<<"\tPodaj wartosc przedmiotu: ";

                cin>>wartosc[i];

                cout<<"\n\n";

                if(waga[i]>limit)      //jezeli waga przedmiotu przekracza limit

                {

                                 i--;  //nie uwzgledniaj go

                                 n--;

                                 }

                else

                stosunek[i]=(double)wartosc[i]/waga[i];

                }

 

/* Posortowanie danych malejaco wzgledem stosunku wartosci do wagi */

                       /* Sortowanie babelkowe */

                        

for(i=0;i<n-1;i++)

{

           for(j=0;j<n-i-1;j++)

           {

                              if(stosunek[j]<stosunek[j+1])

                               {

                                           swap(stosunek[j],stosunek[j+1]);

                                           swap(waga[j],waga[j+1]);

                                           swap(wartosc[j],wartosc[j+1]);

                                           }

                               }

                  }

                   

delete(stosunek);

 

/* Wywolanie wlasciwego algorytmu */
Pakuj(0,waga,wartosc,rzecz,wynik,0,0);
delete(rzecz);
/* Wypisanie wynikow */
cout<<endl<<endl<<"\tRzeczy w plecaku: "<<endl;

for (i=0;i<n;i++)
      if(wynik[i])
      { 
                  wagaPlecaka+=waga[i];
                  wartoscPlecaka+=wartosc[i];
                 cout<<"\tPrzedmiot o wadze "<<waga[i];
                  cout<<" i o wartosci "<<wartosc[i]<<"."<<endl;
                  }
cout<<endl<<"\tWaga plecaka: "<<wagaPlecaka<<endl;
cout<<"\tWartosc plecaka: "<<wartoscPlecaka<<"\n\n\t";
delete(waga);
delete(wartosc);
delete(wynik);
system("pause");

}
