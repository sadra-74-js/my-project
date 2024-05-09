#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int count=0;
int n;
int sum=4;
cout<<"inter n :";
cin>>n;
    
  
	 for(int i=3;i<=n;i++)
     { 	
	    sum=2*(sum+1);
       count++;
     }
       cout<<sum<<"\t"<<"duller"<<endl;
         cout<<"count : "<<count;

getch();
return 0;
}

