void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<n-i; j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
}