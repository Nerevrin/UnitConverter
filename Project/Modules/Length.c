#include <stdio.h>
#include <math.h>

/* ������� ��������������� ��������� ������ �����  */

/*
��������� (��)
���� (�)
��������� (��)
�������� (��)
�������� (��)
������
�����
���� (mi)
��� (yd)
��� (ft)
��������� (������)
�������� (��)
�������� (�)
������� ����
/*

/*------------------------������� ��������� ��������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������> ---> <����> //
double millimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 1000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���������> //
double millimeters_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH / 10;  // ������� ��� ��������
	return LENGTH;
}


// <���������> ---> <��������> //
double millimeters_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH / 100;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double millimeters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 1000000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <������> //
double millimeters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.0004686914135733;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <�����> //
double millimeters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.00140607424072;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <����> //
double millimeters_TO_miles(double LENGTH) {
	LENGTH = LENGTH *  6.213711922373 * (pow(10,-7));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <���������> ---> <���> //
double millimeters_TO_yards(double LENGTH) {
	LENGTH = LENGTH *  0.001093613298338;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���> //
double millimeters_TO_foots(double LENGTH) {
	LENGTH = LENGTH *  0.003280839895013;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���������> //
double millimeters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH  *  1000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double millimeters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH  *  1000000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double millimeters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH  *  10000000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <������� ����> //
double millimeters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH  *  5.399568034557 * (pow(10, -7));  // ������� ��� ��������!!!!!!!!!!!!!!!!!!!!!!!!
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ���� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <����> ---> <���������> //
double meters_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1000;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <���������> //
double meters_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 100;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <��������> //
double meters_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 10;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <��������> //
double meters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 1000;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <������> //
double meters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.4686914135733;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <�����> //
double meters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.40607424072;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <����> //
double meters_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0006213711922373;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <���> //
double meters_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1.093613298338;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <���> //
double meters_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3.280839895013;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <���������> //
double meters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1000000;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <��������> //
double meters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1000000000;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <��������> //
double meters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 10000000000;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <������� ����> //
double meters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 10000000000;  // ������� ��� ��������
	return LENGTH;
}
/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ��������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������> ---> <����> //
double centimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 100;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���������> //
double centimeters_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 10;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double centimeters_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH / 10;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double centimeters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 100000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <������> //
double centimeters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.004686914135733;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <�����> //
double centimeters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.0140607424072;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <����> //
double centimeters_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.000006213711922373;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���> //
double centimeters_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 0.01093613298338;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���> //
double centimeters_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 0.03280839895013;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���������> //
double centimeters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 10000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double centimeters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 10000000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double centimeters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 100000000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <������� ����> //
double centimeters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.000005395931899023;  // ������� ��� ��������
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� �������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <��������> ---> <���������> //
double decimeters_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 10;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <����> //
double decimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 10;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���������> //
double decimeters_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 100;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <��������> //
double decimeters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 10000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <������> //
double decimeters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.04686914135733;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <�����> //
double decimeters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.140607424072;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <����> //
double decimeters_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.00006213711922373;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���> //
double decimeters_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 0.1093613298338;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���> //
double decimeters_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 0.3280839895013;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���������> //
double decimeters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 100000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <��������> //
double decimeters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 100000000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <��������> //
double decimeters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 1000000000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <������� ����> //
double decimeters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.00005399568034557;  // ������� ��� ��������
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� �������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <��������> ---> <��������> //
double kilometers_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 10000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���������> //
double kilometers_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 100000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <����> //
double kilometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���������> //
double kilometers_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1000000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <������> //
double kilometers_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 468.6914135733;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <�����> //
double kilometers_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1406.07424072;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <����> //
double kilometers_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.6213711922373;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���> //
double kilometers_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1093.613298338;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���> //
double kilometers_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3280.839895013;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���������> //
double kilometers_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1000000000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <��������> //
double kilometers_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1000000000000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <��������> //
double kilometers_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, 13));  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <������� ����> //
double kilometers_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.5399568034557;  // ������� ��� ��������
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ������ � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <������> ---> <��������> //
double fathoms_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 0.0021336;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <��������> //
double fathoms_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 21.336;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <���������> //
double fathoms_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 213.36;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <����> //
double fathoms_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 2.1336;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <���������> //
double fathoms_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 2133.6;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <�����> //
double fathoms_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 3;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <����> //
double fathoms_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.001325757575758;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <���> //
double fathoms_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 2.333333333333;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <���> //
double fathoms_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 7;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <���������> //
double fathoms_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 2133600;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <��������> //
double fathoms_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 2133600000;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <��������> //
double fathoms_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 21336000000;  // ������� ��� ��������
	return LENGTH;
}

// <������> ---> <������� ����> //
double fathoms_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.001152051835853;  // ������� ��� ��������
	return LENGTH;
}
/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ����� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�����> ---> <������> //
double arshins_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH / 3;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <��������> //
double arshins_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 0.0007112;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <��������> //
double arshins_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 7.112;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <���������> //
double arshins_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 71.12;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <����> //
double arshins_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.7112;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <���������> //
double arshins_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 711.2;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <����> //
double arshins_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0004419191919192;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <���> //
double arshins_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 0.7777777777778;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <���> //
double arshins_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 2.333333333333;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <���������> //
double arshins_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 711200;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <��������> //
double arshins_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 711200000;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <��������> //
double arshins_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 7112000000;  // ������� ��� ��������
	return LENGTH;
}

// <�����> ---> <������� ����> //
double arshins_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.0003840172786177;  // ������� ��� ��������
	return LENGTH;
}
/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ���� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <����> ---> <�����> //
double miles_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 2262.857142857;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <������> //
double miles_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 754.2857142857;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <��������> //
double miles_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1.609344;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <��������> //
double miles_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 16093.44;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <���������> //
double miles_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 160934.4;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <����> //
double miles_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1609.344;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <���������> //
double miles_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1609344;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <���> //
double miles_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1760;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <���> //
double miles_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 5280;  // ������� ��� ��������
	return LENGTH;
}
+
// <����> ---> <���������> //
double miles_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1609344000;  // ������� ��� ��������
	return LENGTH;
}

// <����> ---> <��������> //
double miles_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1.609344 * (pow(10, 12));  // ������� ��� �������� !!!!!!!!!!!!!!!
	return LENGTH;
}

// <����> ---> <��������> //
double miles_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 1.609344 * (pow(10, 13));  // ������� ��� �������� !!!!!!!!!!!!!!
	return LENGTH;
}

// <����> ---> <������� ����> //
double miles_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.8689762419006;  // ������� ��� ��������
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ��� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���> ---> <����> //
double yards_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0005681818181818;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <�����> //
double yards_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.285714285714;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <������> //
double yards_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.4285714285714;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <��������> //
double yards_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 0.0009144;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <��������> //
double yards_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 9.144;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <���������> //
double yards_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 91.44;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <����> //
double yards_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.9144;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <���������> //
double yards_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 914.4;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <���> //
double yards_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <���������> //
double yards_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 914400;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <��������> //
double yards_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 914400000;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <��������> //
double yards_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 9144000000;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <������� ����> //
double yards_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.0001645788336933;  // ������� ��� ��������
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ��� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���> ---> <���> //
double foots_TO_yards(double LENGTH) {
	LENGTH = LENGTH / 3;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <����> //
double foots_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0001893939393939;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <�����> //
double foots_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.4285714285713;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <������> //
double foots_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.1428571428571;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <��������> //
double foots_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 0.0003048;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <��������> //
double foots_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 3.048;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <���������> //
double foots_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 30.48;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <����> //
double foots_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.3048;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <���������> //
double foots_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 304.8;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <���������> //
double foots_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 304.8;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <��������> //
double foots_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 304800000;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <��������> //
double foots_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 3048000000;  // ������� ��� ��������
	return LENGTH;
}

// <���> ---> <������� ����> //
double foots_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.0001645788336933;  // ������� ��� ��������
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ��������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������> ---> <���> //
double micrometers_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 0.000003280839895013;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���> //
double micrometers_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 0.000001093613298338;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <����> //
double micrometers_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 6.213711922373 * (pow(10, -10));  // ������� ��� ��������!!!!!!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <���������> ---> <�����> //
double micrometers_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.00000140607424072;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <������> //
double micrometers_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 4.686914135733 * (pow(10, -10));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <���������> ---> <��������> //
double micrometers_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -9));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <���������> ---> <��������> //
double micrometers_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH / 100000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���������> //
double micrometers_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH / 10000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <����> //
double micrometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 1000000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <���������> //
double micrometers_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH / 1000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double micrometers_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1000;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <��������> //
double micrometers_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 39.37007874016;  // ������� ��� ��������
	return LENGTH;
}

// <���������> ---> <������� ����> //
double micrometers_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 5.399568034557 * (pow(10, -10));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� �������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <��������> ---> <���������> //
double nanometers_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH / 1000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���> //
double nanometers_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3.280839895013 * (pow(10, -9));  // ������� ��� ��������!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <���> //
double nanometers_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1.093613298338 * (pow(10, -9));  // ������� ��� ��������!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <����> //
double nanometers_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 6.213711922373 * (pow(10, -13));  // ������� ��� ��������!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <�����> //
double nanometers_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.40607424072 * (pow(10, -9));  // ������� ��� ��������!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <������> //
double nanometers_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 4.686914135733 * (pow(10, -10));  // ������� ��� ��������!!!!!!!!!!!!!!!
    return LENGTH;
}

// <��������> ---> <��������> //
double nanometers_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -12));  // ������� ��� ��������!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <��������> //
double nanometers_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -8));  // ������� ��� ��������!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <���������> //
double nanometers_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -7));  // ������� ��� ��������!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <����> //
double nanometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -9));  // ������� ��� ��������!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <���������> //
double nanometers_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH / 1000000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <��������> //
double nanometers_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 10;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <������� ����> //
double nanometers_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 5.399568034557 * (pow(10, -13); // ������� ��� ��������
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/
/*------------------------������� ��������� �������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <��������> ---> <��������> //
double angstroms_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH / 10;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���������> //
double angstroms_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH / 10000;  // ������� ��� ��������
	return LENGTH;
}

// <��������> ---> <���> //
double angstroms_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3.280839895013 * (pow(10, -10);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <���> //
double angstroms_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1.093613298338 * (pow(10, -10);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <����> //
double angstroms_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 6.213711922373 * (pow(10, -14);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <�����> //
double angstroms_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.40607424072 * (pow(10, -10);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <������> //
double angstroms_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 4.686914135733 * (pow(10, -11);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <��������> //
double angstroms_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -13);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <��������> //
double angstroms_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -9);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <���������> //
double angstroms_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -8);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <����> //
double angstroms_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -10);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <���������> //
double angstroms_TO_millimeter(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -7);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <��������> ---> <������� ����> //
double angstroms_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 5.399568034557 * (pow(10, -14);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ������� ���� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <������� ����> ---> <��������> //
double nauticalmiles_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 1.852 * (pow(10, 13);  // ������� ��� �������� !!!!!!!!!!!!!!!
	return LENGTH;
}

// <������� ����> ---> <��������> //
double nauticalmiles_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1.852 * (pow(10, 12);  // ������� ��� �������� !!!!!!!!!!!!!!
	return LENGTH;
}

// <������� ����> ---> <����������> //
double nauticalmiles_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1852000000;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <���> //
double nauticalmiles_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 6076.115485564;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <���> //
double nauticalmiles_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 2025.371828521;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <����> //
double nauticalmiles_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 1.150779448024;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <�����> //
double nauticalmiles_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 2604.049493813;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <������> //
double nauticalmiles_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 868.0164979378;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <��������> //
double nauticalmiles_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1.852;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <��������> //
double nauticalmiles_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 18520;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <���������> //
double nauticalmiles_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 185200;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <����> //
double nauticalmiles_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1852;  // ������� ��� ��������
	return LENGTH;
}

// <������� ����> ---> <���������> //
double nauticalmiles_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1852000;  // ������� ��� ��������
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/
