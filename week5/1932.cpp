#include <algorithm>
#include <iostream>
using namespace std;

int arr[501];
int ans[501];
int N, tmp;

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            cin >> ans[1];
            arr[1] = ans[1];
            continue;
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cin >> tmp;

                if (j == 1)
                {
                    arr[j] = tmp + ans[1];
                }
                else if (j == i)
                {
                    arr[j] = tmp + ans[j-1];
                }
                else
                {
                    arr[j] = tmp + max(ans[j - 1], ans[j]);
                }
            }

            for (int k = 1; k <= i; k++)
            {
                ans[k] = arr[k];
            }

        }
    }

    sort(ans + 1, ans + 1 + N, greater<int>());

    cout << ans[1];

}
