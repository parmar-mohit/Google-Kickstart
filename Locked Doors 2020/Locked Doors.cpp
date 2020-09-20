#include <iostream>

using namespace std;

int main()
{
    int T;
    cout << "Enter No of Test Cases : ";
    cin >> T;

    for ( int i = 0; i < T; i++ )
    {
        int N, Q;

        cout << "Enter other Details : ";
        cin >> N >> Q;

        int D[N-1];
        int S,K;
        int result[Q];

        cout << "Enter Difficulty Level : ";
        for( int i = 0; i < N-1; i++ )
        {
            cin >> D[i];
        }

        cout << "Enter Queries" << endl;
        for( int i = 0; i < Q; i++ )
        {
            cin >> S >> K;

            int current_room = S;
            int left_room = S-1;
            int right_room = S+1;
            int rooms_visited = 1;

            cout << "V C L R" << endl;

            while( rooms_visited < K )
            {
                cout << rooms_visited << " " << current_room << " " << left_room << " " << right_room << endl;
                if( ( D[left_room - 1] < D[right_room-1] && left_room > 0 ) || right_room > N )
                {
                    current_room = left_room;
                    left_room--;
                }else
                {
                    current_room = right_room;
                    right_room++;
                }
                rooms_visited++;
            }
            //cout << "Current Room : " << current_room << endl;
            result[i] = current_room;
        }

        cout << "Case #" << i+1 << ": ";
        for( int i = 0; i < Q; i++ )
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return  0;
}
