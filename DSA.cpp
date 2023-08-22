//SELECTION SORT

#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{  
    for (int i=0; i<n-1; i++)
    {
        int minIndex =i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex= j;
            }
        }
        swap(arr[minIndex],arr[i]);

    } 
}
//BEST TIME COMPLEXITY: O(N^2)
//WORST TIME COMPLEXITY: O(N^2)
//Selection Sort is not a stable sorting algorithm, because it swaps non-adjacent elements. The most pertinent example being: Given [2, 2, 1], the '2' values will not retain their initial order in the output sorted array.

//BUBBLE SORT

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    bool isSorted = false;
    for (int i=0; i<n-1; i++)
    {
        for (int j= 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSorted = true;
            }
            
        }
        if(isSorted = false)
        {
            break;
        }
    }
}
//BEST TIME COMPLEXITY: O(N)
//WORST TIME COMPLEXITY: O(N^2)
// Bubble Sort is a stable sorting algorithm. We swap elements only when A is less than B. If A is equal to B, we do not swap them, hence relative order between equal elements will be maintained.

//INSERTION SORT
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j=i-1;
        for (; j>=0; j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]= arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]= temp;
    }
}

//BEST TIME COMPLEXITY: O(N)
//WORST TIME COMPLEXITY: O(N^2)
//insertion sort is a stable sorting algorithm. A stable sorting algorithm is one that maintains the relative order of equal elements in the sorted output. In other words, if two elements have the same value, their relative order in the input array should be preserved in the sorted array.

//BINARY SEARCH: it happens when the array is sorted
int search(vector<int> &nums, int target) 
{
    int start =0;
    int end = nums.size()-1;
    int mid = start + (end - start)/2;
    int ans =0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if (target== nums[mid] )
        {
            return mid;
        }
        else if (target>nums[mid])
        {
            start = mid +1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}

