#include <Windows.h>
#include <iostream>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpCMDLine, INT nCmdShow)
{
	MessageBox(NULL, L"HelloWord! \n ��� ���� ���������", L"Hello WinAPI", MB_YESNOCANCEL | MB_ICONERROR);
	return 0;

//
//	���������� ������� ����������
//� ������������ ������� ������� ��������� ��� �������� ����� ���� ������ ������
//� ������� ���� ���� ���� ���������
//��������� ���� (WndProc) ��� ����� ������� �������������� �� ���� ���������� 
//��� ������� ���� � ��� ���������� � ����� ����.
//����� ��������� � ������ ���� �������������� ��� ����������
//���� � ���� ��������� ���� ����� �������������� ��� ������ ����
//����� ��� ������ ���� ����� ��������� ���������
//
//��������� ���� ������ ��������� 4 ���������
//- ����
//-���������
//-��������� ���������
//
//��� ���������� � ��������� ������ ������� � �������� ������������ ����������
//��� ������ ������� ����� ���������� �� 4� ���������
//���������� ������ ��������� ������� �� HIMORD(������� �����) LOWWORD (������� �����)

}