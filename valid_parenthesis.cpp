#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string a) {
    int n=a.size(),s=0;
    if(n%2!=0)
    return 0;
    stack<char> st;
    while(s<n){
        if(a[s]=='('||a[s]=='{'||a[s]=='[')
        st.push(a[s]);
        if(st.empty())
        return 0;
        else if(a[s]==')'){
            if(st.top()=='(')
            st.pop();
            else
            return 0;
        }
        else if(a[s]=='}'){
            if(st.top()=='{')
            st.pop();
            else
            return 0;
        }
        else if(a[s]==']'){
            if(st.top()=='[')
            st.pop();
            else
            return 0;
        }
        s++;
        }
    if(st.empty())
    return 1;
    return 0;
}
int main(){
    string s;
    cin>>s;
    cout<<isValid(s);
}