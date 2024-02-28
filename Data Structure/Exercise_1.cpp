#include <iostream>
#include <string>

using namespace std;

    int main()
{
    int age;
    string name;
    char gender;
    double cal_score, c_score, pe_score;
    cout << "请依次输入该位学生的年龄、姓名、性别（M表示男，F表示女）和高等数学、C语言和体育三科的成绩：" << endl;
    cin >> age >> name >> gender >> cal_score >> c_score >> pe_score;
    cout << "该同学三科平均分为:";
    double aver = (cal_score + c_score + pe_score)/3;
    cout << aver << endl;
    return 0;
}
