#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;
/*� ������ ��㬥�⠬� (������⢮�) ����� ��뢠�� ������ �㭪��
 *  void printChar (char a=?a?, char b=?b?, char c=?c?, char d=?d?),
 * � ��।����� �� ��ࠬ���� �� 㬮�砭��, �ਢ���� �� ��ਠ���
 * �맮�� �㭪樨 printChar()*/

void printChar (char a='a', char b='b', char c='c', char d='d'){
 std::cout << "a: " << a << '\n';
 std::cout << "b: " << b << '\n';
 std::cout << "c: " << c << '\n';
 std::cout << "d: " << d << '\n';
}
void var_vyzova() {
 printChar('a', 'b', 'c', 'd');
 cout << '\n';
 printChar('a', 'b', 'c');
 cout << '\n';
 printChar('a', 'b');
 cout << '\n';
 printChar('a');
}
