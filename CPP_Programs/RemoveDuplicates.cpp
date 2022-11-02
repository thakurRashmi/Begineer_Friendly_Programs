#include <iostream>
#include <string>
using namespace std;

string removeDuplicate(string s){

    //base case
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));
    //recursive 
    if(ch == ans[0]){
        return ans;
    }
    return (ch+ans);

}

int main(){
    
    string str;
    getline(cin,str);

    cout << removeDuplicate(str);

return 0;
}