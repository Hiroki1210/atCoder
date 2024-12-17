#include <iostream>

int main(){

    using namespace std;

    //変数宣言
    int a,b;

    //値のキーボード入力
    cin >> a;
    cin >> b;

    int volume = a*b;

    //条件分岐
    if(volume%2==0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
}