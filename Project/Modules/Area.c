#include <stdio.h>

/* ������� ��������������� ��������� ������ ������� */

// <�����> ---> <���������> //
double Herz2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000;
	return FREQUENCY;
}

// <���������> ---> <�����> //
double kHerz2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000;
	return FREQUENCY;
}

// <�����> ---> <����������> //
double Herz2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000;
	return FREQUENCY;
}

// <����������> ---> <�����> //
double MlHerz2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000;
	return FREQUENCY;
}

// <���������> ---> <����������> //
double kHerz2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000;
	return FREQUENCY;
}

// <����������> ---> <���������> //
double MlHerz2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000;
	return FREQUENCY;
}

// <�����> ---> <����������> //
double Herz2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000;
	return FREQUENCY;
}

// <����������> ---> <�����> //
double MkHerz2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000;
	return FREQUENCY;
}

// <���������> ---> <����������> //
double kHerz2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000;
	return FREQUENCY;
}

// <����������> ---> <���������> //
double MkHerz2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000;
	return FREQUENCY;
}

// <����������> ---> <����������> //
double MkHerz2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000;
	return FREQUENCY;
}

// <����������> ---> <����������> //
double MlHerz2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000;
	return FREQUENCY;
}

// <�����> ---> <���������> //
double Herz2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000;
	return FREQUENCY;
}

// <���������> ---> <�����> //
double MgHerz2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000;
	return FREQUENCY;
}

// <����������> ---> <���������> //
double MlHerz2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000;
	return FREQUENCY;
}

// <���������> ---> <����������> //
double MgHerz2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000;
	return FREQUENCY;
}

// <���������> ---> <���������> //
double kHerz2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000;
	return FREQUENCY;
}

// <���������> ---> <���������> //
double MgHerz2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000;
	return FREQUENCY;
}

// <����������> ---> <���������> //
double MkHerz2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000000;
	return FREQUENCY;
}

// <���������> ---> <����������> //
double MgHerz2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000000;
	return FREQUENCY;
}

// <�����> ---> <�������> //
double Herz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000000;
	return FREQUENCY;
}

// <�������> ---> <�����> //
double Frenel2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000000;
	return FREQUENCY;
}

// <����������> ---> <�������> //
double MlHerz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000;
	return FREQUENCY;
}

// <�������> ---> <����������> //
double Frenel2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000;
	return FREQUENCY;
}

// <����������> ---> <�������> //
double MkHerz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000;
	return FREQUENCY;
}

// <�������> ---> <����������> //
double Frenel2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000;
	return FREQUENCY;
}

// <���������> ---> <�������> //
double kHerz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000000000;
	return FREQUENCY;
}

// <�������> ---> <���������> //
double Frenel2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000000000;
	return FREQUENCY;
}

// <���������> ---> <�������> //
double MgHerz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000000000000;
	return FREQUENCY;
}

// <�������> ---> <���������> //
double Frenel2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000000000000;
	return FREQUENCY;
}

// <�����> ---> <������� �� �������> //
double Herz2RadSec(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 6.28319;
	return FREQUENCY;
}

// <������� �� �������> ---> <�����> //
double RadSec2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 6.28319;
	return FREQUENCY;
}

// <����������> ---> <������� �� �������> //
double MlHerz2RadSec(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000) * 6.28319;
	return FREQUENCY;
}

// <������� �� �������> ---> <����������> //
double RadSec2MlHerz(double FREQUENCY) {
	FREQUENCY = (FREQUENCY * 1000) / 6.28319;
	return FREQUENCY;
}

// <����������> ---> <������� �� �������> //
double MkHerz2RadSec(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000000) * 6.28319;
	return FREQUENCY;
}

// <������� �� �������> ---> <����������> //
double RadSec2MkHerz(double FREQUENCY) {
	FREQUENCY = (FREQUENCY * 1000000) / 6.28319;
	return FREQUENCY;
}

// <���������> ---> <������� �� �������> //
double kHerz2RadSec(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000 * 6.28319;
	return FREQUENCY;
}

// <������� �� �������> ---> <���������> //
double RadSec2kHerz(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000) / 6.28319;
	return FREQUENCY;
}

// <���������> ---> <������� �� �������> //
double MgHerz2RadSec(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000 * 6.28319;
	return FREQUENCY;
}

// <������� �� �������> ---> <���������> //
double RadSec2MgHerz(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000000) / 6.28319;
	return FREQUENCY;
}

// <�������> ---> <������� �� �������> //
double Frenel2RadSec(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000000000000) * 6.28319;
	return FREQUENCY;
}

// <������� �� �������> ---> <�������> //
double RadSec2Frenel(double FREQUENCY) {
	FREQUENCY = (FREQUENCY * 1000000000000) / 6.28319;
	return FREQUENCY;
}
