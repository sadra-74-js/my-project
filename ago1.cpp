
	int n;
	cout<<"inter n: ";
	cin>>n;
	int mosallasi[50];

	for(int i=1; i<=50; i++) {
		int sum=0;

		for(int j=1; j<=i; j++)
			sum=sum+j;
		cout<<sum<<endl;
		mosallasi[i-1]=sum;
	}

	for(int j=mosallasi[49];j>=mosallasi[0];j--)
	{
		if(n>j)
		 
		 for(int i=0;i<=j;i++)
		 {
		 	int sum=0;
		 	sum=i+j;
		 	 if(sum==n)
            {
            	 cout<<"adade"<<n<<"badbo ast.";
				}else j--;
		 	 
		 }
	}


