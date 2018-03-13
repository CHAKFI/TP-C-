#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	 
	 int i,n,sm;
	
	cout<<"Veuillez entrer un entier (>=5)"<<endl;
	cin>>n;
	    
		
		if(n>=5)
	    {
		
	         for(i=5;i<=n;i++)
	         {
	         	sm=i*i*i;
			 }
			cout<<"La somme des cubes --->\t"<<sm; 
	   }
	   else
	   {
	   	cout<<"Taper un entier superieur ou egl 5 pour calculer la somme des cubes";
	   }
	return 0;
}
