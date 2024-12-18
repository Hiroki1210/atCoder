#include <iostream>
#include <vector>
using namespace std;

int main() {
    // N: 黒板に書かれている整数の個数
    int N;
    cin >> N;

    // A: 黒板に書かれている整数を格納するベクトル
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i]; // 各整数を入力
    }

    // 最大操作回数をカウントする変数
    int count = 0;

    // 操作を繰り返す
    while (true) {
        // すべての整数が偶数かを確認するためのフラグ
        bool allEven = true;

        // 配列 A を走査して奇数があるか確認
        for (int i = 0; i < N; ++i) {
            if (A[i] % 2 != 0) { // 奇数が見つかった場合
                allEven = false;
                break;
            }
        }

        // 奇数が含まれている場合、操作を終了
        if (!allEven) {
            break;
        }

        // すべて偶数の場合、各要素を 2 で割る
        for (int i = 0; i < N; ++i) {
            A[i] /= 2;
        }

        // 操作回数をカウント
        count++;
    }

    // 最大操作回数を出力
    cout << count << endl;
    return 0;
}