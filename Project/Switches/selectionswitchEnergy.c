#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* ������ '../' - escape-������ - ������������ ��� �������� �� ���� ������� ����;
                                ���� ������ ������������ ������� ���, �� ������� ������� ����� ���������; */

double selectionswitchEnergy(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
           "1 - ������;\n"
           "2 - ��������-���;\n"
           "3 - ��������������;\n"
           "4 - ��������;\n"
           "5 - ���� � ��������� �����������;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("�������� ��������, � ������� �� ������ �������������� ���� ��������.\n"
           "1 - ������;\n"
           "2 - ��������-���;\n"
           "3 - ��������������;\n"
           "4 - ��������;\n"
           "5 - ���� � ��������� �����������;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������, \n��� �� ��������� �������������� "
                "���� � �� �� ��������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = joule_to_kvatch(MEASUREMENT);
            break;
        case 13:
            key.gate = joule_to_electronvolt(MEASUREMENT);
            break;
        case 14:
            key.gate = joule_to_kall(MEASUREMENT);
            break;
        case 15:
            key.gate = joule_to_tnt(MEASUREMENT);
            break;
        case 21:
            key.gate = kvatch_to_joule(MEASUREMENT);
            break;
        case 23:
            key.gate = kvatch_to_electronvolt(MEASUREMENT);
            break;
        case 24:
            key.gate = kvatch_to_kall(MEASUREMENT);
            break;
        case 25:
            key.gate = kvatch_to_tnt(MEASUREMENT);
            break;
        case 31:
            key.gate = electronvolt_to_joule(MEASUREMENT);
            break;
        case 32:
            key.gate = electronvolt_to_kvatch(MEASUREMENT);
            break;
        case 34:
            key.gate = electronvolt_to_kall(MEASUREMENT);
            break;
        case 35:
            key.gate = electronvolt_to_tnt(MEASUREMENT);
            break;
        case 41:
            key.gate = kall_to_joule(MEASUREMENT);
            break;
        case 42:
            key.gate = kall_to_kvatch(MEASUREMENT);
            break;
        case 43:
            key.gate = kall_to_electronvolt(MEASUREMENT);
            break;
        case 45:
            key.gate = kall_to_tnt(MEASUREMENT);
            break;
        case 51:
            key.gate = tnt_to_joule(MEASUREMENT);
            break;
        case 52:
            key.gate = tnt_to_kvatch(MEASUREMENT);
            break;
        case 53:
            key.gate = tnt_to_electronvolt(MEASUREMENT);
            break;
        case 54:
            key.gate = tnt_to_kall(MEASUREMENT);
            break;
        default:
            printf("�� ������� �������� �������������� ��������, "
                   "��� �� ��������� �������������� � ��������, ������� ��� ������������\n");
            break;
    }

    return key.gate;
}
