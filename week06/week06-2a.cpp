//week06-2a.cpp (only Step01 Step02)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	while(cin >> now){ //Step01 Input
		a.push_back(now); //Step03 vector array
		cout << now << "\n"; //Step02 Output
	}
}