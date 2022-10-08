#include <iostream>
#include <vector>

using namespace std;

	int countPrimes(int n) {
		vector<bool> prime(n + 1, true);
		prime[0] = false;
		prime[1] = false;
		for (int i = 2; i<= n; i++) {
			if (prime[i]) {
				for (int j = 2; i*j <= n^1/2; j++) {
					prime[i*j] = false;
				}
			}
		}
		//counting prime numbers
		
		int primeCount = 0;
		for (int i = 2; i < n; i++) {
		   
			if (prime[i]) {
				primeCount++;
				cout<<" ";
				cout<<i;
			
			}
				
		}
		
	
		cout<<"\nthe number of primes is: ";
		return primeCount;
	}


int main()
{   int x;
    
    cout<< "enter total number of elements:";
    cin>>x;
    
    cout<<"THE PRIME NUMBERS ARE:"<<endl;
    cout<<countPrimes(x)<<endl;

    return 0;
}
