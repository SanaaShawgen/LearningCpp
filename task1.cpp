#include <iostream>

using namespace std;

bool symmetic(int arr, int length)
{
    int num=0;
        if(length%2==0)

int main()
{
    int length;
    cin >> length;
    int *array {new int [length]{}};
    int arr[length];
    for(int i=0; i<length; i++)
    {
        cin >> arr[i];
    }
    cout << symmetic(arr, length) << endl;
    
}