#include <stdio.h>
#include <math.h>

/* ������� ��������������� ��������� ������ ������  */

/*
���������� �������� (��?)
���������� ���� (�?)
���������� �������� (��?)
���������� ��������� (��?)
���������� ��������� (mm?)
���� (�)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
��������� (��)
������ (gal)
������� (��������)
������ (qt)
����� (pt)
������ ����� (oz)
 */

/*------------------------������� ��������� ���������� �������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������� ��������> ---> <���������� ����> //
double squaredkilometers_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <���������� ��������> //
double squaredkilometers_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <���������� ���������> //
double squaredkilometers_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,15));  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <���������� ���������> //
double squaredkilometers_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,18));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ��������> ---> <����> //
double squaredkilometers_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <���������> //
double squaredkilometers_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10, 15));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ��������> ---> <������> //
double squaredkilometers_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 264172052358.1;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <�������> //
double squaredkilometers_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 6289810770.432;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <������> //
double squaredkilometers_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 1.056688209433 * (pow(10, 12));  // ������� ��� ��������!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ��������> ---> <�����> //
double squaredkilometers_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 2.113376418865 * (pow(10,12));  // ������� ��� ��������!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ��������> ---> <������ �����> //
double squaredkilometers_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 3.381402270184 * (pow(10,13)).;  // ������� ��� ��������!!!!!!!!!!!!
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ���������� ���� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������� ����> ---> <���������� ��������> //
double squaredmeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT /  (pow(10, -9);  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ����> ---> <���������� ��������> //
double squaredmeters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <���������� ���������> //
double squaredmeters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <���������� ��������� > //
double squaredmeters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <����> //
double squaredmeters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <���������> //
double squaredmeters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <������> //
double squaredmeters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 264.1720523581;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <�������> //
double squaredmeters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 6.289810770432;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <�����> //
double squaredmeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 1056.688209433;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <������> //
double squaredmeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000002113376418865;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ����> ---> <������ �����> //
double squaredmeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 33814.02270184;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ���������� ��������  � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������� ��������> ---> <���������� ����> //
double squareddecimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <���������� ��������> //
double squareddecimeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10, -12));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ��������> ---> <���������� ���������> //
double squareddecimeters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <���������� ���������> //
double squareddecimeters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <����> //
double squareddecimeters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 1;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <���������> //
double squareddecimeters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <������> //
double squareddecimeters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.2199692482991;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <�������> //
double squareddecimeters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.006289810770432;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <�����> //
double squareddecimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 2.113376418865;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <������> //
double squareddecimeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 1.056688209433;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ��������> ---> <������ �����> //
double squareddecimeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 33.81402270184;  // ������� ��� ��������
	return AMOUNT;
}
/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ���������� ��������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������� ���������> ---> <���������� ��������> //
double squaredcentimeters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <���������� ����> //
double squaredcentimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <���������� ��������> //
double squaredcentimeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-15));  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <���������� ���������> //
double squaredcentimeters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <����> //
double squaredcentimeters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <���������> //
double squaredcentimeters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 1;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <������> //
double squaredcentimeters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0002641720523581;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <�������> //
double squaredcentimeters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000006289810770432;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <�����> //
double squaredcentimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.002113376418865;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <������> //
double squaredcentimeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.001056688209433;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <������ �����> //
double squaredcentimeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 0.03381402270184;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ���������� ��������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������� ���������> ---> <���������� ���������> //
double squaredmillimeters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <���������� ��������> //
double squaredmillimeters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <���������� ����> //
double squaredmillimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-9));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ���������> ---> <���������� ��������> //
double squaredmillimeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-18));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ���������> ---> <����> //
double squaredmillimeters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <���������> //
double squaredmillimeters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <������> //
double squaredmillimeters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 2.641720523581 * (pow(10,-7);  // ������� ��� ��������  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ���������> ---> <�������> //
double squaredmillimeters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 6.289810770432 * (pow(10,-9);  // ������� ��� ��������  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������� ���������> ---> <�����> //
double squaredmillimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000002113376418865;  // ������� ��� ��������
	return AMOUNT;
}

// <���������� ���������> ---> <������> //
	double squaredmillimeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000001056688209433;  // ������� ��� ��������  !
	return AMOUNT;
}

// <���������� ���������> ---> <������ �����> //
	double squaredmillimeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 0.00003381402270184;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ����  � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <����> ---> <���������� ���������> //
double liters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <���������� ���������> //
double liters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <���������� ��������> //
double liters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <���������� ����> //
double liters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <���������� ��������> //
double liters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-12)) ;  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <����> ---> <���������> //
double liters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <������> //
double liters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.2199692482991;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <�������> //
double liters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.006289810770432;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <������> //
double liters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 1.056688209433;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <�����> //
double liters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.8798769931964;  // ������� ��� ��������
	return AMOUNT;
}

// <����> ---> <������ �����> //
double liters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 33.81402270184;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ��������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������> ---> <����> //
double mililiters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <���������� ���������> //
double mililiters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <���������� ���������> //
double mililiters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <���������� ��������> //
double mililiters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <���������� ����> //
double mililiters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <���������� ��������> //
double mililiters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-15));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <���������> ---> <������> //
double mililiters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0002641720523581;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <�������> //
double mililiters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000006289810770432;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <������> //
double mililiters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.001056688209433;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <�����> //
double mililiters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.002113376418865;  // ������� ��� ��������
	return AMOUNT;
}

// <���������> ---> <������ �����> //
double mililiters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 0.03381402270184;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ������ � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <������> ---> <���������> //
double gallons_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 3785.411784;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <����> //
double gallons_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 3.785411784;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ���������> //
double gallons_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 3785411.784;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ���������> //
double gallons_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 3785.411784;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ��������> //
double gallons_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 3.785411784;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ����> //
double gallons_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.003785411784;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ��������> //
double gallons_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 3.785411784 * (pow(10,-12));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <������> ---> <�������> //
double gallons_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.02380952380952;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <������> //
double gallons_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 4;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <�����> //
double gallons_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 8;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <������ �����> //
double gallons_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 128;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ������� (��������) � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�������> ---> <������> //
double barrels_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 42;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <���������> //
double barrels_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 158987.294928;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <����> //
double barrels_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 158.987294928;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <���������� ���������> //
double barrels_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 158987294.928;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <���������� ���������> //
double barrels_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 158987.294928;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <���������� ��������> //
double barrels_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 158.987294928;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <���������� ����> //
double barrels_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.158987294928;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <���������� ��������> //
double barrels_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 1.58987294928 * (pow(10,-10));  // ������� ��� ��������!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <�������> ---> <������> //
double barrels_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 168;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <�����> //
double barrels_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 336;  // ������� ��� ��������
	return AMOUNT;
}

// <�������> ---> <������ ����� > //
double barrels_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 5376;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ������ � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <������> ---> <�������> //
double quarts_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT / 168;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <������> //
double quarts_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.25;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������> //
double quarts_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 946.352946;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <����> //
double quarts_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.946352946;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ���������> //
double quarts_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 946352.946;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ���������> //
double quarts_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 946.352946;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ��������> //
double quarts_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.946352946;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ����> //
double quarts_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000946352946;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <���������� ��������> //
double quarts_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 9.46352946 * (pow(10,-13));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <������> ---> <�����> //
double quarts_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 2;  // ������� ��� ��������
	return AMOUNT;
}

// <������> ---> <������ �����> //
double quarts_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 32;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ����� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�����> ---> <������> //
double pints_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT / 2;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <�������> //
double pints_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT / 336;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <������> //
double pints_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT / 8;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <���������> //
double pints_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 473.176473;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <����> //
double pints_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.473176473;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <���������� ���������> //
double pints_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 473176.473;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <���������� ���������> //
double pints_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 473.176473;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <���������� ��������> //
double pints_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.473176473;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <���������� ����> //
double pints_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000473176473;  // ������� ��� ��������
	return AMOUNT;
}

// <�����> ---> <���������� ��������> //
double pints_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 4.73176473 * (pow(10,-13));  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <�����> ---> <������ �����> //
double pints_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 16;  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------������� ��������� ������ ����� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <������ �����> ---> <�����> //
double flozs_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT / 16;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <������> //
double flozs_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT / 32;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <�������> //
double flozs_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT / 5376;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <������> //
double flozs_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT / 128;  // ������� ��� �������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <������ �����> ---> <���������> //
double flozs_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 29.5735295625;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <����> //
double flozs_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0295735295625;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <���������� ���������> //
double flozs_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 29573.5295625;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <���������� ���������> //
double flozs_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 29.5735295625;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <���������� ��������> //
double flozs_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0295735295625;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <���������� ����> //
double flozs_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0000295735295625;  // ������� ��� ��������
	return AMOUNT;
}

// <������ �����> ---> <���������� ��������> //
double flozs_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 2.95735295625 * (pow(10,-14));  // ������� ��� ��������
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/
