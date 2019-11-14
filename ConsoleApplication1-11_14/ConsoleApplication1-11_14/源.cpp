#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<array>
using namespace std;
int main(){
	int n;
	cin >> n;
	int c = 0;
	string str[n];
	for (int i = 0; i<n; i++){
		cin >> str[i];
		if (str[i] != '/0'){
			c[i]++;
			i++;
		}
	}
	for (int i = 0; i<n; i++){
		if (c[i]<c[i + 1]){
			cout << lengths << endl;
		}
	}
	return 0;
}

#include<iostream>

using namespace std;
int main(){
	int A;
	int B;
	int i;

	while (cin >> A >> B){

		for (i = B; i <= A*B; i++){
			if (i%A == 0 && i%B == 0){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}