#include <iostream>

using namespace std;

int main()
{
    int T;
    //cout << "Enter no of test Cases : ";
    cin >> T;

    int result[T];

    for( int i = 0; i < T; i++ )
    {
        int N;

        //cout << "Enter No of Days : ";
        cin >> N;

        int V[N];
        bool A[N];
        A[0] = true;
        int count = 0;

        //cout << "Enter no of people : ";
        for( int i = 0; i < N; i++ )
        {
            cin >> V[i];
        }

        for( int i = 1; i < N; i++ )
        {
            A[i] = true;
            for( int j = 0; j < i; j++ )
            {
                if( V[i] <= V[j] )
                {
                    A[i] = false;
                }
            }
        }

        for ( int i = 0; i < N; i++ )
        {
            if( A[i] == true )
            {
                if( i == N-1 )
                {
                    count++;
                }else if( V[i] > V[i+1] )
                {
                    count++;
                }
            }
        }

        result[i] = count;
    }

    for( int i = 0;  i < T; i++ )
    {
        cout << "Case #" << i+1 << ": " << result[i] << endl;
    }

    return 0;
}
