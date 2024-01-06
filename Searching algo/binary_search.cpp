#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> a, int key) {
    int low = 0, high = a.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {23, 45, 47, 62, 72};
    int res = binary_search(a, 72);
    cout << "Key at index " << res;

    return 0;
}
