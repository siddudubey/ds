#include <iostream>
#include <cmath>
using namespace std;

bool isTriangular( int& n) {
    double sumcheck = (double) 2*n + 0.25;
    double nroot = sqrt(sumcheck) - 0.5;
    if( floor(nroot) == nroot ) 
        return true;
    else 
        return false;
}

int main() {
	int nin = 0, n = 0;
	cin >> nin;
	for(int i=0; i<nin; ++i )
	{
	    cin >> n;
	    if( isTriangular(n) )
	        cout <<"1\n";
	    else 
	        cout <<"0\n";
	}
	return 0;
}
