#include <iostream>
#include "use_lib.h"
#include "Tree.h"
using namespace std;

/**
 * Автоматично создаются 5 деревьев, с ветками + еще ветками
 * Определение количества деревьев и ограничения находится в def_macros
 * Задание реализовано двумя классами для точного разделения смысла методов
 * Branch - класс упрощенно описывает папку (ветку) по аналогии файловой системы
 * Tree - создает дерево, отображает в консоль, осуществляет поиск по имени, вывод результатов
 * Требуется только ввод имени эльфа (файла) для поиска - при положительном результате поиска:
 * отображение всех имен эльфов расположенных на родительской ветке
 */
void solution_1() {

    Tree tree;
    tree.generateTree();

    cout << endl;
    tree.print();
    cout << "\nАвтоматически создано 5 деревьев, выше имена эльфов\n";
    cout << "имена TxBx - располагаются на больших ветках (Big Boss)\n";
    cout << "имена TxBx_Mx - располагаются на средних ветках (Middle)\n\n";

    string name;
    do{
        clearStdin();
        cout << "Введите пожалуйста имя эльфа (или stop): ";

        getline(cin, name);
        if (name != "stop")
            tree.printSearch(name);

    } while (name != "stop");

}
