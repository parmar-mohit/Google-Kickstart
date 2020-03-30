#include <iostream>

using namespace std;

void sessions( int A[], int N, int K );
int maxdiff( int A[], int N );

int main()
{
    int T;

    //cout << "Enter No of Test Cases : ";
    cin >> T;

    int result[T];

    for ( int i = 0; i < T; i++ )
    {
        int N, K;

        //cout << "Enter Other Details : ";
        cin >> N >> K;

        int M[N+K];

        //cout << "Enter No of Minutes in each session : ";
        for ( int i = 0; i < N ; i++ )
        {
            cin >> M[i];
        }

        sessions( M, N, K );

        int j = maxdiff( M, N+K );

        result[i] = M[j+1] - M[j];
    }

    for( int i = 0; i < T; i++ )
    {
        cout << "Case #" << i+1 << ": " << result[i] << endl;
    }

    return 0;
}

void sessions( int A[], int N, int K )
{
    int i = 0;
    while ( K > 0 )
    {
        int j = maxdiff( A, N+i );

        int k = N+i;

        while( k >= j+1 )
        {
            A[k+1] = A[k];
            k--;
        }

        A[j+1] = ( A[j] + A[j+2] ) / 2;
        i++;
        K--;
    }
}

int maxdiff( int A[], int N )
{
    int diff = A[1] - A[0];
    int j = 0;

    for ( int i = 1; i < N -1; i++ )
    {
        if( ( A[i+1] - A[i] ) > diff )
        {
            j = i;
            diff = A[i+1] - A[i];
        }
    }
    return j;
}
