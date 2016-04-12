#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "Headers/total.h" /* ������ '../' - escape-������ - ������������ ��� �������� �� ���� ������� ����;
                                ���� ������ ������������ ������� ���, �� ������� ������� ����� ���������; */

int main()
{
    setlocale(LC_ALL, "");

    MainParameters head;
    head.version = 1.54;
    head.like_to_continue = 1;

    printf("Unit Converter. ������ %.2f \n\n", head.version);

    printf("��������!\n"
           "� ��������� ����� ���� ��������� �������� � �������� 3, 17. \n\n");

    while(head.like_to_continue == 1) {
        printf("��������, � ��������� ������ ���� �� ������ �� ��������: \n"
               "1 - �����;\t\t\t11 - ���������; \n"
               "2 - ��������;\t\t\t12 - ���������������; \n"
               "3 - ������;\t\t\t13 - ����; \n"
               "4 - �����;\t\t\t14 - ���� ����; \n"
               "5 - �����;\t\t\t15 - ��������; \n"
               "6 - ���������� ��������;\t16 - �������������; \n"
               "7 - �����;\t\t\t17 - �����������; \n"
               "8 - ��������;\t\t\t18 - ����; \n"
               "9 - �����;\t\t\t19 - �������; \n"
               "10 - �������;\t\t\t20 - �������; \n\t");
        scanf("%d", &head.measurement_id);

        while(head.measurement_id >= 21) {
            printf("\n��� �������� ���� �� ������. �������� ���������� �����: \n\t");
            scanf("%d", &head.measurement_id);
        }

        switch(head.measurement_id) {
            case 1:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 2:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 3:
                printf("������� �����, ������� �� ������ ���� ���������. \n"
                       "� �������� �����-����������� ��� ������������ ����� ����������� ������ ','.\n\t");
                head.VOLUME = parsing(head.MEASUREMENT);
                head.result = selectionswitchData(head.VOLUME);
                break;
            case 4:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 5:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 6:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 7:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 8:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 9:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 10:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 11:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 12:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 13:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 14:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 15:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 16:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 17:
                printf("������� �����, ������� �� ������ ���� ���������. \n"
                       "� �������� �����-����������� ��� ������������ ����� ����������� ������ ','.\n\t");
                head.VOLUME = parsing(head.MEASUREMENT);
                head.result = selectionswitchTemperature(head.VOLUME);
                break;
            case 18:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 19:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 20:
                fprintf(stderr, "������ �� ����������\n");
                system("pause");
                exit(EXIT_FAILURE);
            default:
                fprintf(stderr, "�� ��������� ������� ��� ��������, �������� �� ����������. ��������� ����� ���������;");
                break;
        }

        printf("��������� ���������������: %.6lf\n", head.result);

        printf("��� ��������?\n");
        printf("������ ����������?\n");
        scanf("%d", &head.like_to_continue);
        printf("\n");
    }

    system("pause");
    exit(EXIT_SUCCESS);
}
