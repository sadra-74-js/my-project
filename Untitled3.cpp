#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main() {
	 srand(time(0));
 //gerftan aadade random dar matris morabaee 

  int a[4][4];
   int n=4;
      for(int i=0;i<n;i++)
      {
      	for(int j=0;j<n;j++)
      	{
      	   a[i][j]=rand()%100;
      		}
      }
 
	     for(int i=0;i<n;i++)
	     {
	     	 for(int j=0;j<n;j++)
	       {
	      	cout<<a[i][j]<<"\t";
			 }
			cout<<endl<<endl;
		  }
	
	//moratab kardane anasore daroone morabba 
	          
	          int temp;
	         for(int k=n-1;k>0;k--)
	         {
	           for(int i=0;i<k;i++)
	             for(int j=n-1;j<k;j--)
	             
	            if(a[i][j]>a[i+1][j-1])
				     temp=a[i][j];
      			   a[i][j]=a[i+1][j-1];
      			   a[i+1][j-1]= temp;
      		}  
        cout<<"****************************\n";
        
           for(int i=0;i<n;i++)
        	  {  for(int j=0;j<n;j++)
        	     {
        	   	  cout<<a[i][j]<<"\t";
             	}
				cout<<endl<<endl;  
           }  
           
		  
       
getch();
return 0;
}