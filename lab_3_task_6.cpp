#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;
void preobraz_tipov_dannykh(){
    cout << "������ 楫� �᫠ \"x\" � \"k\", "
            "�஡�� �᫠ \"y\" � \"z\" \n";
    int x /*= 9*/;
    unsigned short k /*= 2*/;
    float y /*= 3.6*/;
    double z /*= 1.8*/;

    cin >> x >> k >> y >> z;
    cout << "int x = " << x << endl;
    cout << "unsigned short k = " << k << endl;
    cout << "float y = " << y << endl;
    cout << "double z = " << z << endl;

    cout << "���� �८�ࠧ������" << '\n';
    int i = (x+y)*z+k ;//24 � ���᮫�,
    cout << "i = " << i << endl;//24,68 �� ��������.
    k = x-y/z ;//7 � ���᮫�,
    cout << "k = " << k << endl;//7 �� ��������.
    z = x*y+z/x;//32.6 � ���᮫�,
    cout << "z = " << z << endl;//32,6 �� ��������.
    unsigned int ui = x/y+k;//9 � ���᮫�,
    cout << "ui = " << ui << endl;//4,5 �� ��������.
    /*short s = (x%(x/y)); �� ���� �८�ࠧ������ ��諮��
    * ���������஢���, ⠪ ��� Qt �뤠� �訡��:
    * main.cpp:49:13: error: invalid operands to binary expression
    * ('int' and 'float'). ��  ����⠭���� ��६����� � 楫��᫥���
    * ⨯�� ������ ⠪�� �訡�� Qt �� �뢮���. ��� x% Qt �ਭ����� ��ࠦ����
    * ((x/y)) ��� �८�ࠧ������*/

    cout << "�� �८�ࠧ������ static_cast\n";
    int i1 {static_cast<int>((x+y)*z+k)};                  //417 � ���᮫�,
    cout << "i1 = " << i1 << endl;                         //24,68 �� ��������.
    unsigned short k1 {static_cast<unsigned short>(x-y/z)};//8 � ���᮫�,
    cout << "k1 = " << k1 << endl;                         //7 �� ��������.
    double z1 {static_cast<double>(x*y+z/x)};              //36,02222 � ���᮫�,
    cout << "z1 = " << z1 << endl;                         //32,6 �� ��������.
    unsigned int ui1 {static_cast<unsigned int>(x/y+k)};   //9 � ���᮫�,
    cout << "ui1 = " << ui1 << endl;                       //4,5 �� ��������.
    /*short s1 { static_cast<short>(x%(x/y)) };
    cout << "s1 = " << s1 << '\n'; �� �� �८�ࠧ������
    * ��諮�� ���������஢���, ⠪ ��� Qt �뤠� �訡��:
    * main.cpp:64:33: error: invalid operands to binary expression
    * ('int' and 'float'). ��  ����⠭���� ��६����� � 楫��᫥���
    * ⨯�� ������ ⠪�� �訡�� Qt �� �뢮���. ��� x% Qt �ਭ����� ��ࠦ����
    * ((x/y)) ��� �८�ࠧ������ */

    cout << "�� �८�ࠧ������ �-style cast\n";
    int i2 = (int)((x+y)*z+k) ;                  //398 � ���᮫�,
    cout << "i2 = " << i2 << endl;             //24.68 �� ��������.
    unsigned short k2 = (unsigned short)(x-y/z) ;//8 � ���᮫�,
    cout << "k2 = " << k2 << endl;             //7 �� ��������.
    double z2 = (double)(x*y+z/x);               //36.0222 � ���᮫�,
    cout << "z2 = " << z2 << endl;             //32.6 �� ��������.
    unsigned int ui2 = (unsigned int)(x/y+k);    //9 � ���᮫�,
    cout << "ui2 = " << ui2 << endl;           //4.5 �� ��������.
    /*short s2 = (short)((x%(x/y)));
    *cout << "s2 = " << s2 << '\n'; �� �� �८�ࠧ������
    *��諮�� ���������஢���, ⠪ ��� Qt �뤠� �訡��:
    *main.cpp:81:22: error: invalid operands to binary expression
    *('int' and 'float'). ��  ����⠭���� ��६����� � 楫��᫥���
    * ⨯�� ������ ⠪�� �訡�� Qt �� �뢮���. ��� x% Qt �ਭ����� ��ࠦ����
    * ((x/y)) ��� �८�ࠧ������ */
  }
