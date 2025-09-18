#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int arr[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0], index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            index = i;
        }
    }

    cout << "Максимальный элемент: " << maxVal << " на позиции " << index << endl;
    return 0;
}

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums = {1, 2, 3, 4, 5, 6, 7};

    for (auto it = nums.begin(); it != nums.end(); ) {
        if (*it % 2 == 0)
            it = nums.erase(it); 
        else
            ++it;
    }

    cout << "Список после удаления четных элементов: ";
    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}
