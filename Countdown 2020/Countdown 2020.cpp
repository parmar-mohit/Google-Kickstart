#include <iostream>

using namespace std;

int main()
{
    int T;

    //cout << "Enter No of test Cases : ";
    cin >> T;

    int result[T];

    for( int i = 0; i < T; i++ )
    {
        int N, K;

        //cout << "Enter other details : ";
        cin >> N >> K;

        int A[N];

        //cout << "Enter array : ";
        for( int j = 0; j < N; j++ )
        {
            cin >> A[j];
        }

        int count = 0;

        for ( int j = 0; j < N; j++ )
        {
            int x = 0;
            while( A[j] == K - x )
            {
                if( A[j] == 1 )
                {
                    count++;
                    break;
                }
                j++;
                x++;
            }
        }

        result[i] = count;
    }

    for( int i = 0; i < T; i++ )
    {
        cout << "Case #" << i + 1 << ": " << result[i] << endl;
    }

    return 0;
}
