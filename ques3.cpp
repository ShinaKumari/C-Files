
/* 1
2 3
4 5 6
7 8 9 10
 */ 
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout<<value;
            value=value+1;
            col=col+1;
        }
      
        cout << endl;
        row = row + 1;
    }

    return 0;
}