#include <iostream>
using namespace std;
int main() {
   int hour1,minute1;
   int hour2,minute2;
   cin >> hour1 >> minute1;
   cin >> hour2 >> minute2;
   int t1=hour1*60+minute1;
   int t2=hour2*60+minute2;
   int t=t2-t1;
   cout << "时间差为" << t/60 << "小时" << t%60 << "分钟" << endl;
}