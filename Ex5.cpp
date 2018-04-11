#include<iostream>

/*CHAKFI Ahmed && ANOUAR Abderrazzak*/

using namespace std;

int main()
{
double P_HT,TVA,nbr_kilo,P_TTC;
 
cout<<"Veuillez saisir le prix HT d'un kilo de tomates : ";
                            cin>>P_HT;
 cout<<"Entrer le nombre des kilos : ";
                             cin>>nbr_kilo;
  cout<<"Veuillez entrer le taux de TVA : ";
                              cin>>TVA;
   P_TTC=(1+TVA/100)*P_HT*nbr_kilo;
 
    cout<<"Le prix TTC est : "<<P_TTC<<endl;
return 0;
}
