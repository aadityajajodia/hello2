#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,key,flag=0;
	int a[100];
	cout<<"Enter the number of terms in the array:";
	cin>>n;
	cout<<"Enter the elements now:";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the element to be searched:";
		cin>>key;
	for(i=0;i<n;i++)
		if(a[i]==key)
		{
			cout<<"Element found at position: "<<i+1;
			flag=1;
		}
	if(flag==0)
		cout<<"Element not found:";
		getch();
}