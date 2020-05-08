//#include <bits/stdc++.h>  //竸プロ用
#include<iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  // N要素の配列
  vector<int> A(N);

  // 入力処理
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  // 合計点
  int sum = 0;

  // 合計点を計算
  for (int i = 0; i < N; i++) {

    sum += A.at(i);

  }

  // 平均点
  int mean = sum / N;
  //離れた値
  int distance;
  
  // 平均点から何点離れているかを計算して出力
  for (int i = 0; i < N; i++) {

    // ②ここにプログラムを追記
    // 負の数を出力しないように注意
    if(mean > A.at(i)){
      distance = mean - A.at(i);
    }else{
      distance = A.at(i) - mean;
    }
    if(distance < 0){
      cout << "error";
    }
    cout << distance << endl;
    distance = 0;    //出力した値を初期化
  }
}
