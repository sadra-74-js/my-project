#include<iostream>
#include<conio.h>
using namespace std;
int main(){

 int h1=0,h2=0;
 int m1=0,m2=0;
 int s1=0,s2=0;
 int count=0;
 
 for(h1=0;h1<=2;h1++)
 { 
      
      
 	for(h2=0;h2<=9;h2++)
	{
	 	if(h1==2&& h2==3)
		{
	 	   break;
	   }
	 	  for(m1=0;m1<=5;m1++)
			{
				for(m2=0;m2<=9;m2++)
				{
				  for(s1=0;s1<=5;s1++)
				  {
				  	  for(s2=0;s2<=9;s2++)
					  {
				  	 	 if(h1==m2&& h2==m1&& m1==s2&& m2==s1){
							    count++;
				  	 	    cout<<h1<<h2<<" :"<<m1<<m2<<" :"<<s1<<s2<<endl;
				  	 	     
				  	 	   } 	
				  	 	}	
				   }	
			
				} 	
			}
						
	
			
	}
 
 }
   cout<<"count:"<<count;             
  
           
    
	    	
getch();
return 0;
}