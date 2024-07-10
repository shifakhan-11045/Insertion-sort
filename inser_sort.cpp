#include<iostream>
using namespace std;
int main(){
    int n ;
	cout<<"Shifa Khan\n0832CS221187"<<endl;
    cout<<"\nEnter the size of array ";
    cin>>n;
    cout<<"\nEnter the elements of array :\n";
    int arr[n];
    
    for(int i=0;i<n;i++)
	{
        cin>>arr[i];
    }
    cout<<"\nElements are :\n";
     for(int i=0;i<n;i++)
	{
        cout<<arr[i]<<" ";
    }
        cout<<endl;
        //insetion sort
        cout<<"\nElements after sorting :\n";
        for(int i=0;i<n;i++)
		{
            int j=i;
            while(j>=1&&(arr[j])<(arr[j-1]))
			{
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
         for(int i=0;i<n;i++)
		{
        cout<<arr[i]<<" ";}

}
