#if(0)
#include<cstdio>
int main()
{
    int a, b; //学校学习小时，课外学习小时
    int max_time = 0;//当前最大学习总时间
    int answer = 0;//答案
    for (int i = 0; i < 7; ++i)
    {
        //读入七组数据并处理
        scanf_s("%d %d", &a, &b);
        //读入第i+1天的学校学习小时与课外学习小时
        if (a + b > max_time && a + b > 8)
        {
            //如果总时间>8并且当前总时间比之前找到的最大总时间大
            answer = i + 1;//更新答案为当前星期
            max_time = a + b;//更新最大值
        }
    }
    printf("%d", answer);//打印答案
    return 0;
}
#endif