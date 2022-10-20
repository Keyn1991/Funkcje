#include <iostream>
#define PI 3.14
using namespace std;

void PoleKola() {
float promien, pole;

cout << "podaj promin kola: ";
cin >> promien;
pole = PI * promien * promien;
cout << "Podaj kola wynosi: " << pole << endl;
}
void PoleKwadratu() {
   float bok, pole;

   cout << "Podaj dlugosc boku: ";
   cin >> bok;
   pole = bok * bok;
   cout << "Pole kwadratu wynosi: " << pole << endl;
}
float PoleKola(float promien) {
       float pole;

       pole = 3.14 * promien * promien;
       return pole;
   }
   float PoleKwadratu(float bok) {
   float pole;

   pole = bok * bok;
   return pole;
   }
int main() {
   PoleKola();
   PoleKwadratu();
   float promien, bok;

   cout << "Podaj promien kola: ";
   cin >> promien;
   cout << "pole kola o promienu " << promien << " wynosi: " << PoleKola(promien) << endl;


   cout << "podaj dlugosc boku kwadratu: ";
   cin >> bok;
   cout << "pole kwadratu o boku " << bok << "wynosi: " << PoleKwadratu(bok) << endl;

return 0;

}


//    #include <iostream>
//     #define USD 0.26
//    #define GBP 0.19

//    using namespace std;

//    void PrzelicznikPlnNaUsd(float pln) {
//        cout << pln << " PLN = " <<  USD * pln << " USD" << endl;
//     }

//     void PrzlicznikPlnNaGbp(float pln) {
//         cout << pln << " PLN = " << GBP * pln << " GBP" << endl;
//     }

//     int main() {
//         float pln = 254;
//         PrzelicznikPlnNaUsd(pln);
//         PrzlicznikPlnNaGbp(pln);
//         return 0;
//     }

//#include <iostream>
//#include <math.h>
//#include <cctype>
//#include <ctime>
//using namespace std;

//int main() {
////    int x = 14, y = 17;
////    cout << fmax(x, y) <<endl;
////    cout << fmin(x, y) <<endl;
//char ciag[] = "Wersja 3.1";
//cout << isalpha(ciag[0]) << endl;
//cout << isdigit(ciag[0]) << endl;
//cout << isupper(ciag[0]) << endl;

//return 0;
//}