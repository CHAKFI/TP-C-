#include <iostream>

/*  ANOUAR Abderrazzak  && CHAKFI Ahmed */


using namespace std;

int main(int argc, char** argv) {
	
	int i,n,f;
	
	cout<<"Veuillez entrer un entier"<<endl;
	 cin>>n;
	
	   if(n<0)
       {
        cout<<" ERREUR"<<endl;
       } 
		  else
           {
	       f=1;
	             for(i=1;i<=n;i++)
	             {
	              f=f*i;
	             }
	        cout<<"----> "<<n<<"!"<<" = "<<f;
            }
	return 0;
}
