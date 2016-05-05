#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* ������ '../' - escape-������ - ������������ ��� �������� �� ���� ������� ����;
                                ���� ������ ������������ ������� ���, �� ������� ������� ����� ���������; */

double selectionswitchSpeed(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
           "1 - ��������� � ���;\n"
           "2 - ����� � �������;\n"
           "3 - ����;\n"
           "4 - ����;\n"
           "5 - ���� � ���;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("�������� ��������, � ������� �� ������ �������������� ���� ��������.\n"
           "�� ����� �������� �� �� ��������, ��� �� ������� � �������� ��������������:\n"
           "1 - ��������� � ���;\n"
           "2 - ����� � �������;\n"
           "3 - ����;\n"
           "4 - ����;\n"
           "5 - ���� � ���;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������, \n��� �� ��������� �������������� "
                "���� � �� �� ��������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = kmch_to_mc(MEASUREMENT);
            break;
        case 13:
            key.gate = kmch_to_uzl(MEASUREMENT);
            break;
        case 14:
            key.gate = kmch_to_mah(MEASUREMENT);
            break;
        case 15:
            key.gate = kmch_to_milch(MEASUREMENT);
            break;
        case 21:
            key.gate = mc_to_kmch(MEASUREMENT);
            break;
        case 23:
            key.gate = mc_to_uzl(MEASUREMENT);
            break;
        case 24:
            key.gate = mc_to_mah(MEASUREMENT);
            break;
        case 25:
            key.gate = mc_to_milch(MEASUREMENT);
            break;
        case 31:
            key.gate = uzl_to_kmch(MEASUREMENT);
            break;
        case 32:
            key.gate = uzl_to_mc(MEASUREMENT);
            break;
        case 34:
            key.gate = uzl_to_mah(MEASUREMENT);
            break;
        case 35:
            key.gate = uzl_to_milch(MEASUREMENT);
            break;
        case 41:
            key.gate = mah_to_kmch(MEASUREMENT);
            break;
        case 42:
            key.gate = mah_to_mc(MEASUREMENT);
            break;
        case 43:
            key.gate = mah_to_uzl(MEASUREMENT);
            break;
        case 45:
            key.gate = mah_to_milch(MEASUREMENT);
            break;
        case 51:
            key.gate = milch_to_kmch(MEASUREMENT);
            break;
        case 52:
            key.gate = milch_to_mc(MEASUREMENT);
            break;
        case 53:
            key.gate = milch_to_uzl(MEASUREMENT);
            break;
        case 54:
            key.gate = milch_to_mah(MEASUREMENT);
            break;
        default:
            printf("�� ������� �������� �������������� ��������, "
                   "��� �� ��������� �������������� � ��������, ������� ��� ������������\n");
            break;
    }

    return key.gate;
}
