#include <iostream>
using namespace std;

int N;

int fibonacci(int N){
	if(N == 0){
		return 0;
	}
	if(N == 1){
		return 1;
	}
	else{
		return ( fibonacci(N-1) + fibonacci(N-2) );
	}
}

int main(){
	cout << "Bitte geben Sie eine Zahl ein: \n";
	cin >> N;
	cout << "Die Fibonacci-Zahl ist: " << fibonacci(N) << endl;
	return 0;
}
