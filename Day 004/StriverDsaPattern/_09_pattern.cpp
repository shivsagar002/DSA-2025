void nStarDiamond(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        for(int j=0; j<n+i-1; j++){
            if(j<n-i) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<(n*2)-i; j++){
            if(j<i-1) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
}