#include <iostream>
using namespace std;

int main() {
    // 入力を文字列として受け取る
    string s;
    cin >> s;

    // カウント変数を初期化
    int count = 0;

    // 各マスの文字を確認し、'1'があればカウントを増やす
    for (int i = 0; i < 3; i++) {
        if (s[i] == '1') {
            count++;
        }
    }

    // 答えを出力
    cout << count << endl;
    return 0;
}