#include<iostream>

using namespace std;

int main()
{
    int price, coin;
    cin>>price>>coin;
    int counter = 0;

    int resault = 0;
    while (true)
    {
        counter++;
        resault = price * counter;

        if (resault % 10 == 0 || resault % 10 == coin)
        {
            cout<<counter;
            break;
        }

    }
}
