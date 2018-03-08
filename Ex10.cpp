#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int i,N,posmin;
	
	

	 for(i=1;i<=10;i++)
        {
        cout<<"Entrer l entier_"<<i<<endl;
		cin>>N;
        if(i==0)posmin=N;
		else if(N<posmin)posmin=N;
        }
	
	
	cout<<"  -Le plus petit de ces entiers est ---> "<<posmin;
	
	return 0;
}
