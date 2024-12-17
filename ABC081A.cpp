#include <iostream>

int main(){

    using namespace std;

    int num;
    int score = 0;
    cin >> num;

    int s1 = num/100;
    int s2 = (num-s1*100)/10;
    int s3 = num-s1*100-s2*10;

    int numbers[3] = {s1, s2, s3};

    for(int i=0; i<sizeof(numbers)/sizeof(numbers[0]); i++){
        if(numbers[i] == 1){
            score += 1;
        }
    }
    cout << score;

    return 0;
}