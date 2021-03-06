/// C++ program to find whether an array is subset of another array
#include<iostream>
using namespace std;
/* Return 1 if arr2[] is a subset of
arr1[] */
bool isSubset(int arr1[], int arr2[],int m, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if(arr2[i] == arr1[j])
				break;
		}

		/* If the above inner loop was
		not broken at all then arr2[i]
		is not present in arr1[] */
		if (j == m)
			return 0;
	}

	/* If we reach here then all
	elements of arr2[] are present
	in arr1[] */
	return 1;
}
int main()
{
	int i,x,y;
	cout<<"Enter the how many elements are in first set:";
	cin>>x;
	cout<<"Enter the elements of first set:";
	int arr1[x];
	for(i=0;i<x;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the how many elements are in second set:";
	cin>>y;
	cout<<"Enter the elements of second set:";
	int arr2[y];
	for(i=0;i<y;i++)
    {
        cin>>arr2[i];
    }

	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);

	if(isSubset(arr1, arr2, m, n))
		cout<<"arr2[] is subset of arr1[]"<<endl;
	else
		cout<<"arr2[] is not a subset of arr1[]"<<endl;

	getchar();
	return 0;
}

