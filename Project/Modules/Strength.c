#include <stdio.h>
// DONE;
/* ������� ��������������� ��������� ������ ��������� ���� */

// <�������> ---> <�����������> //
double Newton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <�����������> ---> <�������> //
double kNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <�������> ---> <������������> //
double Newton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <������������> ---> <�������> //
double mNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <������������> ---> <�����������> //
double mNewton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <�����������> ---> <������������> //
double kNewton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}

// <�������> ---> <�����������> //
double Newton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <�����������> ---> <�������> //
double MgNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}

// <������������> ---> <�����������> //
double mNewton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000000;
	return STRENGTH;
}

// <�����������> ---> <������������> //
double MgNewton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000000;
	return STRENGTH;
}

// <�����������> ---> <�����������> //
double kNewton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <�����������> ---> <�����������> //
double MgNewton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <�������> ---> <������������> //
double Newton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}

// <������������> ---> <�������> //
double MkNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <������������> ---> <������������> //
double mNewton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <������������> ---> <������������> //
double MkNewton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <�����������> ---> <������������> //
double kNewton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000000;
	return STRENGTH;
}

// <������������> ---> <�����������> //
double MkNewton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000000;
	return STRENGTH;
}

// <�����������> ---> <������������> //
double MgNewton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000000000;
	return STRENGTH;
}

// <������������> ---> <�����������> //
double MkNewton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000000000;
	return STRENGTH;
}

// <�������> ---> <���������-����> //
double Newton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 0.101972;
	return STRENGTH;
}

// <���������-����> ---> <�������> //
double kgsNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 0.101972;
	return STRENGTH;
}

// <������������> ---> <���������-����> //
double mNewton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000 * 0.101972;
	return STRENGTH;
}

// <���������-����> ---> <������������> //
double kgsNewton2mNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.101972) * 1000;
	return STRENGTH;
}

// <������������> ---> <���������-����> //
double MkNewton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000 * 0.101972;
	return STRENGTH;
}

// <���������-����> ---> <������������> //
double kgsNewton2MkNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.101972) * 1000000;
	return STRENGTH;
}

// <�����������> ---> <���������-����> //
double kNewton2kgsNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 1000) * 0.101972;
	return STRENGTH;
}

// <���������-����> ---> <�����������> //
double kgsNewton2kNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.101972) * 1000;
	return STRENGTH;
}

// <�����������> ---> <���������-����> //
double MgNewton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000 * 0.101972;
	return STRENGTH;
}

// <���������-����> ---> <�����������> //
double kgsNewton2MgNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.101972) * 1000000;
	return STRENGTH;
}

// <�������> ---> <����-����> //
double Newton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 0.225;
	return STRENGTH;
}

// <����-����> ---> <�������> //
double fsNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 0.225;
	return STRENGTH;
}

// <�����������> ---> <����-����> //
double kNewton2fsNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 1000) * 0.225;
	return STRENGTH;
}

// <����-����> ---> <�����������> //
double fsNewton2kNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.225) * 1000;
	return STRENGTH;
}

// <�����������> ---> <����-����> //
double MgNewton2fsNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 1000000) * 0.225;
	return STRENGTH;
}

// <����-����> ---> <�����������> //
double fsNewton2MgNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.225) * 1000000;
	return STRENGTH;
}

// <������������> ---> <����-����> //
double mNewton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000 * 0.225;
	return STRENGTH;
}

// <����-����> ---> <������������> //
double fsNewton2mNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.225) * 1000;
	return STRENGTH;
}

// <������������> ---> <����-����> //
double MkNewton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000 * 0.225;
	return STRENGTH;
}

// <����-����> ---> <������������> //
double fsNewton2MkNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.225) * 1000000;
	return STRENGTH;
}

// <���������-����> ---> <����-����> //
double kgsNewton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 2.205;
	return STRENGTH;
}

// <����-����> ---> <���������-����> //
double fsNewton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 2.205;
	return STRENGTH;
}
