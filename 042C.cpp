#include <bits/stdc++.h>
using namespace std;

bool getNum(int num, vector<int>&D){
    string n = to_string(num);
    for(int i = 0; i < n.size(); i++){
        for(int j = 0; j < D.size(); j++){
            if(n[i] - '0' == D.at(j)){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int N;
    int K;
    cin >> N >> K;
    vector<int>D;
    for(int i = 0; i < K; i++){
        int d;
        cin >> d;
        D.push_back(d);
    }
    
    bool flag = true;
    while(flag){
        if (getNum(N,D)){
            cout << N << endl;
            break;
        }
        N ++;
    }
}

