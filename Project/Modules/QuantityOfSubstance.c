#include <stdio.h>

/* ������� ��������������� ��������� ������ ���������� �������� */
/* �������� QOS - Quantity Of Substance, � ����. - ���������� �������� */

// <����> ---> <���������> //
double Mole2mMole(double QOS) {
	QOS = QOS * 1000;
	return QOS;
}

// <���������> ---> <����> //
double mMole2Mole(double QOS) {
	QOS = QOS / 1000;
	return QOS;
}

// <����> ---> <��������> //
double Mole2kMole(double QOS) {
	QOS = QOS / 1000;
	return QOS;
}

// <��������> ---> <����> //
double kMole2Mole(double QOS) {
	QOS = QOS * 1000;
	return QOS;
}

// <���������> ---> <��������> //
double mMole2kMole(double QOS) {
	QOS = QOS / 1000000;
	return QOS;
}

// <��������> ---> <���������> //
double kMole2mMole(double QOS) {
	QOS = QOS * 1000000;
	return QOS;
}

// <����> ---> <����-����> //
double Mole2PoundMole(double QOS) {
	QOS = QOS * 0.0022046226;
	return QOS;
}

// <����-����> ---> <����> //
double PoundMole2Mole(double QOS) {
	QOS = QOS / 0.0022046226;
	return QOS;
}

// <���������> ---> <����-����> //
double mMole2PoundMole(double QOS) {
	QOS = QOS * 1000 * 0.0022046226;
	return QOS;
}

// <����-����> ---> <���������> //
double PoundMole2mMole(double QOS) {
	QOS = (QOS * 1000) / 0.0022046226;
	return QOS;
}

// <��������> ---> <����-����> //
double kMole2PoundMole(double QOS) {
	QOS = (QOS / 1000) * 0.0022046226;
	return QOS;
}

// <����-����> ---> <��������> //
double PoundMole2kMole(double QOS) {
	QOS = (QOS / 1000) / 0.0022046226;
	return QOS;
}

// <����> ---> <���������> //
double Mole2MkMole(double QOS) {
	QOS = QOS * 1000000;
	return QOS;
}

// <���������> ---> <����> //
double MkMole2Mole(double QOS) {
	QOS = QOS / 1000000;
	return QOS;
}

// <��������> ---> <���������> //
double kMole2MkMole(double QOS) {
	QOS = QOS * 1000000000;
	return QOS;
}

// <���������> ---> <��������> //
double MkMole2kMole(double QOS) {
	QOS = QOS / 1000000000;
	return QOS;
}

// <���������> ---> <���������> //
double mMole2MkMole(double QOS) {
	QOS = QOS * 1000;
	return QOS;
}

// <���������> ---> <���������> //
double MkMole2mMole(double QOS) {
	QOS = QOS / 1000;
	return QOS;
}

// <����-����> ---> <���������> //
double PoundMole2MkMole(double QOS) {
	QOS = (QOS * 1000000) / 0.0022046226;
	return QOS;
}

// <���������> ---> <����-����> //
double MkMole2PoundMole(double QOS) {
	QOS = QOS * 1000000 * 0.0022046226;
	return QOS;
}

// <����> ---> <��������> //
double Mole2MgMole(double QOS) {
	QOS = QOS / 1000000;
	return QOS;
}

// <��������> ---> <����> //
double MgMole2Mole(double QOS) {
	QOS = QOS * 1000000;
	return QOS;
}

// <��������> ---> <��������> //
double kMole2MgMole(double QOS) {
	QOS = QOS / 1000;
	return QOS;
}

// <��������> ---> <��������> //
double MgMole2kMole(double QOS) {
	QOS = QOS * 1000;
	return QOS;
}

// <���������> ---> <��������> //
double mMole2MgMole(double QOS) {
	QOS = QOS / 1000000000;
	return QOS;
}

// <��������> ---> <���������> //
double MgMole2mMole(double QOS) {
	QOS = QOS * 1000000000;
	return QOS;
}

// <���������> ---> <��������> //
double MkMole2MgMole(double QOS) {
	QOS = QOS / 1000000000000;
	return QOS;
}

// <��������> ---> <���������> //
double MgMole2MkMole(double QOS) {
	QOS = QOS * 1000000000000;
	return QOS;
}

// <����-����> ---> <��������> //
double PoundMole2MgMole(double QOS) {
	QOS = (QOS * 1000000) / 0.0022046226;
	return QOS;
}

// <��������> ---> <����-����> //
double MgMole2PoundMole(double QOS) {
	QOS = (QOS / 1000000) * 0.0022046226;
	return QOS;
}
