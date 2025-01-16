void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}