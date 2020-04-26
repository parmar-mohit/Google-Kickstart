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
        int N;

        //cout << "Enter no Of Moutain : ";
        cin >> N;

        int H[N];
        int count = 0;

        //cout << "Enter Height of each Mountain : ";
        for( int i = 0; i < N; i++ )
        {
            cin >> H[i];
        }

        for( int i = 1; i < N ; i++ )
        {
            if( H[i-1] < H[i] && H[i] > H[i+1] )
            {
                count++;
            }
        }

        result[i] = count;
    }

    for( int i = 0; i < T; i++ )
    {
        cout << "Case #" << i+1 << ": " << result[i] << endl;
    }
}
