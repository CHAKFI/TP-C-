#include <iostream>
using namespace std;

//CHAKFI Ahmed 
 
int main()
{
double n=0;
int chx;
 
 do
    {
    cout<<"Actuellement n = "<<n<<" \n 1:Ajouter 1 \n 2:Multiplier par 2 \n 3:Soustraire 4 \n 4:Quitter"<<endl;
    cout<<"--->";cin>>chx;
 
    switch(chx)
        {
        case 1: n++;break;
        case 2: n=n*2; break;
        case 3: n=n/4;break;
        }
}while(chx!=4);
 
cout<<"La valeur finale de x vaut : "<<n<<endl;
 
return 0;
}
