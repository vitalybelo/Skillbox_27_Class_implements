#include "use_lib.h"
#include "solution.h"
using namespace std;

int main() {
    setlocaleRus();
    /**
     * Автоматично создаются 5 деревьев, с ветками + еще ветками на них
     * Определение количества деревьев и ограничения находится в def_macros
     * Задание реализовано двумя классами для точного разделения смысла методов
     * Branch - класс упрощенно описывает папку (ветку) по аналогии файловой системы
     * Tree - создает дерево, отображает в консоль, осуществляет поиск по имени, вывод результатов
     * Требуется только ввод имени эльфа (файла) для поиска - при положительном результате поиска:
     * отображение всех имен эльфов расположенных на родительской ветке
     */
    //solution_1();

    /**
     * Решение воспринимает 5 команд:
     * circle - автоматично создается круг и отображаются его параметры
     * square - автоматично создается квадрат и отображаются его параметры
     * triangle - автоматично создается треугольник и отображаются его параметры
     * rectangle - автоматично создается прямоугольник и отображаются его параметры
     * stop - выход
     *
     */
    solution_2();

    /**
     * Автоматично создается компания:
     * Офис руководителя во главе с Боссом и помощником (секретарь)
     * А также 5 отделов, в каждом от 5 до 8 сотрудников, включая шефа
     * Далее вы начинаете приказывать, задавая целые числа как приказы.
     * Но к выполнению подключаются не все сразу сотрудники, а некоторые.
     * И вам снова приходится приказывать целочисленные приказы, пока
     * все не займутся работой.
     *
     */
    //solution_3();

    return 0;
}
