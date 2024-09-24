#include<iostream>
using namespace std;
class A{
public:
	int a[100];
	int n;
	void input()
	{   
		cout<<"enter the size of array";
        cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"enter the value";
			cin>>a[i];
		}
	    for(int i=0;i<n;i++)
		cout<<a[i];
    }
    void sort()
    {
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n-i-1;j++)
    		{
    			if(a[j]>a[j+1])
    			{
    				int c=a[j];
					a[j]=a[j+1];
					a[j+1]=c;    				
				}
			}
		}
		cout<<"\n OUTPUT - \n";
		for(int i=0;i<n;i++)
		cout<<a[i]<<",";
	}
}ob;
int main()
{
	ob.input();
	ob.sort();
	return 0;
}
