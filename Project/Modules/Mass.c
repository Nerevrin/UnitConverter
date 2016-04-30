#include <stdio.h>

/* ������� ��������������� ��������� ������ �����  */

/* �����. ���������. �������. �����. �����. �����. ����. �����. ������. ����*/

/*------------------------������� ��������� ����� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�����> ---> <���������> //
double Grams_TO_Kilograms(double MASS) {
	MASS = MASS / 1000;  // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�������> //
double Grams_TO_Quintals(double MASS) {
	MASS = MASS / 100000;  // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Grams_TO_Tonnes(double MASS) {
	MASS = MASS / 1000000;  // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Grams_TO_Carats(double MASS) {
	MASS = MASS * 5;  // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Grams_TO_Stones(double MASS) {
	MASS = MASS * 0.000157473;  // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Grams_TO_Funts(double MASS) {
	MASS = MASS / 453.59237;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Grams_TO_Ounces(double MASS) {
	MASS = MASS / 28.349523;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <������> //
double Grams_TO_Drachmas(double MASS) {
	MASS = MASS * 0.2941176470588;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Grams_TO_Grains(double MASS) {
	MASS = MASS * 15.4323;  // ������� ��� ��������
	return MASS;
}
/*--------------------------------------------------------------------------*/

/*------------------------������� ��������� ��������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <���������> ---> <�����> //
double Kilograms_TO_Grams(double MASS) {
	MASS = MASS * 1000;  // ������� ��� ��������
	return MASS;
}

// <���������> ---> <�������> //
double Kilograms_TO_Quintals(double MASS) {
	MASS = MASS / 100;   // ������� ��� ��������
	return MASS;
}

// <���������> ---> <�����> //
double Kilograms_TO_Tonnes(double MASS) {
	MASS = MASS / 1000;  // ������� ��� ��������
	return MASS;
}

// <���������> ---> <�����> //
double Kilograms_TO_Carats(double MASS) {
	MASS = MASS * 5000;  // ������� ��� ��������
	return MASS;
}

// <���������> ---> <�����> //
double Kilograms_TO_Stones(double MASS) {
	MASS = MASS * 0.157473; // ������� ��� ��������
	return MASS;
}

// <���������> ---> <����> //
double Kilograms_TO_Funts(double MASS) {
	MASS = MASS * 4.40925; // ������� ��� ��������
	return MASS;
}

// <���������> ---> <�����> //
double Kilograms_TO_Ounces(double MASS) {
	MASS = MASS * 35.274; // ������� ��� ��������
	return MASS;
}

// <���������> ---> <������> //
double Kilograms_TO_Drachmas(double MASS) {
	MASS = MASS * 564.382; // ������� ��� ��������
	return MASS;
}

// <���������> ---> <����> //
double Kilograms_TO_Grains(double MASS) {
	MASS = MASS * 15432.3; // ������� ��� ��������
	return MASS;
}
/*--------------------------------------------------------------------------*/

/*------------------------������� ��������� ������� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�������> ---> <���������> //
double Quintals_TO_Kilograms(double MASS) {
	MASS = MASS * 100;   // ������� ��� ��������
	return MASS;
}

// <�������> ---> <�����> //
double Quintals_TO_Grams(double MASS) {
	MASS = MASS * 100000;  // ������� ��� ��������
	return MASS;
}

// <�������> ---> <�����> //
double Quintals_TO_Tonnes(double MASS) {
	MASS = MASS / 10; // ������� ��� ��������
	return MASS;
}

// <�������> ---> <�����> //
double Quintals_TO_Carats(double MASS) {
	MASS = MASS * 500000; // ������� ��� ��������
	return MASS;
}

// <�������> ---> <�����> //
double Quintals_TO_Stones(double MASS) {
	MASS = MASS * 15.7473;  // ������� ��� ��������
	return MASS;
}

// <�������> ---> <����> //
double Quintals_TO_Funts(double MASS) {
	MASS = MASS * 220.462;  // ������� ��� ��������
	return MASS;
}

// <�������> ---> <�����> //
double Quintals_TO_Ounces(double MASS) {
	MASS = MASS * 3527.4;  // ������� ��� ��������
	return MASS;
}

// <�������> ---> <������> //
double Quintals_TO_Drachmas(double MASS) {
	MASS = MASS * 56438.2; // ������� ��� ��������
	return MASS;
}

// <�������> ---> <����> //
double Quintals_TO_Grains(double MASS) {
	MASS = MASS * 1543235.83529; // ������� ��� ��������
	return MASS;
}

/*--------------------------------------------------------------------------*/

/*------------------------������� ��������� ����� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�����> ---> <�������> //
double Tonnes_TO_Quintals(double MASS) {
	MASS = MASS * 10;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <���������> //
double Tonnes_TO_Kilograms(double MASS) {
	MASS = MASS * 1000;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Tonnes_TO_Grams(double MASS) {
	MASS = MASS * 1000000;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Tonnes_TO_Carats(double MASS) {
	MASS = MASS * 5000000;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Tonnes_TO_Stones(double MASS) {
	MASS = MASS * 157.473;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Tonnes_TO_Funts(double MASS) {
	MASS = MASS * 2204.62;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Tonnes_TO_Ounces(double MASS) {
	MASS = MASS * 35274;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <������> //
double Tonnes_TO_Drachmas(double MASS) {
	MASS = MASS  * 564382;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Tonnes_TO_Grains(double MASS) {
	MASS = MASS * 15430000;   // ������� ��� ��������
	return MASS;
}
/*--------------------------------------------------------------------------*/

/*------------------------������� ��������� ����� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�����> ---> <�����> //
double Carats_TO_Tonnes(double MASS) {
	MASS = MASS / 5000000;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�������> //
double Carats_TO_Quintals(double MASS) {
	MASS = MASS / 500000;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <���������> //
double Carats_TO_Kilograms(double MASS) {
	MASS = MASS / 5000;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Carats_TO_Grams(double MASS) {
	MASS = MASS / 5;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Carats_TO_Stones(double MASS) {
	MASS = MASS * 3.1495;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Carats_TO_Funts(double MASS) {
	MASS = MASS * 0.000440925;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Carats_TO_Ounces(double MASS) {
	MASS = MASS * 0.00705479;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <������> //
double Carats_TO_Drachmas(double MASS) {
	MASS = MASS * 0.112876;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Carats_TO_Grains(double MASS) {
	MASS = MASS * 3.08647;   // ������� ��� ��������
	return MASS;
}

/*--------------------------------------------------------------------------*/

/*------------------------������� ��������� ����� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�����> ---> <�����> //
double Stones_TO_Carats(double MASS) {
	MASS = MASS * 31751.5;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Stones_TO_Tonnes(double MASS) {
	MASS = MASS * 0.00635029;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�������> //
double Stones_TO_Quintals(double MASS) {
	MASS = MASS * 0.0635029;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <���������> //
double Stones_TO_Kilograms(double MASS) {
	MASS = MASS * 6.35029;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Stones_TO_Grams(double MASS) {
	MASS = MASS * 6350.29;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Stones_TO_Funts(double MASS) {
	MASS = MASS * 14;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Stones_TO_Ounces(double MASS) {
	MASS = MASS * 224;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <������> //
double Stones_TO_Drachmas(double MASS) {
	MASS = MASS * 3583.99;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Stones_TO_Grains(double MASS) {
	MASS = MASS * 97999.9;   // ������� ��� ��������
	return MASS;
}

/*--------------------------------------------------------------------------*/

/*------------------------������� ��������� ���� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <����> ---> <�����> //
double Funts_TO_Stones(double MASS) {
	MASS = MASS * 0.0714286;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Funts_TO_Carats(double MASS) {
	MASS = MASS * 2267.96;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Funts_TO_Tonnes(double MASS) {
	MASS = MASS * 0.000453592;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�������> //
double Funts_TO_Quintals(double MASS) {
	MASS = MASS * 0.00453592;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <���������> //
double Funts_TO_Kilograms(double MASS) {
	MASS = MASS * 0.00453592;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Funts_TO_Grams(double MASS) {
	MASS = MASS * 453.592;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Funts_TO_Ounces(double MASS) {
	MASS = MASS * 16;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <������> //
double Funts_TO_Drachmas(double MASS) {
	MASS = MASS * 255.999;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <����> //
double Funts_TO_Grains(double MASS) {
	MASS = MASS * 6999.99;   // ������� ��� ��������
	return MASS;
}
/*--------------------------------------------------------------------------*/

/*------------------------������� ��������� ����� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <�����> ---> <����> //
double Ounces_TO_Funts(double MASS) {
	MASS = MASS * 0.0625;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Ounces_TO_Stones(double MASS) {
	MASS = MASS * 0.00446429;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Ounces_TO_Carats(double MASS) {
	MASS = MASS * 141.748;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Ounces_TO_Tonnes(double MASS) {
	MASS = MASS * 2.83495;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�������> //
double Ounces_TO_Quintals(double MASS) {
	MASS = MASS * 0.000283495;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <���������> //
double Ounces_TO_Kilograms(double MASS) {
	MASS = MASS * 0.0283495;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <�����> //
double Ounces_TO_Grams(double MASS) {
	MASS = MASS * 28.3495;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <������> //
double Ounces_TO_Drachmas(double MASS) {
	MASS = MASS * 16;   // ������� ��� ��������
	return MASS;
}

// <�����> ---> <����> //
double Ounces_TO_Grains(double MASS) {
	MASS = MASS * 437.499;   // ������� ��� ��������
	return MASS;
}


/*--------------------------------------------------------------------------*/


/*------------------------������� ��������� ������ � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <������> ---> <�����> //
double Drachmas_TO_Ounces(double MASS) {
	MASS = MASS * 0.0625002;   // ������� ��� ��������
	return MASS;
}

// <������> ---> <����> //
double Drachmas_TO_Funts(double MASS) {
	MASS = MASS * 0.00390626;   // ������� ��� ��������
	return MASS;
}

// <������> ---> <�����> //
double Drachmas_TO_Stones(double MASS) {
	MASS = MASS * 0.000279019;   // ������� ��� ��������
	return MASS;
}

// <������> ---> <�����> //
double Drachmas_TO_Carats(double MASS) {
	MASS = MASS * 8.85925;   // ������� ��� ��������
	return MASS;
}

// <������> ---> <�����> //
double Drachmas_TO_Tonnes(double MASS) {
	MASS = MASS * 1.77185;   // ������� ��� ��������
	return MASS;
}

// <������> ---> <�������> //
double Drachmas_TO_Quintals(double MASS) {
	MASS = MASS * 1.77185;   // ������� ��� ��������
	return MASS;
}

// <������> ---> <���������> //
double Drachmas_TO_Kilograms(double MASS) {
	MASS = MASS * 0.00177185;   // ������� ��� ��������
	return MASS;
}

// <������> ---> <�����> //
double Drachmas_TO_Grams(double MASS) {
	MASS = MASS * 1.77185;   // ������� ��� ��������
	return MASS;
}

// <������> ---> <����> //
double Drachmas_TO_Grains(double MASS) {
	MASS = MASS * 27.3438;   // ������� ��� ��������
	return MASS;
}

/*--------------------------------------------------------------------------*/

/*------------------------������� ��������� ���� � � ������� � ���� ������������� ������� ���������-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <����> ---> <������> //
double Grains_TO_Drachmas(double MASS) {
	MASS = MASS * 0.0365714;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Grains_TO_Ounces(double MASS) {
	MASS = MASS * 0.00228572;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <����> //
double Grains_TO_Funts(double MASS) {
	MASS = MASS * 0.000142857;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Grains_TO_Stones(double MASS) {
	MASS = MASS * 1.0204;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Grains_TO_Carats(double MASS) {
	MASS = MASS * 0.323995;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Grains_TO_Tonnes(double MASS) {
	MASS = MASS / 15430000;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�������> //
double Grains_TO_Quintals(double MASS) {
	MASS = MASS / 1543235.83529;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <���������> //
double Grains_TO_Kilograms(double MASS) {
	MASS = MASS / 15432.3;   // ������� ��� ��������
	return MASS;
}

// <����> ---> <�����> //
double Grains_TO_Grams(double MASS) {
	MASS = MASS * 0.064799 ;   // ������� ��� ��������
	return MASS;
}

/*--------------------------------------------------------------------------*/
