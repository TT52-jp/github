#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  
  cin >> H >> W;	//要素数取り込み
  
  /*二次元配列の準備*/
  //vector<vector<char>> A((H+2), vector<char>(W+2));
  char A[H+2][W+2];
  
  /*#の入力*/
  for(int i=0; i<W+2;i++){
   	//A.at[0].at[i] = '#';	//1行目
    //A.at[H+2].at[i] = '#';	//最終行
    A[0][i] = '#';
    A[H+1][i] = '#';
  }
  
  for(int i=1; i<H+1; i++){
    //A.at[i][0] = '#';		//1列目
    //A.at[i][W+2] = '#';		//最終列
    A[i][0] = '#';
    A[i][W+1] = '#';
  }
  
  /*入力の取得*/
  for(int i=1; i<H+1; i++){
    for(int j=1; j<W+1; j++){
      //cin >> A.at[i+1].at[j+1];
      cin >> A[i][j];
    }
  }
  
  /*出力*/
  for(int i=0; i<H+2; i++){
    for(int j=0; j<W+2; j++){
     // cout << A.at[i].at[j];
      cout << A[i][j];
    }
    cout <<endl;
  }
 }
  
