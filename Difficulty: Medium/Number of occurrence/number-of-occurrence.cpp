//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
   
    unordered_map<int,int>freqmap;
    //using hashmap we find the frequency of each element
    for(int i=0;i<n;i++){
        freqmap[arr[i]]++;
    }
    //return the count of x if it exists else return o
    if(freqmap.find(x)!=freqmap.end()){
        return freqmap[x];
    }
    else{
        return 0;
    }
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends