#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	
int s=0;	
 char ch=getch();
	
	 while(ch!=13){
	 
      if(48<=ch && ch<=57)  	
       {
		     cout<<ch;	
	      s=s*10+(ch-48);
	      }  
	     ch=getch();
	}
	   cout<<"\n"<<s*10;
	   
	   
return 0;	
}
