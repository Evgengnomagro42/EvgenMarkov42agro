#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;

void lift(){
    enum Levels {
    LEVEL_0 = 0,
    LEVEL_1,
    LEVEL_2,
    LEVEL_3,
    LEVEL_4,
    LEVEL_5,
    LEVEL_6,
    LEVEL_7
    };
short l;
tryAgain:
std::cout << "������ �᫮ �� 0 �� 7 �����⥫쭮: \n";
std::cin >> l;
//��� if ��� ��ࠡ�⪨ ���ࠢ��쭮�� ���짮��⥫�᪮�� �����
if (l < 0 || l > 7) {
cout << "��� ⠪��� �⠦�, ������ ����� �⠦� ������\n";
goto tryAgain;
}
cout << "�� ��ࠫ� " << l << " �⠦\n";
switch (l) {
case LEVEL_0:
std::cout << "�⠦ 0. Parking\n";
break;
case LEVEL_1:
std::cout << "�⠦ 1. Reception, administration, bytovyaia technika\n";
break;
case LEVEL_2:
std::cout << "�⠦ 2. Odejda i obyv, mebel\n";
break;
case LEVEL_3:
std::cout << "�⠦ 3. Knigi, apteki, santechnika, uvelir\n";
break;
case LEVEL_4:
std::cout << "�⠦ 4. avto zapchasti\n";
break;
case LEVEL_5:
std::cout << "�⠦ 5. Parc attractions\n";
break;
case LEVEL_6:
std::cout << "�⠦ 6. Cinema\n";
break;
case LEVEL_7:
std::cout << "�⠦ 7. Food cort\n";
break;
default:
std::cout << "Unknown";
break;
  }
tryAgain_level:
cout << "�롥�� ���쭥�襥 ����⢨� � ������ ������ ���� :\n"
        "��� ������ �����, ������ \'^\', \n"
        "�㦥� ��㣮� �⠦, ������ ��� �����, \n"
        "�易���� � ����஬, ������ \'L\', \n"
        "�맢��� ��࠭�, ������ \'S\', \n"
        "�㦭� ���������, ������ \'M\', \n"
        "�易���� � ���������樥�, ������ \'A\', \n"
        "�������� � ��室� �� ��, ������ \'E\', \n";
char a;
cin >> a;
 if (a == '^'){
  //����⨥ ���३ ���� � ��㪮�� ᨣ��� �� ����⨨ ���३
    cout << "���஦��, ���� ���뢠����" << '\n';
    // ��� �맮�� ���� �� ��㣮� �⠦ ��᫥ �ண㫪� �� �⮬� �⠦�
    goto tryAgain;
  } else if (a == '0'){
    cout << "�� ��ࠫ� 0 �⠦. Parking" << '\n';
    goto tryAgain/*_level*/;
    //��६�饭�� ���� �� �㦭� �⠦, ⠪ ��� ��� �⠦��
  } else if (a == '1'){
    cout << "�� ��ࠫ� �⠦ 1. Reception, administration, "
            "bytovyaia technika" << '\n';
    goto tryAgain_level;
  } else if (a == '2'){
    cout << "�� ��ࠫ� 2 �⠦. Odejda i obyv, mebel" << '\n';
    goto tryAgain_level;
  } else if (a == '3'){
    cout << "�� ��ࠫ� 3 �⠦. Knigi, apteki, santechnika, uvelir" << '\n';
    goto tryAgain_level;
  } else if (a == '4'){
    cout << "�� ��ࠫ� 4 �⠦. avto zapchasti" << '\n';
    goto tryAgain_level;
  } else if (a == '5'){
    cout << "�� ��ࠫ� 5 �⠦. Parc attractions" << '\n';
    goto tryAgain_level;
  } else if (a == '6'){
    cout << "�� ��ࠫ� 6 �⠦. Cinema" << '\n';
    goto tryAgain_level;
  } else if (a == '7'){
    cout << "�� ��ࠫ� 7 �⠦. Food cort" << '\n';
    goto tryAgain_level;
  } else if (a == 'L'){
    cout << "�맮� �����" << '\n';
  } else if (a == 'S'){
    cout << "�맮� ��࠭�" << '\n';
  } else if (a == 'M'){
    cout << "�맮� ��������" << '\n';
  } else if (a == 'A'){
    cout << "�맮� ���������樨" << '\n';
  } else {
    //�����襭�� �ணࠬ�� - ���� ᨬ���� � ������᪮� �᪫�����
    cout << "�� ��ࠫ� �������� � ��室�" << '\n';
    return;
    }
  }
