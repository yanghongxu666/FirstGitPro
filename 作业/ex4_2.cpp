#include<iostream.h>
void main()
{
	int m,n,i,a=0;
	i=1;
	for(m=2000,n=1;m<=3000;m++)
	{
		if(m%400==0)
			n=1;
		else
			if(m%4==0&&m%100!=0)
				n=1;
			else
				n=0;
			if(n==1)
			{	cout<<" "<<m;
			if(i%10==0)
				cout<<endl;
			i++;
			a++;}
			

		
	}




cout<<endl<<"×ÜÊýÎª"<<a<<endl;







}

