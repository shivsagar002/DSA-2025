// Problem Link: https://www.naukri.com/code360/problems/k-most-occurrent-numbers_625382?leftPanelTabValue=PROBLEM

vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int,int> mp;
    int high_value=INT_MIN, low_value=INT_MAX, high_key, low_key;
    for(int i=0; i<v.size(); i++){
        mp[v[i]]++;
    }

    for(auto it : mp){
        if(it.second < low_value){
            low_key = it.first;
            low_value = it.second;
        }
        if(it.second > high_value){
            high_key = it.first;
            high_value = it.second;
        }
    }
    return{high_key,low_key};
}