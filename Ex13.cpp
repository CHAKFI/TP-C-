#include <iostream>

/*  ANOUAR Abderrazzak  && CHAKFI Ahmed */

using namespace std;

int main(int argc, char** argv) {
	
	int i,N,U_n,W_n,V_n;
	
	W_n=1;
	V_n=1;
 
cout<<"Veuiellez entrer un entier"<<endl;
cin>>N;
 
  U_n=1;
 
for(i=2;i<=N;i++)
        {
        U_n=W_n+V_n;
        W_n=V_n;
        V_n=W_n;
        }
 
cout<<"U(n) =\t"<<U_n<<endl;
 
	return 0;
}
