#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int T[10],i,sp;
	
	for(i=0;i<10;i++)
	   {
		cout<<"Veuillez entrer l element_"<<i+1<<endl;
		cin>>T[i];
	   }
              sp=0;
              for(i=0;i<10;i++)
	          {
	   	      if(T[i]>=10)
	   	      {
	   	      sp=sp+1;
			  }		
	         } 
	   cout<<endl<<"\t\tIl existe "<<sp<<" entier(s) (>= 10)";
          	return 0;
}
