#include <stdio.h>
// DONE;
/* ������� ��������������� ��������� ������ ��������� ���� */

// <�������> ---> <�������> //
double Degree2Radian(double ANGLE) {
	ANGLE = ANGLE / 57.295779513;
	return ANGLE;
}

// <�������> ---> <�������> //
double Radian2Degree(double ANGLE) {
	ANGLE = ANGLE * 57.295779513;
	return ANGLE;
}

// <�������> ---> <������> //
double Degree2Min(double ANGLE) {
	ANGLE = ANGLE * 60;
	return ANGLE;
}

// <������> ---> <�������> //
double Min2Degree(double ANGLE) {
	ANGLE = ANGLE / 60;
	return ANGLE;
}

// <�������> ---> <������> //
double Radian2Min(double ANGLE) {
	ANGLE = ANGLE * 60 * 57.295779513;
	return ANGLE;
}

// <������> ---> <�������> //
double Min2Radian(double ANGLE) {
	ANGLE = ANGLE / (60 * 57.295779513);
	return ANGLE;
}

// <�������> ---> <�������> //
double Degree2Sec(double ANGLE) {
	ANGLE = ANGLE * 3600;
	return ANGLE;
}

// <�������> ---> <�������> //
double Sec2Degree(double ANGLE) {
	ANGLE = ANGLE / 3600;
	return ANGLE;
}

// <�������> ---> <�������> //
double Radian2Sec(double ANGLE) {
	ANGLE = ANGLE * 3600 * 57.295779513;
	return ANGLE;
}

// <�������> ---> <�������> //
double Sec2Radian(double ANGLE) {
	ANGLE = ANGLE / (3600 * 57.295779513);
	return ANGLE;
}

// <������> ---> <�������> //
double Min2Sec(double ANGLE) {
	ANGLE = ANGLE * 60;
	return ANGLE;
}

// <�������> ---> <������> //
double Sec2Min(double ANGLE) {
	ANGLE = ANGLE / 60;
	return ANGLE;
}

// <�������> ---> <�����> //
double Degree2Grad(double ANGLE) {
	ANGLE = ANGLE / 0.9;
	return ANGLE;
}

// <�����> ---> <�������> //
double Grad2Degree(double ANGLE) {
	ANGLE = ANGLE * 0.9;
	return ANGLE;
}

// <������> ---> <�����> //
double Min2Grad(double ANGLE) {
	ANGLE = ANGLE / (0.9 * 60);
	return ANGLE;
}

// <�����> ---> <������> //
double Grad2Min(double ANGLE) {
	ANGLE = ANGLE * 0.9 * 60;
	return ANGLE;
}

// <�������> ---> <�����> //
double Sec2Grad(double ANGLE) {
	ANGLE = ANGLE / (0.9 * 3600);
	return ANGLE;
}

// <�����> ---> <�������> //
double Grad2Sec(double ANGLE) {
	ANGLE = ANGLE * 0.9 * 3600;
	return ANGLE;
}

// <�������> ---> <�����> //
double Radian2Grad(double ANGLE) {
	ANGLE = ANGLE * (57.295779513 / 0.9);
	return ANGLE;
}

// <�����> ---> <�������> //
double Grad2Radian(double ANGLE) {
	ANGLE = ANGLE / 57.295779513 / 0.9;
	return ANGLE;
}

// <���������> ---> <�������> //
double Sextant2Degree(double ANGLE) {
	ANGLE = ANGLE * 60;
	return ANGLE;
}

// <�������> ---> <���������> //
double Degree2Sextant(double ANGLE) {
	ANGLE = ANGLE / 60;
	return ANGLE;
}

// <���������> ---> <������> //
double Sextant2Min(double ANGLE) {
	ANGLE = ANGLE * 3600;
	return ANGLE;
}

// <������> ---> <���������> //
double Min2Sextant(double ANGLE) {
	ANGLE = ANGLE / 3600;
	return ANGLE;
}

// <���������> ---> <�������> //
double Sextant2Sec(double ANGLE) {
	ANGLE = ANGLE * 216000;
	return ANGLE;
}

// <�������> ---> <���������> //
double Sec2Sextant(double ANGLE) {
	ANGLE = ANGLE / 216000;
	return ANGLE;
}

// <���������> ---> <�����> //
double Sextant2Grad(double ANGLE) {
	ANGLE = (ANGLE * 60) / 0.9;
	return ANGLE;
}

// <�����> ---> <���������> //
double Grad2Sextant(double ANGLE) {
	ANGLE = ANGLE * (0.9 / 60);
	return ANGLE;
}

// <���������> ---> <�������> //
double Sextant2Radian(double ANGLE) {
	ANGLE = (ANGLE * 60) / 57.295779513;
	return ANGLE;
}

// <�������> ---> <���������> //
double Radian2Sextant(double ANGLE) {
	ANGLE = ANGLE * (57.295779513 / 60);
	return ANGLE;
}

// <�����> ---> <�������> //
double Rumb2Degree(double ANGLE) {
	ANGLE = ANGLE * 11.25;
	return ANGLE;
}

// <�������> ---> <�����> //
double Degree2Rumb(double ANGLE) {
	ANGLE = ANGLE / 11.25;
	return ANGLE;
}

// <�����> ---> <�������> //
double Rumb2Radian(double ANGLE) {
	ANGLE = (ANGLE * 11.25) / 57.295779513;
	return ANGLE;
}

// <�������> ---> <�����> //
double Radian2Rumb(double ANGLE) {
	ANGLE = ANGLE * (57.295779513 / 11.25);
	return ANGLE;
}

// <�����> ---> <������> //
double Rumb2Min(double ANGLE) {
	ANGLE = ANGLE * 11.25 * 60;
	return ANGLE;
}

// <������> ---> <�����> //
double Min2Rumb(double ANGLE) {
	ANGLE = ANGLE / (11.25 * 60);
	return ANGLE;
}

// <�����> ---> <�������> //
double Rumb2Sec(double ANGLE) {
	ANGLE = ANGLE * 11.25 * 3600;
	return ANGLE;
}

// <�������> ---> <�����> //
double Sec2Rumb(double ANGLE) {
	ANGLE = ANGLE / (11.25 * 3600);
	return ANGLE;
}

// <�����> ---> <�����> //
double Rumb2Grad(double ANGLE) {
	ANGLE = (ANGLE * 11.25) / 0.9;
	return ANGLE;
}

// <�����> ---> <�����> //
double Grad2Rumb(double ANGLE) {
	ANGLE = ANGLE * (0.9 / 11.25);
	return ANGLE;
}

// <�����> ---> <���������> //
double Rumb2Sextant(double ANGLE) {
	ANGLE = (ANGLE * 11.25) / 60;
	return ANGLE;
}

// <���������> ---> <�����> //
double Sextant2Rumb(double ANGLE) {
	ANGLE = ANGLE * (60 / 11.25);
	return ANGLE;
}
