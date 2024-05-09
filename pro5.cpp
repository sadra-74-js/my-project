#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int a[10],maxvalue=0, maxcount=0;
	    for(int i=0; i<10; i++)
	   {
	   		cout<<"inter number :";
	   		 cin>>a[i];
		}
	   
	   
	   for(int i=0; i<10; i++)
	   {
	   	  int currentvalue=a[i];
	        int currentcount=0;
	  
	    for(int j=0; j<10; j++){
          if(a[j]==currentvalue){
         	 currentcount+=1;
			   }
          
			}
			  
		    if(currentcount>maxcount){
		 	     maxcount=currentcount;
		 	   maxvalue=currentvalue;
		      }
	       cout<<currentvalue<<":"<<currentcount<<endl;
	   }
	     
         cout<<"maxvalue: "<<maxvalue<<endl;       	
	      cout<<"maxcount: "<<maxcount;
	
	
		
getch();
return 0;
	}