// We will us the XOR operator in this problem and use its property that Xor of two same numbers reault in zero
// Complete the lonelyinteger function below.
int lonelyinteger(vector<int> a) {
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans=ans^a[i];   // Performing the XOR operation among the numbers of the array 
    }
    return ans;

}
