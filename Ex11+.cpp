#include <iostream>

/*CHAKFI Ahmed && ANOUAR Abderrazzak*/

using namespace std;

int main(int argc, char** argv) {
	
	int i,n,sm;
	
		do
		{
			cout<<"Veuillez entrer un entier (>=5)"<<endl;
	         cin>>n;
		
	    
		
	         for(i=5;i<=n;i++)
	         {
	         	sm+=i*i*i;
			 }
			 
	   
       }
	   while (n<5); 
	   cout<<"La somme des cubes --->\t"<<sm;
	
	return 0;
}
