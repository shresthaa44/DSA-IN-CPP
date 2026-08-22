//brute force technique


#include <bits/stdc++.h>
using namespace std;

int removeduplicate(int arr[], int n)
{
    set<int> st;

    for(int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    int idx = 0;

    for(auto it : st)
    {
        arr[idx] = it;
        idx++;
    }

    return idx;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k = removeduplicate(arr, n);

    cout << "Number of unique elements: " << k << endl;

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}