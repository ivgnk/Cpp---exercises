/*
Bouncing Balls
https://www.codewars.com/kata/5544c7a5cb454edb3c000047/train/cpp
 Ребенок играет с мячом на n-м этаже высотного здания.
 Высота этого этажа над уровнем земли h известна.
 Он выбрасывает мяч из окна.
 Мяч отскакивает (например) на две трети своей высоты (отскок 0,66).
 Его мать смотрит в окно на высоте 1,5 метра от земли.
 Сколько раз мать увидит, как мяч пролетает перед ее окном
 (в том числе когда он падает и подпрыгивает)?
 Для проведения эксперимента необходимо соблюдение трех условий:
 Плавающий параметр «h» в метрах должен быть больше 0.
 Плавающий параметр «отскок» должен быть больше 0 и меньше 1.
 Плавающий параметр «окно» должен быть меньше h.
 Если все три условия выше выполнены,
 верните положительное целое число, в противном случае верните -1.
 Примечание. Мяч можно увидеть только в том случае,
 если высота отскакивающего мяча строго больше параметра окна.
 */


#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
        if ((h<=0)||(bounce<=0)||(bounce>=1)||(window>=h)) return -1;
        int n = 1;
        while (h>window){
            h=h*bounce;
            if (h>window) n=n+2;
        }
        return n;
    }
};


int main() {
    system("cls");
    cout << "Results" << endl;
    string s;
}
