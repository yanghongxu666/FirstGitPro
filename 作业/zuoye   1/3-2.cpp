#include<iostream.h>
void main()
{
	int a,b;
	cout<<"Please input a:";
	cin>>a;
	if(a<10) b=1;
	if(10<=a&&a<=99) b=2;
	if(100<=a&&a<=999) b=3;
	if(a>=1000) b=4;
	switch(b)
	{
	case 1: cout<<a<<"<10"<<endl;break;
	case 2: cout<<"10<="<<a<<"<=99"<<endl;break;

	case 3: cout<<"100<="<<a<<"<=999"<<endl;break;
	case 4: cout<<a<<">=1000"<<endl;
}
}
