#include<iostream>
using namespace std;

int main(){
	long long n, m, a;
	while(cin>>n>>m>>a){
		long long n1 = n%a == 0 ? n/a : n/a + 1 ;
		long long m1 = m%a == 0 ? m/a : m/a + 1;
		cout<< n1 *m1 <<endl;
	}
	return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//  long long n, m, a;
//  cin>>n>>m>>a;
//  cout<<(((n+a-1)/a)*((m+a-1)/a));
//  return 0;
// }

