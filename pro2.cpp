#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	     //morabbae jadooee
int  a[20][20]={0};
 int n,i,j,count=1;
 cout<<"enternumber of row and col: ";
 cin>>n;

    if(n%2==1){
    	 i=0;
    	 j=n/2;
    	 a[i][j]=count;
    	 count++;
      }else{
      	cout<<"balad nistam!";
		}

     while(count<=n*n){
    	 int x=i-1;	
    	 int y=j+1;
		   if(x<0 && y==n){
		  	 x=i+1;
		   	y=j;
		  	 }
		  	 
		    else if(x<0){
		   	x=n-1;
		   	i=x;
			}  
			
		    else if(y==n){
		   	y=0;
		   	j=y;
			}
		    
		     if(a[x][y]!=0){
			 
		       x=i+1;
		       y=j;
		      }
		      a[x][y]=count;
		      count++;
		      i=x;
		      j=y;
		          
		} cout<<endl;   
			
		 for(i=0;i<n;i++){
		 
	
			 for(j=0;j<n;j++){
			
			   cout<<a[i][j]<<"\t";
    		 
    		   }
				 cout<<endl;
         }
         	
			
			
			
		      
		   
			
			
	
getch(); 
return 0;		
	}
    	  
				
			
			
					     
		          
		     
       

		      
		      
		       