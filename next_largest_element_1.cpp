#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE METHODE
vector<int> next_largest_element_right(vector<int> arr){
    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] > arr[i]){
                ans.push_back(arr[j]);
                break;
            }
            else{
                if(j==arr.size()-1)
                    ans.push_back(-1);
            }
        }
    }
    ans.push_back(-1);
    return ans;
}

int main(){
    vector<int> arr = {1,3,0,0,1,2,4};
    vector<int> ans = next_largest_element_right(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}