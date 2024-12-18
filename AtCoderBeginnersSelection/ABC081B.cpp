#include <iostream>

int main(){

    using namespace std;
    
    int n=0; //黒板の文字数
    cin >> n;
    int a[n];
    int count = 0;  //操作回数


    //黒板の数字を配列に詰める
    for(int i=0; i<n; i++){
        cin >> a[i];
        //2で割れるときだけカウント
        if(a[i]%2 == 0){
            count += 1;
            a[i] /= 2;
        }else{
            continue;
        }
    }
    cout << count;

}