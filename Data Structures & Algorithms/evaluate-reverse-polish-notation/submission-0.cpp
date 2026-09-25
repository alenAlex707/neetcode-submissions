#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                st.push(tokens[i]);
            } else {
                int b = stoi(st.top());
                st.pop();
                int a = stoi(st.top());
                st.pop();
                string token = tokens[i];

                int c{};
                if (token == "+") {
                    c = a + b;
                } else if (token == "-") {
                    c = a - b;
                } else if (token == "*") {
                    c = a * b;
                } else if (token == "/") {
                    c = a / b;
                }
                st.push(to_string(c));
            }
        }
        return stoi(st.top());
    }
};
