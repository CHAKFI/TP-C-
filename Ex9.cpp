#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int i,N,Som;
	
    Som=0;
    
    for(i=1;i<=10;i++)
    {
      cout<<"Veuillez entrer l entiers_"<<i<<endl;
	   cin>>N;
    	Som=Som+N;
	}
	cout<<endl<<"La somme = "<<Som;
	
	
	
	return 0;
}
