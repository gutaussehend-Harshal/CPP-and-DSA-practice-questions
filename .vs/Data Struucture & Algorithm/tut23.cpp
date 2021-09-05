#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nbinary\n";
	int mid;
	int key;
	cout<<"Key: ";
	cin>>key;
	i=0;
	while(i<n)
	{
		j=i+1;
		while(j<=n)
		{
			mid=(j+n)/2;
			if((key-a[i])==a[mid])
			{
				a[j]=a[mid];
				break;
			}
			if((key-a[i])>a[mid])
			{
				j=mid+1;
			}
			else
			{
				n=mid-1;
			}
		}
		
		if(a[i]+a[j]==key)
		{
			cout<<"We found the target index: "<<i<<" and "<<j;
			cout<<"\nThe summation values are: "<<a[i]<<" + "<<a[j]<<" ="<<key;
			break;
		}
		else{
			
			i++;
		}
	}
}