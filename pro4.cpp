#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	//bozorgtrin va dovvomin bozorgtrin adad
	int num=0;
	 int max1=num;
    int max2=num;	
	 cout<<"intrenumber :"<<endl; 
	  cin>>num;
	   while(num>=0){
	  	 if(num>max1){
	  	 	max2=max1;
	  	 	max1=num;
			}else if(num>max2)
			{
				max2=num;
	  		}
	  	       
	  	     cin>>num;
	  }
	     cout<<"max1 :"<<max1<<'\n'<<"max2 :"<<max2;
	
	
	
		
getch();	
return 0;
}