#include <iostream>

using namespace std;

/* CHAKFI Ahmed && ANOUAR Abderrazzak */

int main(int argc, char** argv) {
	
int i,n,pg,o;
 
for(i=0;i<10;i++)
        {
        cout<<"Veuillez entrer l'element "<<i+1<<" \n ";
		cin>>o;
         if(i==0)
		 {
		  pg=o;
		  n=1;
		 }
         else if(o==pg)
		 {
		  n++;
		 }
		 else if(pg<o)
		 {
		  pg=o;
		  n=1;
		 }
        }
 
    cout<<"le nombre d'occurrences de la note la plus haute ---> "<<n<<endl;
 
	
	return 0;
}
