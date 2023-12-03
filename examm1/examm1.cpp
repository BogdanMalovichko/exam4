#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "������ ������� ������: ";
    std::cin >> n;

    std::vector<int> plates(n);

    std::cout << "������ ������� ������ � ����� ������:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "������ " << i + 1 << ": ";
        std::cin >> plates[i];
    }

    std::sort(plates.begin(), plates.end());

    int result = 0;

    for (int i = 0; i < n - 1; ++i) {
        int difference = plates[i + 1] - plates[i];
        result += difference * (i + 1);
    }

    std::cout << "̳������� ������� ������: " << result << std::endl;

    return 0;
}

