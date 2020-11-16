#include <iostream>
using namespace std;
int modulo_reverse(long a, long p){
	for (long i = 0; i < p; i++){
		if(((long long)a*i)%p==1){
			return i;
		}
	}
	return -1;
}
int main(){
	int a,p;
	cin>>a>>p;
	cout<<modulo_reverse(a,p);
}
