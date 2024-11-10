//Pseudo code for bubble sort:
/*
Repeat n times:
    for i from 0 to n-2:
        If numbers[i] and numbers[i+1] out of order
            swap them
*/

#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int>& v)
{
    int n = v.size();

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(v[j]>v[j+1])
                swap(v[j],v[j+1]);
        }
    }
}

int main()
{
    vector<int> v1 = {4, 6, 3, 7, 1, 5, 2};
    bubbleSort(v1);

    for(auto i:v1)
        cout<<i<<" ";

    return 0;
}
