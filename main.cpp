/*
* ������ୠ� ࠡ�� No 3
* ����: ��᫥������� �㭪権 �++ � IDE Qt Creator
*
* Developer: ��મ� ������� ��ࣥ����
* OS: Windows
* locale (����஢��): IBM 866
*/
#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include <string>
#include "lab_3.h"

int main() {
#define Unit 4

#if Unit == 1
std::cout << "������� 1" << std::endl;
sposob_recheniya();
#elif Unit == 2
std::cout << "������� 2" << std::endl;
var_vyzova();
#elif Unit == 3
std::cout << "������� 3" << std::endl;
initial();
#elif Unit == 4
std::cout << "������� 4" << std::endl;
printAnimal(Animals::CAT);
printNumberOfLegs(Legs::CAT_LEGS);
#elif Unit == 5
std::cout << "������� 5" << std::endl;
min_max();
#elif Unit == 6
std::cout << "������� 6" << std::endl;
preobraz_tipov_dannykh();
#else
std::cout << "������� 7" << std::endl;
lift();
#endif
return 0;
}




















