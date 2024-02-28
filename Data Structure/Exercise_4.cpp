#include <iostream>
#include <string>

using namespace std;

void DisplayStudents (struct ClassScore *p, int num);

struct ClassScore
{
    double score[1000];
    int num;
};

int main()
{
    struct ClassScore one;
    one.num = 0;
    int count_above90 = 0;

    cout << "请输入班级总人数：" << endl;
    cin >> one.num;

    cout << "请输入各同学的成绩：" << endl;
    for (int i = 0; i < one.num; i++)
    {
        cin >> one.score[i];

        if (one.score[i] > 90) {
            count_above90++;
        }
    }

    cout << "成绩超过90分的同学人数为：" << count_above90 << endl;

    struct ClassScore *pa = &one;
    DisplayStudents(pa, (*pa).num);
    cout.flush();

    return 0;
}

void DisplayStudents (struct ClassScore *p, int num)
{
    for (int i= 0; i< num; i++)
        {
            cout << (*p).score[i] << endl;
        }
}
