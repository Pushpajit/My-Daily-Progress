#include<bits/stdc++.h>
using namespace std;

int ASCII_ARRAY[200];

int main()
{
    string user_name;
    int unique = 0;
    getline(cin, user_name);

    for (int i = 0; i < user_name.size(); i++)
    {
        if(++ASCII_ARRAY[user_name[i]] <= 1){
            //cout << user_name[i] << " ";
            unique++;
        }
    }
    // cout << endl;
    // cout << "Unique charecter : " << unique;
    unique & 1 ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";
}//Time complexity O(n)