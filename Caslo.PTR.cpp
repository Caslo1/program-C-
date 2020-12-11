#include <iostream>
#include <string>
#include <memory>

using namespace std;

void lvl()
{
    auto_ptr<int> plvl(new int(100));

    int* Inlvl = plvl.get();
    
    cout << "Caslo" << endl;

    cout << *Inlvl << endl;

};

void NewLvl(const int &var)
{
    unique_ptr<int> current(new int(var));

    cout << "Hagrit " <<*current << endl;
}

void LvlUp(const int &var)
{
    shared_ptr<int> lvlup(new int(var));
    shared_ptr<int> currLvl(lvlup);

    cout << "Thift" << endl;
    cout << *currLvl << endl;
}

int main()
{
    int lvls;

    lvl();

    cout << "Galjin" << endl;
    auto_ptr<int> lvl2(new int(21));
    cout << *lvl2 << endl;

    cin >> lvls;

    LvlUp(lvls);

    NewLvl(21);
}