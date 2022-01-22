#include <iostream>
using namespace std;

int main()
{
	int item[9]={2,5,8,10,14,16,18,24,26};
	int mid;
	int first =0;
	int second=9;
	int number;
	cout<<"enter the number you want to search"<<endl;
	cin>>number;
	for (int i=0;i<=8;i++,mid =(first+second)/2)
	{
		cout<<i<<endl;
		if (item[mid]==number)
		{
			cout<<"your number"<<number<<"is present at index"<<mid<<endl;
			return 0;
			}
			else if (item[mid]>number)
			{
				second=mid-1;
				}
				if (first>second)
				{
					break;
        	}
	}
	cout<<"your number is not present";
	return 0;
}
