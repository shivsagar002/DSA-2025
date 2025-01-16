void numberCrown(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=(n-1)*2; j++){
            cout<<"  ";
        }
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}