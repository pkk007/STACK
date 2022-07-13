#include<bits/stdc++.h>
using namespace std;


//DONE VIA STACK
vector<int> next_greatest_element_right(vector<int> arr){
    stack<int> s;
    vector<int> ans;

    for(int i=arr.size()-1; i>=0; i--){
        if(s.size() == 0)
            ans.push_back(-1);
        else if(s.size()>0 && s.top()>arr[i])
            ans.push_back(s.top());
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i])
                s.pop();
            if(s.size() == 0)
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
    vector<int> arr = {1,3,0,0,1,2,4};
    vector<int> ans = next_greatest_element_right(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}