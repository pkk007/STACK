#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    stack<int> s1;
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    int n = s.size();
    // cout<<n<<endl;
    if(n%2==0)
        x = (n/2)+1;
    else
        x=(n/2)+1;
    
    while(x--){
        s1.push(s.top());
        s.pop();
    }
    s1.pop();
    int n1 = s1.size();
    // cout<<n1;
    while(n1--){
        s.push(s1.top());
        s1.pop();
    }
    int size = s.size();
    for(int i=0; i<=size; i++){
        int j = s.top();
        s.pop();
        cout<<j<<endl;
    }
    // cout<<s.size();
}