#include<bits/stdc++.h>
using namespace std;

int main()
{
    string keyboard, str;
    int t, type_time = 0, prev=0, next=0;

    cin >> t;
    while (t--)
    {
        cin >> keyboard >> str;
        type_time = prev = next = 0;

        if(str.size() <= 1){
            cout << type_time << endl;
            continue;
        }

        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < keyboard.size(); j++)
            {
                if(str[i] == keyboard[j]){
                    next = j + 1;
                    //cout << next << " ";
                    break;
                }
            }
            if(i)
                type_time += abs(prev - next);

            prev = next;
            
        }
        //cout << endl;
        cout << type_time << endl;
        
    }
    
}//Time complexity O(50*26)