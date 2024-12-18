#include<bits/stdc++.h>
using namespace std;

int partition(int array[], int start,int end)
{
    int pivot=array[end];
    int i=start-1;

    for(int j=start; j<end; j++)
    {
        if(array[j]<pivot)
        {
            i++;
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    
    i++;
    int temp=array[i];
    array[i]=array[end];
    array[end]=temp;

    return i;
}

void quickSort(int array[], int start,int end)
{
    if(end<=start)
    {
        return;
    }
    int pivot=partition(array,start,end);
    quickSort(array,start,pivot-1);
    quickSort(array,pivot+1,end);
}

int main()
{
    int array[]={8,2,4,7,1,3,9,6,5};
    int n=sizeof(array)/sizeof(array[0]);

    quickSort(array, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}