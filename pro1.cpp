#include<iostream>
#include<conio.h>
using namespace std;
int main() {


	int n;
	cin>> n;
	int temp=n;
	int count=0;
	int k=10;
	while (n>0) {
		int b=n%k;
		cout<<b<<"\t";
	   n=n/10;
	   count++;
	}
	  cout<<endl;
	
	for(int i=1;i<=count;i++)
	
	{
	   n=temp;
		k*=10;
		while(n>k-1)
		{
		   int b=n%k;
		   cout<<b<<"\t";
		   n=n/10;
		}
		cout<<endl;
		
	}
	
	getch();
	return 0;
	}

	
//cout<<endl;
	
	// n=temp ;
	 //k*=10;
	 // while (n>9) {
		//	int b=n%k;
	//	cout<<b<<"\t";
	  // n=n/10;

