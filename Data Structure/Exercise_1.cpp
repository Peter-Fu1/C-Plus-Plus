#include <iostream>
#include <string>

using namespace std;

    int main()
{
    int age;
    string name;
    char gender;
    double cal_score, c_score, pe_score;
    cout << "�����������λѧ�������䡢�������Ա�M��ʾ�У�F��ʾŮ���͸ߵ���ѧ��C���Ժ��������Ƶĳɼ���" << endl;
    cin >> age >> name >> gender >> cal_score >> c_score >> pe_score;
    cout << "��ͬѧ����ƽ����Ϊ:";
    double aver = (cal_score + c_score + pe_score)/3;
    cout << aver << endl;
    return 0;
}
