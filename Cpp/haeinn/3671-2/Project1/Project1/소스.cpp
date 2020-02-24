#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int c;
vector<int> result;
vector<int> test[201];
bool prime[10000001];
string str;

int makePermutation(vector<int>& exCase);
bool primeNum(int num, int& sum, vector<int>& ary);

int main() {
    // false = Prime Number
    // true = Non Prime Number
    prime[0] = true;
    prime[1] = true;
    for (int i = 2; i <= 10000000; i++) {
        if (prime[i]) continue;
        else {
            for (int j = i * 2; j <= 10000000; j += i) {
                prime[j] = true;
            }
        }
    }

    cin >> c;

    for (int i = 0; i < c; i++) {
        cin >> str;
        for (int j = 0; j < (int)str.size(); j++) {
            test[i].emplace_back((int)str[j] - 48);
        }
    }

    for (int i = 0; i < c; i++) {
        result.emplace_back(makePermutation(test[i]));
    }

    for (int i = 0; i < c; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}

// ���� ���� �Լ�
int makePermutation(vector<int>& exCase) {
    int sum = 0;
    vector<int> numSet;
    vector <int> perm;
    vector <int> set;
    int _size = exCase.size();
    for (int i = 1; i <= _size; i++) {
        perm.clear();
        // ���� ����
        for (int a = 0; a < _size - i; a++) perm.emplace_back(0);
        for (int b = 0; b < i; b++) perm.emplace_back(1);

        do {
            // perm�� ���ؼ� set�� �����س���
            for (int j = 0; j < _size; j++) {
                if (perm[j] == 0) continue;
                else if (perm[j] == 1) set.emplace_back(exCase[j]);
            }
            sort(set.begin(), set.end());
            // set�� ������ ���ڷ� �����Ͽ� �Ҽ����� �Ǻ��Ѵ�.
            do {
                int num = 0;
                bool checker = true;

                for (int k = 0; k < (int)set.size(); k++) {
                    num += set[k] * pow(10, k);
                }
                //�Ҽ� �Ǻ� �Լ�
                checker = primeNum(num, sum, numSet);
                if (checker) {
                    numSet.emplace_back(num);
                }
            } while (next_permutation(set.begin(), set.end()));

        } while (next_permutation(perm.begin(), perm.end()));

    }
    return sum;
}

// �Ҽ� �Ǻ� �Լ�
// true : �ش� ���ڴ� �Ҽ��̸� �迭�� ǥ�ø� ���ش�.
// false : �ش� ���ڴ� �Ҽ��� �ƴϰų� �̹� �ߺ��Ǿ� ã�Ƴ� �Ҽ��̴�.

bool primeNum(int num, int& sum, vector<int>& ary) {
    bool checker = false;
    auto it = find(ary.begin(), ary.end(), num);
    if (it == ary.end()) { // �̹� ����� ���� �ƴ϶�� �Ҽ� �����Ѵ�.
        if (!prime[num]) {
            checker = true;
            sum += 1;
        }
    }
    return checker;
}