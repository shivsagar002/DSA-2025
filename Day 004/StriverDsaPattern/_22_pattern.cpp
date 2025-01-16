void getNumberPattern(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            cout<<max(i,j);
        }
        for(int j=2;j<=n;j++){
            cout<<max(i,j);
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=n;j>0;j--){
            cout<<max(i,j);
        }
        for(int j=2;j<=n;j++){
            cout<<max(i,j);
        }
        cout<<endl;
    }
}