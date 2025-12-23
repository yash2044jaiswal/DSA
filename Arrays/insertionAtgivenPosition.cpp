#include <iostream>
using namespace std;
int main(){
    int arr[30];
    int n;
    cout << "Enter the Size of array:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element:";
        cin >> arr[i];
    }
    int ele;
    cout << "Enter the element jiske baad tum insert krna chhhte ho" << endl;
    cin >> ele;
    for (int i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            int index = i;
            int newele;
            cout << "Enter new element:" << endl;
            cin >> newele;
            // shifting
            for (int i = index; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[index + 1] = newele;
            n++;
            cout<<"Insertion success...";
            break;
        }
        else
        {
            cout << "element is not found" << "insertion Notposible....";
            break;
        }

        cout<<"Traversal after insertion\n";
        for(int i=0;i<n;i++){
            cout<<" "<<arr[i];
        }
    }

    return 0;
}