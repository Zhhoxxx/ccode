#include<stdio.h>
#include<Windows.h>//�ӳٺ���Sleep();
#define M 10
#define N 100
#define time 444
//�˵�
void caiDan()
{
    printf("*****����ģ����*****\n");
    printf("*****1.��ʼ��Ϸ*****\n");
    printf("*****2.������Ϸ*****\n");
}
//�츳_����
void tianFu_shuXing(int xuanZe, char TianFu[M][N], int* zhiHui, int* tiZhi, int* jiaJing, int* meiLi, int z, int t, int j, int m)
{
    printf("��ѡ����츳��:\n");
    printf("%s\n", TianFu[xuanZe - 1]);
    *zhiHui += z;
    *tiZhi += t;
    *jiaJing += j;
    *meiLi += m;
}
//�츳
void tianFu(int* zhiHui, int* tiZhi, int* jiaJing, int* meiLi)
{
    int xuanZe;
    char TianFu[M][N] =
    { "1.������һ(ȫ����+999)","2.�������(ȫ����+999)",
    "3.����ѡ��(����+999)" ,"4.����һ��(����-111)",
    "5.�����м������� - 2��","6.���˶�(�������� +1)",
    "7.ʮ������(���� - 10��","8.���˲�˳(�Ҿ� - 2)",
     "9.ͷ�ŵ�(���� - 2)","10.̥��(���� + 1)" };
    for (int i = 0; i < M; i++)
    {
        printf("%s\n", TianFu[i]);
    }
    printf("��ѡ���츳:\n");
    scanf_s("%d", &xuanZe);
    switch (xuanZe)
    {
    case 1:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, 999, 999, 999, 999);
        break;
    case 2:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, 999, 999, 999, 999);
        break;
    case 3:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, 0, 0, 0, 999);
        break;
    case 4:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, -111, 0, 0, 0);
        break;
    case 5:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, 0, -2, 0, 0);
        break;
    case 6:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, 1, 1, 1, 1);
        break;
    case 7:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, 0, -10, 0, 0);
        break;
    case 8:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, 0, 0, 0, -2);
        break;
    case 9:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, -2, 0, 0, 0);
        break;
    case 10:
        tianFu_shuXing(xuanZe, TianFu, zhiHui, tiZhi, jiaJing, meiLi, +1, 0, 0, 0);
        break;
    default:
        break;
    }
    printf("����:%d ����:%d �Ҿ�:%d ����:%d\n", *zhiHui, *tiZhi, *jiaJing, *meiLi);
}
//��������
void renSheng_liCheng(int* zhiHui, int* tiZhi, int* jiaJing, int* meiLi)
{
    system("cls");
    printf("0�꣬������ˣ�\n");
    if (*zhiHui < 0 || *tiZhi < 0 || *jiaJing < 0 || *meiLi < 0)
    {
        printf("0��,������������ĺܰ���!\n");
    }
    else if (*zhiHui >= 999 || *tiZhi >= 999 || *jiaJing >= 999 || *meiLi >= 999)
    {
        printf("0��,���Ӣ�ţ����ܵ�����Ǵ!\n");
        printf("0��,��������Ȼ������!\n");
    }
    else if (*zhiHui >= 0 && *tiZhi >= 0 && *jiaJing >= 0 && *meiLi >= 0
        && *zhiHui < 999 && *tiZhi < 999 && *jiaJing < 999 && *meiLi < 999)
    {
        //Sleep()Ϊͷ�ļ�#include<windows.h>�е��ӳٺ���;
        if (*zhiHui + *tiZhi + *jiaJing + *meiLi <= 50 && *meiLi > 20)
        {
            printf("1��,��ܿɰ�!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("7��,���е�С˧!\n����Ѿͷ�е�ϲ����!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("18��,��ĳɼ����Ǻ����룬�ǻ�-1\n");
            Sleep(time);
            *zhiHui -= 1;
            printf(".............\n");
            Sleep(time);
            printf("20�꣬�и�����Ҫ������!����+20\n");
            Sleep(time);
            *meiLi += 20;
            printf(".............\n");
            Sleep(time);
            printf("25��,������ʵ����ͷ����+30\n");
            Sleep(time);
            *meiLi += 30;
            printf(".............\n");
            Sleep(time);
            printf("80��,������������ȥ!\n");
            Sleep(time);
        }
        else if (*zhiHui + *tiZhi + *jiaJing + *meiLi <= 50 && *tiZhi > 20)
        {
            printf("1��,���ǿ׳!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("7��,���е�С׳!\n����Ѿͷ�е�ϲ����!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("18��,��ĳɼ����Ǻ����룬�ǻ�-1\n");
            Sleep(time);
            *zhiHui -= 1;
            printf(".............\n");
            Sleep(time);
            printf("20�꣬��Ư��������Ҫ������!����+20\n");
            Sleep(time);
            *tiZhi += 20;
            printf(".............\n");
            Sleep(time);
            printf("25��,������ʵ����ͷ����+30\n");
            *meiLi += 30;
            printf(".............\n");
            Sleep(time);
            printf("80��,������������ȥ!\n");
            Sleep(time);
        }
        else if (*zhiHui + *tiZhi + *jiaJing + *meiLi <= 50 && *jiaJing > 20)
        {
            printf("1��,��ܸ���!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("7��,��ÿ���800�׵Ĵ�������\n����Ѿͷ�е�ϲ����!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("18��,��ĳɼ����Ǻ����룬�ǻ�-1\n");
            Sleep(time);
            *zhiHui -= 1;
            printf(".............\n");
            Sleep(time);
            printf("20�꣬��͵�ʱ��Ư��������Ҫ������!����+20\n");
            Sleep(time);
            *tiZhi += 20;
            printf("21�꣬��̯���ˣ����������Ҫ������ĸ���!\n");
            Sleep(time);
            printf(".............\n");
            printf("25��,��ʵ�������ͷ������+100������+100\n");
            Sleep(time);
            *meiLi += 100;
            *tiZhi += 100;
            printf(".............\n");
            Sleep(time);
            printf("100��,���ڼ�������ȥ!\n");
            Sleep(time);

        }
        else if (*zhiHui + *tiZhi + *jiaJing + *meiLi <= 50 && *zhiHui > 20)
        {
            printf("1��,��ܴ���!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("7��,��մ��׿��ʻ��޴�ѧ��ʿ��ҵ!�ǻ�+100\n����Ѿͷ�е�ϲ����!\n");
            Sleep(time);
            *zhiHui += 100;
            printf(".............\n");
            Sleep(time);
            printf("18��,��ƾ���ǻ�׬��100�ڣ��Ҿ�+666\n");
            Sleep(time);
            *zhiHui += 666;
            printf(".............\n");
            Sleep(time);
            printf("20�꣬��͵�ʱ��Ư��������Ҫ������!����+20\n");
            Sleep(time);
            *tiZhi += 20;
            printf("21�꣬��̯���ˣ����������Ҫ������ĸ���!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("25��,��ʵ�������ͷ������+100������+100\n");
            Sleep(time);
            *meiLi += 100;
            *tiZhi += 100;
            printf(".............\n");
            Sleep(time);
            printf("100��,���ڼ�������ȥ!\n");
            Sleep(time);
        }
        printf("1��,�����ͨ!\n");
        Sleep(time);
        printf(".............\n");
        Sleep(time);
        printf("7��,���е���ͨ!\n����Ѿͷ�е�������!\n");
        Sleep(time);
        printf(".............\n");
        Sleep(time);
        printf("18��,��ĳɼ����Ǻ����룬�ǻ�-1\n");
        *zhiHui -= 1;
        Sleep(time);
        printf(".............\n");
        Sleep(time);
        printf("20�꣬û�и�����Ҫ������!����-20,����-20\n");
        Sleep(time);
        *meiLi -= 20;
        *tiZhi -= 20;
        printf(".............\n");
        Sleep(time);
        printf("25��,������ʵ����ͷ!����-30\n");
        Sleep(time);
        *meiLi -= 30;
        printf(".............\n");
        Sleep(time);
        printf("77��,���ڲ�������ȥ!\n");
        Sleep(time);
    }
    printf("ͳ����------\n");
    Sleep(time);
    printf("����:%d ����:%d �Ҿ�:%d ����:%d\n", *zhiHui, *tiZhi, *jiaJing, *meiLi);
    Sleep(time);
    printf("�����ĵ÷�Ϊ:%d", (*zhiHui + *tiZhi + *jiaJing + *meiLi) / 20);
};
//��Ϸ_����
void youXi_guoCheng(int* zhiHui, int* tiZhi, int* jiaJing, int* meiLi)
{
    printf("\n-----------------------");
    printf("\n-------�츳�б�--------\n");
    tianFu(zhiHui, tiZhi, jiaJing, meiLi);
    Sleep(time);
    renSheng_liCheng(zhiHui, tiZhi, jiaJing, meiLi);
}
int main()
{
    int xuanze;
    while (1)//����Ϸ����һֱ��
    {
        int zhiHui = 0, tiZhi = 0, jiaJing = 0, meiLi = 0;
        //ÿ��ѭ���ٴι��㡣
        caiDan();
        printf("��ѡ��1����2:\n");
        scanf_s("%d", &xuanze);
        switch (xuanze)
        {
        case 1:
            printf("��������20������������ĳ�ʼ���ԣ�\n");
            printf("-----------------------------------\n");
            printf("�밴��˳���������\n");
            printf("-----------------------------------\n");
            printf("˳��Ϊ:�ǻ� ���� �Ҿ� ������\n");
            scanf_s("%d%d%d%d", &zhiHui, &tiZhi, &jiaJing, &meiLi);
            if (zhiHui + tiZhi + jiaJing + meiLi > 20)
            {
                printf("�����˲�Ҫ̫̰��!\n");
                printf("̰�����˻��ܵ����̽�Ϊ0�ĳͷ�!\n");
				zhiHui = 0;
                printf("-----------------------\n");
                printf("�����ڵ�����:%d", zhiHui);
            }
            youXi_guoCheng(&zhiHui, &tiZhi, &jiaJing, &meiLi);
            break;
        case 2:printf("��Ϸ������");
            return 0;
        default:
            printf("������������ԣ�");
            break;
        }
        printf("\n");
    }
}
