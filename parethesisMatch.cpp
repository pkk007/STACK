#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s){
    string y = "YES";
    string n = "NO";
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
            st.push(s[i]);

        else if(s[i]==']'){
            if(!st.empty() && st.top() =='[')
                st.pop();
            else{
                return n;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top() =='{')
                st.pop();
            else{
                return n;
                break;
            }
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top() =='(')
                st.pop();
            else{
                return n;
                break;
            }
        }
    }
    if(st.empty())
        return y;
    else
        return n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}