// Sieve of Eratosthenes algorithm in O(N) time complexity
//Problem Statement:  Given a number n, print all primes smaller than or equal to n.
/* Example: 
Input : n = 10
Output : 2 3 5 7 

Input : n = 20 
Output: 2 3 5 7 11 13 17 19
*/

#include<bits/stdc++.h>
using namespace std;
const long long MAX_SIZE = 1000001;

vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);

void manipulated_seive(int N)
{
	isprime[0] = isprime[1] = false ;
	for (long long int i=2; i<N ; i++)
	{
		if (isprime[i])
		{
			prime.push_back(i);
			SPF[i] = i;
		}
		for (long long int j=0; j < (int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i]; j++)
		{
			isprime[i*prime[j]]=false;
			SPF[i*prime[j]] = prime[j] ;
		}
	}
}

int main()
{
	int N;
	cin>>N;
	manipulated_seive(N);
	for (int i=0; i<prime.size() && prime[i] <= N ; i++)
		cout << prime[i] << " ";
	return 0;
}

