/*
[입력]
첫 번째 줄에 테스트 케이스의 수 T가 주어진다.
각 테스트 케이스 별로 첫 줄에는 자연수 N(2 ≤ N ≤ 1,000,000)이 주어지고,
둘째 줄에는 각 날의 매매가를 나타내는 N개의 자연수들이 공백으로 구분되어 순서대로 주어진다.
각 날의 매매가는 10,000이하이다.
[출력]
각 테스트 케이스마다 ‘#x’(x는 테스트케이스 번호를 의미하며 1부터 시작한다)를 출력하고, 최대 이익을 출력한다.
3
10 7 6  == 0
3
3 5 9  == 10
5
1 1 3 1 2  == 5
*/
#include <iostream>
#define ARRSIZE 1000000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int iCaseT, iCaseP;
    int iDayNo;
    int iPriceNo[ARRSIZE];
    int iMax=0;
    
    cin >> iCaseT;
    for(int i=0; i<iCaseT; ++i){
        iCaseP = i+1;
        cin >> iDayNo;
        for(int j=0; j<iDayNo; ++j){
            cin >> iPriceNo[j];
            // 비교
            iMax = iPriceNo[0];
            for(int k=0; k<iDayNo; ++k){
                if(iPriceNo[k]<iPriceNo[k+1]){
                    iMax = iPriceNo[k+1];
                } else {
                    //result 0
                }

            }
        }
        


        cout << "#" << iCaseP << "\n";
    }

}