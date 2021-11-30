#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int p;
    for (int i = 0; i < 2; ++i)
    {
        cin >> p;
        cout << 1 - p << ' ';
    }

    for (int i = 0; i < 3; ++i)
    {
        cin >> p;
        cout << 2 - p << ' ';
    }

    cin >> p;
    cout << 8 - p;

    return 0;
}