#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many columns you want : ";
    cin>>n; // columns count
    for(int i = 1; i <= n; i++)  // i is row index
    {
        for(int j = 1; j <= n; j++)  // j is current symbol index in line i
        { // note, you print 5 symbols per line, so j <= 5, not j < 5
            if (i > 1 && i < n && j != n && j > i)  // for lines 2 and 3 indexes [3-4] and [4] print space, print * for symbol #5 (last symbol in a line is always *)
            {
                 cout << " ";
            }
            else
            {
                 cout << "*";
            }
         }

         cout << endl;
    }

    return 0;
}