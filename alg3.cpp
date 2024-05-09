#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n;
cout<<"inter n :";
cin>>n;
int a[10]={0};
int b=0;

  	while(n>0)
	 {
	 	int yekan=n%10;
	 	n=n/10;
	 	a[yekan]++;
	 }
	   
	    for(int i=0;i<10;i++)
	    {
	    	  if(a[i]!=0)
	    	   cout<<i<<"===>"<<a[i]<<endl;
	    }   
getch();
return 0;
}	