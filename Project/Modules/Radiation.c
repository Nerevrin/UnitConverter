#include <stdio.h>
#include <math.h>
// DONE;
// ��������������� �������� ������� � ������� ����������;
double adjacentValuesUpward(double RADIATION)
{
    RADIATION = RADIATION/1000;
    return RADIATION;
}
// ----------------------------------------------------- //
// ��������������� �������� ������� � ������� ����������;
double adjacentValuesToDecrease(double RADIATION)
{
    RADIATION = RADIATION*1000;
    return RADIATION;
}
// ----------------------------------------------------- //
// ��������������� ������� ����� ���� � ������� ����������;
double valuesBetweenOneUpward(double RADIATION)
{
    RADIATION = RADIATION/(pow(1000, 2));
    return RADIATION;
}
// ----------------------------------------------------- //
// ��������������� ������� ����� ���� � ������� ����������;
double valuesBetweenOneToDecrease(double RADIATION)
{
    RADIATION = RADIATION*(pow(1000, 2));
    return RADIATION;
}
// ----------------------------------------------------- //
// ��������������� ������� ����� ��� � ������� ����������;
double valuesBetweenTwoUpward(double RADIATION)
{
    RADIATION = RADIATION/(pow(1000, 3));
    return RADIATION;
}
// ----------------------------------------------------- //
// ��������������� ������� ����� ��� � ������� ����������;
double valuesBetweenTwoToDecrease(double RADIATION)
{
    RADIATION = RADIATION*(pow(1000, 3));
    return RADIATION;
}
// ----------------------------------------------------- //
// ��������������� �� ���������� � ����; //
double ciTobq(double RADIATION)
{
    RADIATION = RADIATION*37000000000;
    return RADIATION;
}
