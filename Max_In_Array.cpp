#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	cout<<"Enter array"<<endl;
	int arr[n];
	for( int i=0; i<n; i++ )
		cin>>arr[i];
		
	int max = 0;
	for( int i=0; i<n; i++ )
	{
		if( max<arr[i] )
			max= arr[i];
	}
	
	cout<<"Maximum element in the array is "<<max<<endl;
	return 0;
}
