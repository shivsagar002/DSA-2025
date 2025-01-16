void alphaHill(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        char ch = 'A'-1;
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j=0; j<(i*2)-1; j++){
            if(j<i) cout<<++ch<<" ";
            else cout<<--ch<<" ";
        }
        cout<<endl;
    }
}