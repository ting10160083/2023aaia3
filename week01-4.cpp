//week01-4a.cpp 
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	cout << n/16 %2;
	cout << n/8 %2;
	cout << n/4 %2;
	cout << n/2 %2;
	cout << n%2;
	return 0;
}

//week01-4b.cpp
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while(n>0){
		cout << n%2;
		n /= 2;
	}
	
	return 0;
} //兩個都還是沒有寫出來