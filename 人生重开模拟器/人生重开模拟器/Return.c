#include<stdio.h>
#include<Windows.h>//延迟函数Sleep();
#define M 10
#define N 100
#define time 444
//菜单
void caiDan()
{
    printf("*****人生模拟器*****\n");
    printf("*****1.开始游戏*****\n");
    printf("*****2.结束游戏*****\n");
}
//天赋_属性
void tianFu_shuXing(int xuanZe, char TianFu[M][N], int* zhiHui, int* tiZhi, int* jiaJing, int* meiLi, int z, int t, int j, int m)
{
    printf("你选择的天赋是:\n");
    printf("%s\n", TianFu[xuanZe - 1]);
    *zhiHui += z;
    *tiZhi += t;
    *jiaJing += j;
    *meiLi += m;
}
//天赋
void tianFu(int* zhiHui, int* tiZhi, int* jiaJing, int* meiLi)
{
    int xuanZe;
    char TianFu[M][N] =
    { "1.万中无一(全属性+999)","2.绝世奇才(全属性+999)",
    "3.气质选手(魅力+999)" ,"4.蠢货一个(智力-111)",
    "5.天生残疾（体质 - 2）","6.幸运儿(所有属性 +1)",
    "7.十死无生(体质 - 10）","8.家运不顺(家境 - 2)",
     "9.头着地(智力 - 2)","10.胎教(智力 + 1)" };
    for (int i = 0; i < M; i++)
    {
        printf("%s\n", TianFu[i]);
    }
    printf("请选择天赋:\n");
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
    printf("智力:%d 体质:%d 家境:%d 魅力:%d\n", *zhiHui, *tiZhi, *jiaJing, *meiLi);
}
//人生历程
void renSheng_liCheng(int* zhiHui, int* tiZhi, int* jiaJing, int* meiLi)
{
    system("cls");
    printf("0岁，你出生了！\n");
    if (*zhiHui < 0 || *tiZhi < 0 || *jiaJing < 0 || *meiLi < 0)
    {
        printf("0岁,大聪明，你死的很安详!\n");
    }
    else if (*zhiHui >= 999 || *tiZhi >= 999 || *jiaJing >= 999 || *meiLi >= 999)
    {
        printf("0岁,天妒英才，你受到了天谴!\n");
        printf("0岁,你理所当然的死了!\n");
    }
    else if (*zhiHui >= 0 && *tiZhi >= 0 && *jiaJing >= 0 && *meiLi >= 0
        && *zhiHui < 999 && *tiZhi < 999 && *jiaJing < 999 && *meiLi < 999)
    {
        //Sleep()为头文件#include<windows.h>中的延迟函数;
        if (*zhiHui + *tiZhi + *jiaJing + *meiLi <= 50 && *meiLi > 20)
        {
            printf("1岁,你很可爱!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("7岁,你有点小帅!\n隔壁丫头有点喜欢你!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("18岁,你的成绩不是很理想，智慧-1\n");
            Sleep(time);
            *zhiHui -= 1;
            printf(".............\n");
            Sleep(time);
            printf("20岁，有富婆想要包养你!魅力+20\n");
            Sleep(time);
            *meiLi += 20;
            printf(".............\n");
            Sleep(time);
            printf("25岁,你向现实低了头魅力+30\n");
            Sleep(time);
            *meiLi += 30;
            printf(".............\n");
            Sleep(time);
            printf("80岁,你在忧郁中死去!\n");
            Sleep(time);
        }
        else if (*zhiHui + *tiZhi + *jiaJing + *meiLi <= 50 && *tiZhi > 20)
        {
            printf("1岁,你很强壮!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("7岁,你有点小壮!\n隔壁丫头有点喜欢你!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("18岁,你的成绩不是很理想，智慧-1\n");
            Sleep(time);
            *zhiHui -= 1;
            printf(".............\n");
            Sleep(time);
            printf("20岁，有漂亮富婆想要包养你!体质+20\n");
            Sleep(time);
            *tiZhi += 20;
            printf(".............\n");
            Sleep(time);
            printf("25岁,你向现实低了头魅力+30\n");
            *meiLi += 30;
            printf(".............\n");
            Sleep(time);
            printf("80岁,你在忧郁中死去!\n");
            Sleep(time);
        }
        else if (*zhiHui + *tiZhi + *jiaJing + *meiLi <= 50 && *jiaJing > 20)
        {
            printf("1岁,你很富有!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("7岁,你每天从800米的大床上醒来\n隔壁丫头有点喜欢你!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("18岁,你的成绩不是很理想，智慧-1\n");
            Sleep(time);
            *zhiHui -= 1;
            printf(".............\n");
            Sleep(time);
            printf("20岁，你低调时有漂亮富婆想要包养你!体质+20\n");
            Sleep(time);
            *tiZhi += 20;
            printf("21岁，你摊牌了，你包养了想要包养你的富婆!\n");
            Sleep(time);
            printf(".............\n");
            printf("25岁,现实向你低了头！魅力+100，体质+100\n");
            Sleep(time);
            *meiLi += 100;
            *tiZhi += 100;
            printf(".............\n");
            Sleep(time);
            printf("100岁,你在极乐中死去!\n");
            Sleep(time);

        }
        else if (*zhiHui + *tiZhi + *jiaJing + *meiLi <= 50 && *zhiHui > 20)
        {
            printf("1岁,你很聪明!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("7岁,你刚从米开朗基罗大学博士毕业!智慧+100\n隔壁丫头有点喜欢你!\n");
            Sleep(time);
            *zhiHui += 100;
            printf(".............\n");
            Sleep(time);
            printf("18岁,你凭借智慧赚了100亿，家境+666\n");
            Sleep(time);
            *zhiHui += 666;
            printf(".............\n");
            Sleep(time);
            printf("20岁，你低调时有漂亮富婆想要包养你!体质+20\n");
            Sleep(time);
            *tiZhi += 20;
            printf("21岁，你摊牌了，你包养了想要包养你的富婆!\n");
            Sleep(time);
            printf(".............\n");
            Sleep(time);
            printf("25岁,现实向你低了头！魅力+100，体质+100\n");
            Sleep(time);
            *meiLi += 100;
            *tiZhi += 100;
            printf(".............\n");
            Sleep(time);
            printf("100岁,你在极乐中死去!\n");
            Sleep(time);
        }
        printf("1岁,你很普通!\n");
        Sleep(time);
        printf(".............\n");
        Sleep(time);
        printf("7岁,你有点普通!\n隔壁丫头有点讨厌你!\n");
        Sleep(time);
        printf(".............\n");
        Sleep(time);
        printf("18岁,你的成绩不是很理想，智慧-1\n");
        *zhiHui -= 1;
        Sleep(time);
        printf(".............\n");
        Sleep(time);
        printf("20岁，没有富婆想要包养你!魅力-20,体质-20\n");
        Sleep(time);
        *meiLi -= 20;
        *tiZhi -= 20;
        printf(".............\n");
        Sleep(time);
        printf("25岁,你向现实低了头!魅力-30\n");
        Sleep(time);
        *meiLi -= 30;
        printf(".............\n");
        Sleep(time);
        printf("77岁,你在不甘中死去!\n");
        Sleep(time);
    }
    printf("统计中------\n");
    Sleep(time);
    printf("智力:%d 体质:%d 家境:%d 魅力:%d\n", *zhiHui, *tiZhi, *jiaJing, *meiLi);
    Sleep(time);
    printf("你最后的得分为:%d", (*zhiHui + *tiZhi + *jiaJing + *meiLi) / 20);
};
//游戏_过程
void youXi_guoCheng(int* zhiHui, int* tiZhi, int* jiaJing, int* meiLi)
{
    printf("\n-----------------------");
    printf("\n-------天赋列表--------\n");
    tianFu(zhiHui, tiZhi, jiaJing, meiLi);
    Sleep(time);
    renSheng_liCheng(zhiHui, tiZhi, jiaJing, meiLi);
}
int main()
{
    int xuanze;
    while (1)//让游戏可以一直玩
    {
        int zhiHui = 0, tiZhi = 0, jiaJing = 0, meiLi = 0;
        //每次循环再次归零。
        caiDan();
        printf("请选择1或者2:\n");
        scanf_s("%d", &xuanze);
        switch (xuanze)
        {
        case 1:
            printf("现在你有20点可以随机分配的初始属性！\n");
            printf("-----------------------------------\n");
            printf("请按照顺序分配属性\n");
            printf("-----------------------------------\n");
            printf("顺序为:智慧 体质 家境 魅力！\n");
            scanf_s("%d%d%d%d", &zhiHui, &tiZhi, &jiaJing, &meiLi);
            if (zhiHui + tiZhi + jiaJing + meiLi > 20)
            {
                printf("年轻人不要太贪婪!\n");
                printf("贪婪的人会受到智商降为0的惩罚!\n");
				zhiHui = 0;
                printf("-----------------------\n");
                printf("你现在的智力:%d", zhiHui);
            }
            youXi_guoCheng(&zhiHui, &tiZhi, &jiaJing, &meiLi);
            break;
        case 2:printf("游戏结束！");
            return 0;
        default:
            printf("输入错误！请重试！");
            break;
        }
        printf("\n");
    }
}
