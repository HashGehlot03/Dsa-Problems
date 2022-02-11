/*
Given an array “A” of N integers and you have also defined the new array “B” as a concatenation of array “A” for an infinite number of times.

For example, if the given array “A” is [1,2,3] then, infinite array “B” is [1,2,3,1,2,3,1,2,3,.......].

Now you are given Q queries, each query consists of two integers “L“ and “R”. Your task is to find the sum of the subarray from index “L” to “R” (both inclusive) in the infinite array “B” for each query.

*/

#include<iostream>
using namespace std;
int sum_of_infinite_array(int a[],int size,int L,int R)
{
	int b[R];
	int sum = 0;
	for(int i=0;i<=R;i++)
	{
		if(i<L) b[i] = a[i%size];
		else
		{
			b[i] = a[i%size];
			sum+=b[i];
		}
	}
	return sum;
}
int main()
{
	int n,L,R;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements of array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element no. "<<i+1<<" ";
		cin>>a[i];
	}
	cout<<"Enter the value of L and R"<<endl;
	cin>>L;
	cin>>R;
	cout<<"the sum of subarray ranges between "<<L<<" and "<<R<<" is "<<sum_of_infinite_array(a,n,L,R);
	return 0;
}
