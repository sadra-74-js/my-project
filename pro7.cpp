#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,count=0;	
cout<<"inter n :";
cin>>n;

	  while(n!=1)
	  { 
	     if(n%2==0)
		 	{ 
			 n=n/2;
			 cout<<n<<'\t';
			 }
			 else if(n=n*3+1)
			    cout<<n<<'\t';
			    count++;
		}
		 cout<<endl<<endl<<endl;
      cout<<"count :"<< count<<endl;
	
getch	();
return 0;  
 }
	
	
	
	
	
	
	
	
	

  
