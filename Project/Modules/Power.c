#include <stdio.h>

/* ������� ��������������� ��������� ������ �������� */

// <����> ---> <��������> //
double Vat2kVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <��������> ---> <����> //
double kVat2Vat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <����> ---> <��������> //
double Vat2mVat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <��������> ---> <����> //
double mVat2Vat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <��������> ---> <��������> //
double kVat2mVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <��������> ---> <��������> //
double mVat2kVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <���������-����-���� � �������> ---> <����> //
double kgSilaMvS2Vat(double POWER) {
	POWER = POWER * 9.81;
	return POWER;
}

// <����> ---> <���������-����-���� � �������> //
double Vat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81;
	return POWER;
}

// <���������-����-���� � �������> ---> <��������> //
double kgSilaMvS2kVat(double POWER) {
	POWER = (POWER * 9.81) / 1000;
	return POWER;
}

// <��������> ---> <���������-����-���� � �������> //
double kVat2kgSilaMvS(double POWER) {
	POWER = (POWER * 1000) / 9.81;
	return POWER;
}

// <���������-����-���� � �������> ---> <��������> //
double kgSilaMvS2mVat(double POWER) {
	POWER = (POWER * 9.81) / 1000000;
	return POWER;
}

// <��������> ---> <���������-����-���� � �������> //
double mVat2kgSilaMvS(double POWER) {
	POWER = (POWER * 1000000) / 9.81;
	return POWER;
}

// <����> ---> <��� � �������> //
double Vat2ErgS(double POWER) {
	POWER = POWER  * 10000000;
	return POWER;
}

// <��� � �������> ---> <����> //
double ErgS2Vat(double POWER) {
	POWER = POWER / 10000000;
	return POWER;
}

// <��������> ---> <��� � �������> //
double kVat2ErgS(double POWER) {
	POWER = POWER  * 10000000000;
	return POWER;
}

// <��� � �������> ---> <��������> //
double ErgS2kVat(double POWER) {
	POWER = POWER / 10000000000;
	return POWER;
}

// <��������> ---> <��� � �������> //
double mVat2ErgS(double POWER) {
	POWER = POWER  * 10000000000000;
	return POWER;
}

// <��� � �������> ---> <��������> //
double ErgS2mVat(double POWER) {
	POWER = POWER / 10000000000000;
	return POWER;
}

// <���������-����-���� � �������> ---> <��� � �������> //
double kgSilaMvS2ErgS(double POWER) {
	POWER = POWER  * 9.81 * 10000000;
	return POWER;
}

// <��� � �������> ---> <���������-����-���� � �������> //
double ErgS2kgSilaMvS(double POWER) {
	POWER = POWER / (9.81 * 10000000);
	return POWER;
}

// <����> ---> <��������� ����(�����������)> //
double Vat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5;
	return POWER;
}

// <��������� ����(�����������)> ---> <����> //
double HorsePowMetr2Vat(double POWER) {
	POWER = POWER * 735.5;
	return POWER;
}

// <��������> ---> <��������� ����(�����������)> //
double kVat2HorsePowMetr(double POWER) {
	POWER = (POWER  * 1000) / 735.5;
	return POWER;
}

// <��������� ����(�����������)> ---> <��������> //
double HorsePowMetr2kVat(double POWER) {
	POWER = (POWER * 735.5) / 1000;
	return POWER;
}

// <��������> ---> <��������� ����(�����������)> //
double mVat2HorsePowMetr(double POWER) {
	POWER = (POWER  * 1000000) / 735.5;
	return POWER;
}

// <��������� ����(�����������)> ---> <��������> //
double HorsePowMetr2mVat(double POWER) {
	POWER = (POWER * 735.5) / 1000000;
	return POWER;
}

// <���������-����-���� � �������> ---> <��������� ����(�����������)> //
double kgSilaMvS2HorsePowMetr(double POWER) {
	POWER = POWER / 75;
	return POWER;
}

// <��������� ����(�����������)> ---> <���������-����-���� � �������> //
double HorsePowMetr2kgSilaMvS(double POWER) {
	POWER = POWER * 75;
	return POWER;
}

// <��� � �������> ---> <��������� ����(�����������)> //
double ErgS2HorsePowMetr(double POWER) {
	POWER = POWER / (7.355 * 1000000000);
	return POWER;
}

// <��������� ����(�����������)> ---> <��� � �������> //
double HorsePowMetr2ErgS(double POWER) {
	POWER = POWER * 7.355 * 1000000000;
	return POWER;
}

// <����> ---> <��������� ����(����������)> //
double Vat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7;
	return POWER;
}

// <��������� ����(����������)> ---> <����> //
double HorsePowEng2Vat(double POWER) {
	POWER = POWER * 745.7;
	return POWER;
}

// <��������> ---> <��������� ����(����������)> //
double kVat2HorsePowEng(double POWER) {
	POWER = (POWER * 1000) / 745.7;
	return POWER;
}

// <��������� ����(����������)> ---> <��������> //
double HorsePowEng2kVat(double POWER) {
	POWER = (POWER * 745.7) / 1000;
	return POWER;
}

// <��������> ---> <��������� ����(����������)> //
double mVat2HorsePowEng(double POWER) {
	POWER = (POWER * 1000000) / 745.7;
	return POWER;
}

// <��������� ����(����������)> ---> <��������> //
double HorsePowEng2mVat(double POWER) {
	POWER = (POWER * 745.7) / 1000000;
	return POWER;
}

// <���������-����-���� � �������> ---> <��������� ����(����������)> //
double kgSilaMvS2HorsePowEng(double POWER) {
	POWER = POWER / 76.04;
	return POWER;
}

// <��������� ����(����������)> ---> <���������-����-���� � �������> //
double HorsePowEng2kgSilaMvS(double POWER) {
	POWER = POWER * 76.04;
	return POWER;
}

// <��� � �������> ---> <��������� ����(����������)> //
double ErgS2HorsePowEng(double POWER) {
	POWER = POWER / (7.457 * 1000000000);
	return POWER;
}

// <��������� ����(����������)> ---> <��� � �������> //
double HorsePowEng2ErgS(double POWER) {
	POWER = POWER * 7.457 * 1000000000;
	return POWER;
}

// <��������� ����(�����������)> ---> <��������� ����(����������)> //
double HorsePowMetr2HorsePowEng(double POWER) {
	POWER = POWER / 1.014;
	return POWER;
}

// <��������� ����(����������)> ---> <��������� ����(�����������)> //
double HorsePowEng2HorsePowMetr(double POWER) {
	POWER = POWER * 1.014;
	return POWER;
}

// <����> ---> <���������> //
double Vat2MlVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <���������> ---> <����> //
double MlVat2Vat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <��������> ---> <���������> //
double kVat2MlVat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <���������> ---> <��������> //
double MlVat2kVat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <��������> ---> <���������> //
double mVat2MlVat(double POWER) {
	POWER = POWER * 1000000000;
	return POWER;
}

// <���������> ---> <��������> //
double MlVat2mVat(double POWER) {
	POWER = POWER / 1000000000;
	return POWER;
}

// <���������> ---> <���������-����-���� � �������> //
double MlVat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81 / 1000;
	return POWER;
}

// <���������-����-���� � �������> ---> <���������> //
double kgSilaMvS2MlVat(double POWER) {
	POWER = (POWER * 9.81) / 1000;
	return POWER;
}

// <���������> ---> <��� � �������> //
double MlVat2ErgS(double POWER) {
	POWER = POWER  * 10000;
	return POWER;
}

// <��� � �������> ---> <���������> //
double ErgS2MlVat(double POWER) {
	POWER = POWER / 10000;
	return POWER;
}

// <���������> ---> <��������� ����(�����������)> //
double MlVat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5 / 1000;
	return POWER;
}

// <��������� ����(�����������)> ---> <���������> //
double HorsePowMetr2MlVat(double POWER) {
	POWER = (POWER * 735.5) / 1000;
	return POWER;
}

// <���������> ---> <��������� ����(����������)> //
double MlVat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7 / 1000;
	return POWER;
}

// <��������� ����(����������)> ---> <���������> //
double HorsePowEng2MlVat(double POWER) {
	POWER = (POWER * 745.7) / 1000;
	return POWER;
}

// <���������> ---> <���������> //
double MlVat2MkVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <���������> ---> <���������> //
double MkVat2MlVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <����> ---> <���������> //
double Vat2MkVat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <���������> ---> <����> //
double MkVat2Vat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <��������> ---> <���������> //
double kVat2MkVat(double POWER) {
	POWER = POWER * 1000000000;
	return POWER;
}

// <���������> ---> <��������> //
double MkVat2kVat(double POWER) {
	POWER = POWER / 1000000000;
	return POWER;
}

// <��������> ---> <���������> //
double mVat2MkVat(double POWER) {
	POWER = POWER * 1000000000000;
	return POWER;
}

// <���������> ---> <��������> //
double MkVat2mVat(double POWER) {
	POWER = POWER / 1000000000000;
	return POWER;
}

// <���������> ---> <���������-����-���� � �������> //
double MkVat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81 / 1000000;
	return POWER;
}

// <���������-����-���� � �������> ---> <���������> //
double kgSilaMvS2MkVat(double POWER) {
	POWER = (POWER * 9.81) / 1000000;
	return POWER;
}

// <���������> ---> <��� � �������> //
double MkVat2ErgS(double POWER) {
	POWER = POWER  * 10;
	return POWER;
}

// <��� � �������> ---> <���������> //
double ErgS2MkVat(double POWER) {
	POWER = POWER / 10;
	return POWER;
}

// <���������> ---> <��������� ����(�����������)> //
double MkVat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5 / 1000000;
	return POWER;
}

// <��������� ����(�����������)> ---> <���������> //
double HorsePowMetr2MkVat(double POWER) {
	POWER = (POWER * 735.5) / 1000000;
	return POWER;
}

// <���������> ---> <��������� ����(����������)> //
double MkVat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7 / 1000000;
	return POWER;
}

// <��������� ����(����������)> ---> <���������> //
double HorsePowEng2MkVat(double POWER) {
	POWER = (POWER * 745.7) / 1000000;
	return POWER;
}
