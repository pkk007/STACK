#include<bits/stdc++.h>
using namespace std;

vector<int> next_smallest_to_right(vector<int> arr){
    vector<int> ans;
    stack <int> s;
    for(int i=arr.size()-1; i>=0; i--){
        if(s.size()==0)
            ans.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
            ans.push_back(s.top());
        else if(s.size()>0 && s.top()>=arr[i]){
            while(s.size()>0 && s.top()>=arr[i])
                s.pop();
            if(s.size()==0)
                ans.push_back(-1);
            else
                ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {4,5,2,10,8};
    vector<int> ans = next_smallest_to_right(arr);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}