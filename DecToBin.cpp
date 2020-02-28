#include<iostream>
#include<cstdlib>
 using namespace std;

 void DectoBin(int n)
{
	int binaryAns[32];

	int i = 0;
	while(n > 0)
	{
		binaryAns[i] = n % 2;
		n = n / 2;
		i++;
	}

	for(int j = i-1;j >= 0; j--)
	 {
	 	cout<<binaryAns[j];
	 } cout<<endl;
}

int main()
{
	int n =  7;
	DectoBin(n);
	return 0;
}