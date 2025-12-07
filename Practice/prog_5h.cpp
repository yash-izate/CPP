// Program

/*

&
# #
& & &
# # # #

*/

#include <iostream>

using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "& ";
            }
            cout << endl;
        }

        else
        {
            for (int k = 1; k <= i; k++)
            {
                cout << "# ";
            }
            cout << endl;
        }
    }

    return 0;
}