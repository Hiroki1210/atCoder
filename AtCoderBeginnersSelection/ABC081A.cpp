#include <iostream>
#include <iterator>

int main(){

    using namespace std;

    string s;
    cin >> s;

    //点数を入れる変数の準備
    int score = 0;

    //文字列'1'が見つかったときに点数を1点追加する
    for(int i=0; i<size(s); i++){
        if(s[i] == '1'){
            score += 1;
        }
    }
    cout << score;

    return 0;
}