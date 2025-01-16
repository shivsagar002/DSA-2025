void nNumberTriangle(int n) {
    // Write your code here.
    int cnt = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<cnt++<<" ";
        }
        cout<<endl;
    }
}