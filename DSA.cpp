// ARRAY APPROACH TO GET NUMBER OF TIMES THE CHARECTERS IS IN THE STRING
char getMaxOccCharacter(string s) {

    int arr[26] = {0};


    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    

    return 'a'+ans;

}


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
//DOUBT WHAT IS CUSTOM DELIMETER???????????????????????


//for matrix type questions check the spiral matrix question on codestudio.
//LECTURE 24
//Sieve of Eratosthenes (TO check prime or not)
 int countPrimes(int n) 
    {
        vector <bool> prime(n,true);
        int count =0;
        for(int i =2; i<n; i++)
        {
            if(prime[i])
            {
                count ++;
                for(int j = 2*i; j<n; j= j+i)
                {
                    prime[j]=0;
                }
            }
        }
        return count;
        
    }
//FOE TAKING DYNAMIC INPUT IN CASE OF 2D ARRAYS
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
  
int main()
{
    // system("cls");
  
    int row, col;
    row = 3;
  
    // Create Row Array- dynamic array of pointers
    int** arr = new int*[row];
    int sizes[] = { 4, 2, 3 };
    // int *sizes= new int[row];
    // if taking row as input
  
    // no of columns for each row as input from user
    for (int i = 0; i < row; i++) {
        /*
        cin>>col;        //if col is taken as input
        / sizes[i]=col;
        // store each col number in size ( if row and col
        // are taken as input)
        */
  
        *(arr + i) = new int[sizes[i]];
        // creating column of sizes[i] for each row
    }
  
    // input from user
    int num = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            // cin>>arr[i][j];    //if user want to input
            arr[i][j] = num++;
        }
    }
  
    cout << "elements in matrix form as follow" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  
    return 0;
}

