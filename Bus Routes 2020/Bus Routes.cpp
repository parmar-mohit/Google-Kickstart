#include <iostream>

using namespace std;

int main()
{
    int T;

    //cout << "Enter No of Test Cases : ";
    cin >> T;

    int result[T];

    for( int i = 0; i < T; i++ )
    {
        int N, D;

        //cout << "Enter Other Details : ";
        cin >> N >> D;

        int X[N];

        //cout << "Enter Values of X : ";
        for( int i = 0; i < N; i++ )
        {
            cin >> X[i];
        }

        int days = D;
        int j = N-1;

        while( j >= 0)
        {
            while( days % X[j] != 0 && days > 0 )
            {
                days--;
            }
            j--;
        }

        result[i] = days;

    }

    for( int i = 0; i < T; i++ )
    {
        cout << "Case #" << i+1 << ": " << result[i] << endl;
    }
    return 0;
}
