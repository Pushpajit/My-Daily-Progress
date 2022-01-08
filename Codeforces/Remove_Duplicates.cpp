#include<bits/stdc++.h>
using namespace std;

//This funtion will count the number of occurance of each elements
//in a vector.
/*
map<int,int> countFrequency(vector<int> a){
    map<int,int> hash;

    for (int i = 0; i < a.size(); i++)
        hash.insert(pair<int,int>(a[i], count(a.begin(), a.end(), a[i])));
    
    return hash;
}
*/

//Accepted :)
void removeDuplicates(vector<int> a) {
    vector<int> ans;
    ans.push_back(a.back());
    
    for (int i = a.size() - 2; i >= 0; i--)
    {
        int flag = 1;
        for (int j = 0; j < ans.size(); j++)
        {
            if(a[i] == ans[j]){
                flag = 0;
                break;
            }
        }
        if(flag)
            ans.push_back(a[i]);
        
    }
    cout<<ans.size()<<endl;
    for (int i = ans.size() - 1; i >= 0 ; i--)
        cout<<ans[i]<<" ";
    
}


int main()
{
    vector<int> a;
    int n, num;
    cin >> n;
    while (n--)
    {
        cin >> num;
        a.push_back(num);
    }

    removeDuplicates(a);
}