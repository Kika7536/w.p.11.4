#include<iostream>

using namespace std;

/*�������
15 �����, 14 �� ������� ��������������� (���� � ����� ��������� ��������� �� 1 ������ �����������)
������� � � - ������ ��� ����������� ������� ������������������

��������� ���� �������� ��� ������, �� � ����� ������� ���

�� ����� ������� ������� ����������� ����� 15-�� ��������� 
������� ����� ������������������ �� 15 ����� �� ����   n + n+1 + n+2... + n+14 + X

� ����� ������ ������������� ������� ����� ����� 

� + (����������� ����� - ����� ������������������, ��� ��������� ������� ����� �������)

*/



int main() {
	int mass[] = { 114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118 };
	int fsum = 0;
	int psum = 0;
	int res;
	int x = mass[0];

	for (int i = 0; i < 15; i++) {
		fsum += mass[i];
		if (mass[i] < x) x = mass[i];
		
	}
	

	for (int i = 0; i < 15; i++) {
		psum += x + i;
		
	}psum -= 14;
	

	
		res = x + (fsum - psum);
	

	cout << res;
	
}