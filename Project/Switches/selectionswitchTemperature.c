#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* ������ '../' - escape-������ - ������������ ��� �������� �� ���� ������� ����;
                                ���� ������ ������������ ������� ���, �� ������� ������� ����� ���������; */

double selectionswitchTemperature(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
           "1 - ������� �������;\t5 - ������� �������;\n"
           "2 - ������� ��������;\t6 - ������� и����;\n"
           "3 - ������� �������;\t7 - ������� �������;\n"
           "4 - ������� �������;\t8 - ������� ����������;\n\t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 9 || key.input_choice == 0) {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("�������� ��������, � ������� �� ������ �������������� ���� ��������.\n"
           "�� ����� �������� �� �� ��������, ��� �� ������� � �������� ��������������:\n"
           "1 - ������� �������;\t5 - ������� �������;\n"
           "2 - ������� ��������;\t6 - ������� и����;\n"
           "3 - ������� �������;\t7 - ������� �������;\n"
           "4 - ������� �������;\t8 - ������� ����������;\n\t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.output_choice >= 9 || key.input_choice == 0)  {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������, \n��� �� ��������� �������������� "
                "���� � �� �� ��������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = bitsTobytes(MEASUREMENT);
            break;
        case 13:
            key.gate = bitsTokilobytes(MEASUREMENT);
            break;
        case 14:
            key.gate = bitsTomegabytes(MEASUREMENT);
            break;
        case 15:
            key.gate = bitsTogigabytes(MEASUREMENT);
            break;
        case 16:
            key.gate = bitsToterabytes(MEASUREMENT);
            break;
        case 17:
            key.gate = bitsTopetabytes(MEASUREMENT);
            break;
        case 18:
            key.gate = bitsToexabytes(MEASUREMENT);
            break;
        case 21:
            key.gate = KelvinsTODelisles(MEASUREMENT);
            break;
        case 23:
            key.gate = KelvinsTONewtons(MEASUREMENT);
            break;
        case 24:
            key.gate = KelvinsTORankines(MEASUREMENT);
            break;
        case 25:
            key.gate = KelvinsTOReaumurs(MEASUREMENT);
            break;
        case 26:
            key.gate = KelvinsTORomers(MEASUREMENT);
            break;
        case 27:
            key.gate = KelvinsTOCelsius(MEASUREMENT);
            break;
        case 28:
            key.gate = KelvinsTOFahrenheits(MEASUREMENT);
            break;
        case 31:
            key.gate = kilobytesTobits(MEASUREMENT);
            break;
        case 32:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 34:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 35:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 36:
            key.gate = valuesBetweenTwoUpward(MEASUREMENT);
            break;
        case 37:
            key.gate = valuesBetweenThreeUpward(MEASUREMENT);
            break;
        case 38:
            key.gate = valuesBetweenFourUpward(MEASUREMENT);
            break;
        case 41:
            key.gate = megabytesTobits(MEASUREMENT);
            break;
        case 42:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 43:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 45:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 46:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 47:
            key.gate = valuesBetweenTwoUpward(MEASUREMENT);
            break;
        case 48:
            key.gate = valuesBetweenThreeUpward(MEASUREMENT);
            break;
        case 51:
            key.gate = gigabytesTobits(MEASUREMENT);
            break;
        case 52:
            key.gate = valuesBetweenTwoToDecrease(MEASUREMENT);
            break;
        case 53:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 54:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 56:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 57:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 58:
            key.gate = valuesBetweenTwoUpward(MEASUREMENT);
            break;
        case 61:
            key.gate = terabytesTobits(MEASUREMENT);
            break;
        case 62:
            key.gate = valuesBetweenThreeToDecrease(MEASUREMENT);
            break;
        case 63:
            key.gate = valuesBetweenTwoToDecrease(MEASUREMENT);
            break;
        case 64:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 65:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 67:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 68:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 71:
            key.gate = CelsiusTODelisles(MEASUREMENT);
            break;
        case 72:
            key.gate = CelsiusTOKelvins(MEASUREMENT);
            break;
        case 73:
            key.gate = CelsiusTONewtons(MEASUREMENT);
            break;
        case 74:
            key.gate = CelsiusTORankines(MEASUREMENT);
            break;
        case 75:
            key.gate = CelsiusTOReaumurs(MEASUREMENT);
            break;
        case 76:
            key.gate = CelsiusTORomers(MEASUREMENT);
            break;
        case 78:
            key.gate = CelsiusTOFahrenheits(MEASUREMENT);
            break;
        case 81:
            key.gate = FahrenheitsTODelisles(MEASUREMENT);
            break;
        case 82:
            key.gate = FahrenheitsTOKelvins(MEASUREMENT);
            break;
        case 83:
            key.gate = FahrenheitsTONewtons(MEASUREMENT);
            break;
        case 84:
            key.gate = FahrenheitsTORankines(MEASUREMENT);
            break;
        case 85:
            key.gate = FahrenheitsTOReaumurs(MEASUREMENT);
            break;
        case 86:
            key.gate = FahrenheitsTORomers(MEASUREMENT);
            break;
        case 87:
            key.gate = FahrenheitsTOCelsiuss(MEASUREMENT);
            break;
        default:
            printf("�� ������� �������� �������������� ��������, "
                   "��� �� ��������� �������������� � ��������, ������� ��� ������������\n");
            break;
    }

    return key.gate;
}
