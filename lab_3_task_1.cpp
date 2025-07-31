#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <stdio.h>
#include <bitset>
#include <sstream>
#include "lab_3.h"
using namespace std;

enum class Zadachis {
CARTY,
COSTI,
BYKVI
};

//��ਠ�� �襭�� �१ ���� if-else
void func_veroyatn(double vsego_var, double etot_var, Zadachis c)  {
  if (c == Zadachis::CARTY){
    double vsego_var = 52;
    double etot_var = 4;
    cout << "����⭮���, �� �믠��� ��, = " << setprecision(2) << etot_var/vsego_var << '\n';
    } else if (c == Zadachis::COSTI){
      double vsego_var = 36;
      double etot_var = 6;
      cout << "����⭮���, �� �믠��� 7 �� 2-� ������, = " << setprecision(2) << etot_var/vsego_var << '\n';
    } else if (c == Zadachis::BYKVI){
    double vsego_var = 6;
    double etot_var = 1;
    cout << "����⭮���, �� ॡ񭮪 ᫮��� ᫮�� \"����\", = " << setprecision(2) << etot_var/vsego_var << '\n';
    }
  }

//��ਠ�� �襭�� �१ switch
void printZadachis(Zadachis some) {
 switch (some) {

 case Zadachis::CARTY : {
double vsego_var = 52;
double etot_var = 4;
cout << "����⭮���, �� �믠��� ��, = " << setprecision(2) << etot_var/vsego_var << '\n';
break;
}
case Zadachis::COSTI: {
double vsego_var = 36;
double etot_var = 6;
cout << "����⭮���, �� �믠��� 7 �� 2-� ������, = " << setprecision(2) << etot_var/vsego_var << '\n';
break;
}
case Zadachis::BYKVI: {
double vsego_var = 6;
double etot_var = 1;
cout << "����⭮���, �� ॡ񭮪 ᫮��� ᫮�� \"����\", = " << setprecision(2) << etot_var/vsego_var << '\n';
break;
}
default:
std::cout << "Unknown"; // �᫨ ��祣� �� ᮢ����
break;
    }
  }

void sposob_recheniya(){
  cout << "����� �१ if-else" << "\n";
  func_veroyatn(52, 4, Zadachis::CARTY);
  func_veroyatn(36,6, Zadachis::COSTI);
  func_veroyatn(6, 1, Zadachis::BYKVI);

  cout << "\n����� �१ switch" << "\n";
  printZadachis(Zadachis::CARTY);
  printZadachis(Zadachis::COSTI);
  printZadachis(Zadachis::BYKVI);
  }

