#include <iostream>

using namespace std;

int main()
{
    int data[100], n, i, hole, value;

    cout << "Please enter the size of an array: ";
    cin >> n;

    for(i = 0; i<n; i++){
        cout << "Please enter the value of index[" <<i <<"]: ";
        cin >> data[i];
    }

    for(i = 0; i<n; i++){
        hole = i;
        value = data[i];

        while(hole > 0 && data[hole-1] > value){
            data[hole] = data[hole-1];
            hole = hole-1;
        }
        data[hole] = value;
    }

    cout << "\n Following is the sorted values are:\n-------------------------------------" <<endl;
    for(i = 0; i<n; i++){
        cout << "The value of index[" <<i <<"] is " <<data[i] <<endl;
    }

    return 0;
}
