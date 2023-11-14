#include <stdio.h>
#include <string.h>
// ���������ṹ��
struct weapon
{
    // codes
    char name[3];
    double physics;
    double fire;
    double water;
    double thunder;
    double affinity;
};
// �������ṹ��
struct monster
{
    // codes
    double pde;
    double drde;
    double fired;
    double waterd;
    double thunderd;
    double iced;
};
// ��������˺��ĺ���
double calc_damage(struct weapon w, struct monster m)
{
    double total_dmg = 0;
    double pp = w.physics * (1 - w.affinity) + w.physics * w.affinity * 1.25 - m.pde;
    if (pp < 0)
        pp = 0;
    double fp = w.fire * (1 - w.affinity) + w.fire * w.affinity * 1.25 - m.fired;
    if (fp < 0)
        fp = 0;
    double wp = w.water * (1 - w.affinity) + w.water * w.affinity * 1.25 - m.waterd;
    if (wp < 0)
        wp = 0;
    double tp = w.thunder * (1 - w.affinity) + w.thunder * w.affinity * 1.25 - m.thunderd;
    if (tp < 0)
        tp = 0;
    total_dmg = tp+fp+wp+pp; 
    return total_dmg;
}
// ����������ʺ������ĺ���
void print_best_weapon(struct weapon weapons[], int n, struct monster m)
{
    double maxDamage=0;
    for(int i=0;i<n;i++){
        if(calc_damage(weapons[i],m)>maxDamage){
            maxDamage =calc_damage(weapons[i],m);
        }
    }
    for(int i=0;i<n;i++){
        if(calc_damage(weapons[i],m)==maxDamage){
            printf("%s\n",weapons[i].name);
        }
    }
}
int main()
{
    // ������������
    struct weapon weapons[3] = {
        {"ps",100, 30, 0, 0, 0.2},
        {"sj",80, 0, 40, 0, 0.15},
        {"td",150, 0, 0, 20, 0.25},
    };
    // �����������
    struct monster monsters[3] = {
        {100,50,200,-50,0,100},
        {100,20,150,-40,25,50},
        {100,12,200,45,67,90},
    };
    // ��ÿ�ֹ��������ʺϵ�����
    for (int i = 0; i < 3; i++)
    {
        print_best_weapon(weapons, 3, monsters[i]);
    }
    return 0;
}