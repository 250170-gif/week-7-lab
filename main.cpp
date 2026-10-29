// p2
// #include <iostream>
// using namespace std;
//
// bool hasAlternatingBits(int n) {
//     int last = n%2;
//     n=n/2;
//     while (n>0) {
//         int current=n%2;
//         if (current==last) {
//             return false;
//         }
//         last=current;
//         n=n/2;
//     }
//     return true;
//
//
//
// }
//
// int main() {
//     int n;
//     cin >> n;
//     if (hasAlternatingBits(n)) {
//         cout << "true" << endl;
//
//     }
//     else {
//         cout << "false"<< endl;
//     }
//     return 0;
//
// }
// p1
// #include <iostream>
// using namespace std;
// int toMinutes(int h,int m) {
//     return h*60 + m;
//
// }
// int convetTime(int current ,int correct) {
//     int dif = correct - current,c1=0;
//     while (dif>60) {
//         dif -=60;
//         c1++;
//     }
//     while (dif>=15) {
//         dif -=15;
//         c1++;
//     }
//     while (dif >=5) {
//         dif -=5;
//         c1++;
//     }
//     while (dif>=1) {
//         dif -=1;
//         c1++;
//     }
//     return c1;
// }
// int main() {
//     int h1,m1,h2,m2;
//     char c;
//     cin>>h1>>c>>m1;
//     cin>>h2>>c>>m2;
//
//     cout<<convetTime(toMinutes(h1,m1),toMinutes(h2,m2));
//     return 0;
// }
// p3
//
// #include <iostream>
// using namespace std;
// int tribonacci(int n) {
//     int t0=0, t1=1, t2=2, total=0;
//     if (n==0) return 0;
//     if (n==1||n==2) return 1;
//     int i=3;
//     while (i<=n) {
//         total=t0+t1+t2;
//         t0=t1;
//         t1=t2;
//         t2=total;
//         i++;
//     }
//
//
//     return t2;
//
// }
// int main() {
//     int n;
//     cin>>n;
//     cout<<tribonacci(n)<<endl;
//     return 0;
//
// }







