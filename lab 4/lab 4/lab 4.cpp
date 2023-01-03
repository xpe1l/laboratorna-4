#include <iostream>
using namespace std;
int main()
{
    int num{};
    cout << "enter a number"<< endl;
    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i; j++) {
            cout << " ";
        }
        for (int r = 0; r < i; r++) {
            cout << "#";
        }
        for (int l = 0; l < i + 1; l++) {
            cout << "#";
        }
        cout << "\n";


    }
}