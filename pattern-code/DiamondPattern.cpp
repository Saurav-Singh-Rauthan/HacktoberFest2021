/*   *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *                  */

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=n;i>=1;i--)
	{
		for(j=n-i;j>=0;j--)
		{
			cout<<" ";
		}
		for(j=(2*i-1);j>=1;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
