#include <iostream>

/*  ANOUAR Abderrazzak  && CHAKFI Ahmed */


using namespace std;

int main(int argc, char** argv) {
	
	int i,n,sm;
	
		do
		{
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
       }
	   while (!(n>=5)); 
	   
	
	return 0;
}
