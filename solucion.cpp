#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    if (!(cin >> str)) return 0;

    int max_len = 1, current_len = 1;

    for (size_t i = 1; i < str.length(); i++){
        if (str[i] == str[i-1]){
            current_len++;
        } else {
            max_len = max(max_len, current_len);
            current_len = 1;
        }
    }
    max_len = max(max_len, current_len);

    cout << max_len << "\n";
    return 0;
}