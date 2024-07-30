//bubble sort

//time complexity
//on best case = o(n)
//on average or worst case=o(n^2)
//space complexity o(1)

#include <iostream>
using namespace std;
void bubbleSort(int arr[],int size)
{
	for(int x=0;x<size;x++)//first loop for 1st value
	{
		for(int y=0;y<size-1-x;y++)//second loop for comparing all values
		{
			
			if(arr[y]>arr[y+1])
			{
				swap(arr[y],arr[y+1]);
			}
		
		}
	}
}


void show(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}


int main()
{

 	int arr[5]={8,2,0,1,3};
 	int size=sizeof(arr)/sizeof(arr[0]);
 	
 	cout<<"unsorted array"<<endl;
 	show(arr,size);
 	bubbleSort(arr,size);
 	cout<<"sorted array"<<endl;
 	show(arr,size);
 	return 0;
}
