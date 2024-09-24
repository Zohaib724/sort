#include<iostream>
using namespace std;
class A{
public:

	void input(int a[],int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<"enter the value";
			cin>>a[i];
		}
			cout<<"\n INPUT - \n";
	    for(int i=0;i<n;i++)
		cout<<a[i]<<";";
    }
    int partition(int a[],int low,int high)
    {
    	int pivot=a[high];
    	int i=low-1;
    	for(int j=low;j<=high;j++)
    	{
    		if(a[j]<pivot)
    		{
    			i++;
    			swap(a[i],a[j]);
			}
		}
		swap(a[i+1],a[high]);
		return(i+1);
	}
	void quicksort(int a[],int low,int high)
	{
		if(low<high)
		{
			int p1=partition(a,low,high);
			quicksort(a,low,p1-1);
			quicksort(a,p1+1,high);
		}
	}
}ob;
int main()
{  	int a[100];
  cout<<"enter the size of array";
  int n;
  cin>>n;
	int low,high;
	low=0;
	high=n-1;
	ob.input(a,n);
	ob.partition(a,low,high);
	ob.quicksort(a,low,high);
	cout<<"\n OUTPUT - \n";
	 for(int i=0;i<n;i++)
		cout<<a[i]<<";";
	return 0;
}
