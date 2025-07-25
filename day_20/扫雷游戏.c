#include <stdio.h>


void menu();//菜单

void menu()
{
    printf("****************************\n");
    printf("*****1  开始游戏*************\n");
    printf("*****0  退出游戏*************\n");
    printf("****************************\n");    
}
int main()
{
    int input = 0;

    do
    {
        printf("请输入你的选择：\n");
        menu();
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("开始游戏\n");
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入错误,重新输入\n");
                break;

        }







    }while(input);







}