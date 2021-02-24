#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mark = 0;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (mark <= 9) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == mark)count++;
        }
        cout << mark << " : " << count << endl;
        mark++;
    }
    return 0;
}

