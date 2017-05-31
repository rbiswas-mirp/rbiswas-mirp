#include<iostream>
using namespace std;
int main()
{
	int n, number;
	int max = -2147483646, smax = -2147483647;
	cout << "Enter numbers" <<endl;
	cin >> n;
	for (int i = 0; i< n; i++){
		cout << "next num" << endl;
		cin >> number;
		if (number > smax && number <=max){
			smax = max;
		
		}
		else if (number > max){
			smax = max;
			max = number;
		}
	}
	cout << "Max is:: " << max << "second max: " << smax << endl;
}	
