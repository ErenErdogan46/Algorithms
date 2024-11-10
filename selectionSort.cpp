//Pseudo code for Selection sort
/*
for i from 0 to n-1 inclusive:
    Find smallest between num[i] and num[n-1]
    Swap smallest number with num[i]
*/

#include<iostream>
#include<vector>

using namespace std;

void selectSort(vector<int> &v)
{
    int n = v.size();

    for(int i = 0; i<n-1; i++)
    {
        int min=i;
        for(int j = i+1; j<n; j++)
            if(v[j] < v[min])
                min = j;
        swap(v[i],v[min]);
    }
}
int main()
{
    vector<int> v1 = {4, 6, 3, 7, 1, 5, 2};
    selectSort(v1);

    for(auto i:v1)
        cout<<i<<" ";

    return 0;
}
