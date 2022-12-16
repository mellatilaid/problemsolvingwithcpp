#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    //var to store the number of strings
    int n;
    cin>>n;
    //taking the string from the user
    string words[n];
    for (int i = 0; i < n; i++)
    {
        cin>>words[i];
    }

    for (int i = 0; i < n; i++)
    {
        //if the length of the string is greater than 10
        //we print the first and last char and the number of chars between them
        //like mellatilaid we print it as m9d
        //else we print the string as it is
        int length = words[i].size();
        if (length > 10)
        {
            cout<<words[i][0]<<length-2<<words[i][length-1]<<endl;
        }
        else
        {
            cout<<words[i]<<endl;
        }
    }

}
