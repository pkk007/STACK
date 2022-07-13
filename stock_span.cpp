#include<bits/stdc++.h>
using namespace std;

vector<int> NGL_index(vector<int> arr){
    vector<int> ans;
    stack<pair<int,int>> s;
    for(int i=0; i<arr.size(); i++){
        if(s.size()==0)
            ans.push_back(-1);
        else if(s.size()>0 && s.top().first>arr[i])
            ans.push_back(s.top().second);
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i])
                s.pop();
            if(s.size()==0)
                ans.push_back(-1);
            else
                ans.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    return ans;
}

vector<int> stock_span(vector<int> arr){
    vector<int> v = NGL_index(arr);
    for(int i=0; i<v.size(); i++)
        v[i] = i - v[i];
    return v;
}

int main(){
    vector<int> arr = {100,80,60,70,60,75,85};
    vector<int> ans = stock_span(arr);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}