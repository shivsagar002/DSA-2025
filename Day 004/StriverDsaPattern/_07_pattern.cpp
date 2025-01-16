void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        for(int j=0; j<n+i-1; j++){
            if(j<n-i)cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
}