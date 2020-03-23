#include <iostream>

using namespace std;

int partition (int a[], int l, int u);

void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}

int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}

int main()
{
    int T;

    //cout << "Enter  No of Test  Cases : ";
    cin >> T;

    int result[T];

    for ( int i = 0; i < T; i++)
    {
        int N,B;

        //cout << "Enter No of houses on sale and Budget : ";
        cin >> N >> B;

        int A[N];

        //cout << "Enter Price of Houses: ";
        for ( int i = 0; i < N; i++ )
        {
            cin >> A[i];
        }

        //Quick Sort
        quick_sort(A,0,N-1);

        int count = 0;
        int amt = 0;

        for ( int i = 0; i < N ; i++ )
        {
            amt += A[i];
            if ( amt <= B )
            {
                count++;
            }else
            {
                break;
            }
        }

        result[i] = count;
    }

    for ( int i = 0; i < T; i++ )
    {
        cout << " Case #" << i+1 << ": " << result[i] << endl;
    }
    return 0;
}
