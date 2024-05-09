#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 

	int n,count=0;
	cout<<"inter n :";
	cin>>n;
	for(int i=0; i<=n/10; i++) {
		for(int j=0; j<=n/20; j++) {
			for(int k=0; k<=n/50; k++) {
				for(int h=0; h<=n/100; h++) {
					int sum=i*10+j*20+k*50+h*100;
					if(sum==n) {
						count++;
						cout<<i<<"*10 + "<<j<<"*20 + "<<k<<"*50 + "<<h<<"*100 "<<endl;
					}
					
                		
				}
				
				
				
				
			}

		}

	}


           cout<<"count: "<<count<<endl;
         
getch ();
return 0;
}