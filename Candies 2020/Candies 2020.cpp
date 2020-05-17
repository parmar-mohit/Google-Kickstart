#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int T;

    //cout << "Enter No Test Cases : ";
    cin >> T;

    int result[T];

    for( int i = 0; i < T; i++ )
    {
        int N, Q;

        //cout << "Enter other details : ";
        cin >> N >> Q;

        int A[N+1];

        //cout  << "Enter array : ";
        for( int j = 1; j <= N; j++ )
        {
            cin >> A[j];
        }

        int sub_result[Q];

        for( int j = 0; j < Q; j++ )
        {
            char dec;
            int x, y;

            cin >> dec >> x >> y;

            if( dec == 'U' )
            {
                A[x] = y;
                sub_result[j] = 0;
            }else
            {
                int subsum1 = 0;
                int subsum2 = 0;
                int odd = 1;
                int even = 2;
                for( int k = x; k <= y; k += 2 )
                {
                    subsum1 += A[k] * odd;
                    if( k + 1 <= y )
                    {
                        subsum2 += A[k+1] * even;
                    }
                    even += 2;
                    odd += 2;
                }
                sub_result[j] = subsum1 - subsum2;
            }
        }

        result[i] = 0;
        for( int j = 0; j < Q; j++ )
        {
            result[i] += sub_result[j];
        }
    }

    for( int i = 0; i < T; i++ )
    {
        cout << "Case #" << i+1 << ": " << result[i] << endl;
    }

    return 0;
}
