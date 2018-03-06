#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int A,B,C;
	
	cout<<"Veuillez entrer deux entiers :"<<endl;
	 cout<<"A : ";cin>>A;
	 cout<<"B : ";cin>>B;
	  
	  C=A;
	  A=B;
	  B=C;
	     
		 
	cout<<endl;	  
	cout<<"Donc la valeur de A devient : "<<A<<endl<<"et la valeur de B devient :"<<B;
 
	
	
	return 0;
}
