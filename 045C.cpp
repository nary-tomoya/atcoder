#include <bits/stdc++.h>
using namespace std;

vector<string> split(string str, char del) {
    int first = 0;
    int last = str.find_first_of(del);
    
 
    vector<string> result;
    if (str.find_first_of(del) == string::npos){
         result.push_back(str);
         return result;
    } 

 
    while (first < str.size()) {
        std::string subStr(str, first, last - first);
 
        result.push_back(subStr);
 
        first = last + 1;
        last = str.find_first_of(del, first);
 
        if (last == string::npos) {
            last = str.size();
        }
    }
 
    return result;
}

int main(){
    string nums;
    cin >> nums;
    vector<int>array;
    for(int i = 0; i < nums.size(); i++){
        int n = nums[i] - '0';
        array.push_back(n);
    }
    
    int n = array.size() - 1;
    
    long long sum = 0;
    for(int bit = 0; bit < (1 << n); bit++){
        string num = nums;
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                num.insert(i+1+(num.size() - nums.size()),"+");
            } 
        }
        vector<string> n= split(num,'+');
        for(auto i : n){
            sum += atoll(i.c_str());
        }
    }
    cout << sum << endl;
}
