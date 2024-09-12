//week01-5.cpp
#include <iostream>
using namespace std;
int main()
{
	int n,N=0;
	cin >> n;
	int a[32]; //陣列宣告 32bit就放32格
	while(n>0){
		a[N++] = n%2;
		n /= 2;
	}
	for(int i=N-1; i>=0; i--){ //倒過來的迴圈
		cout << a[i];
	}
	return 0;
}