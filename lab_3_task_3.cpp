#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <stdio.h>
#include <bitset>
#include <sstream>
#include "lab_3.h"
using namespace std;

int func1() {
  cout << "\n��������� ���樠������ ⨯� int = ";
  int iValue = 20;
  cout << iValue << '\n';
  return iValue;
  }
int func2() {
  cout << "\n��ﬠ� ���樠������ ⨯� int = ";
  int iValue(60);
  cout << iValue << '\n';
  return iValue;
  }
int func3() {
  cout << "\nuniform ���樠������ ⨯� int = ";
  int iValue{100};
  cout << iValue << '\n';
  return iValue;
  }

bool func4() {
  cout << "\n��������� ���樠������ ⨯� bool = ";
  bool cValue = true;
  cout << boolalpha << cValue << '\n';
  return cValue;
  }
bool func5() {
  cout << "\n��ﬠ� ���樠������ ⨯� bool = ";
  bool cValue(true);
  cout << boolalpha << cValue << '\n';
  return cValue;
  }
bool func6() {
  cout << "\nuniform ���樠������ ⨯� bool = ";
  bool cValue{true};
  cout << boolalpha << cValue << '\n';
  return cValue;
  }

char func7() {
  cout << "\n��������� ���樠������ ⨯� char = ";
  char cValue = 'c';
  cout << cValue << '\n';
  return cValue;
  }
  char func8() {
  cout << "\n��ﬠ� ���樠������ ⨯� char = ";
  char cValue('p');
  cout << cValue << '\n';
  return cValue;
  }
  char func9() {
  cout << "\nuniform ���樠������ ⨯� char = ";
  char cValue{'p'};
  cout << cValue << '\n';
  return cValue;
  }

long func10() {
  cout << "\n��������� ���樠������ ⨯� long = ";
  long lValue = 10;
  cout << lValue << '\n';
  return lValue;
  }
long func11() {
  cout << "\n��ﬠ� ���樠������ ⨯� long = ";
  long lValue(30);
  cout << lValue << '\n';
  return lValue;
  }
long func12() {
  cout << "\nuniform ���樠������ ⨯� long = ";
  long lValue{50};
  cout << lValue << '\n';
  return lValue;
  }
  auto func(int iValue) -> int;
  auto func(int iValue) -> int {
  return iValue*10;
  }

void initial() {
  cout << "���� ���樠����樨 ࠧ��� ⨯�� ������" << '\n';
  func1() << '\n';
  func2() << '\n';
  func3() << '\n';
  func4() << '\n';
  func5() << '\n';
  func6() << '\n';
  func7() << '\n';
  func8() << '\n';
  func9() << '\n';
  func10() << '\n';
  func11() << '\n';
  func12() << '\n';
  auto result = func(20);
  std::cout << "\nresult = " << result << '\n';
  }
