#include <iostream>
#include <vector>
#pragma once

class Branch {

private:
    std::string houseKeeper = "none";   // Имя папки, файла (для задания - имя гнома)
    Branch* parent = nullptr;           // Указатель на родительскую ветку
    std::vector<Branch *> branch;       // Коллекция указателей на дочерние ветки

public:

    Branch(const std::string &houseKeeper, Branch *parent);

    int size();

    const std::string &getHouseKeeper() const;
    const std::vector<Branch *> &getBranch() const;

    Branch* addBranch (Branch *newBranch);
    Branch* getBranchAt(int index);
    Branch* getParent() const;

};
