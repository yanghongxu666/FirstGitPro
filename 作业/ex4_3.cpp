#include"iostream.h"
void main()
{
	int n,i;
	i=0;
	cout<<"输入一个整数n:"<<endl;
	cin>>n;
	for(;n>1;)
	{
		if(n%2==0)
		{i++;
		n=n/2;}
		else {i++;
		n=n*3+1;}
	
	
	
	
	
	}cout<<i<<endl;
}