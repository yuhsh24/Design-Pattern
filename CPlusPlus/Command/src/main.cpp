/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 09时20分13秒
 ************************************************************************/

#include<iostream>
#include"MakeMuttonCommand.h"
#include"MakeChickenWingCommand.h"
#include"Waiter.h"
#include"RoastCook.h"
#include<memory>
using namespace std;

int main()
{
	shared_ptr<RoastCook> cooker=make_shared<RoastCook>();
	shared_ptr<Command> muttonCommand=make_shared<MakeMuttonCommand>(cooker);
	shared_ptr<Command> chickenWingCommand=make_shared<MakeChickenWingCommand>(cooker);
	shared_ptr<Waiter> waiter=make_shared<Waiter>();

	waiter->SetCommand("顾客1",muttonCommand);
	waiter->SetCommand("顾客1",chickenWingCommand);
	cout<<"顾客1："<<endl;
	waiter->Notify("顾客1");
	waiter->SetCommand("顾客2",chickenWingCommand);
	waiter->SetCommand("顾客2",muttonCommand);
	waiter->CancleCommand("顾客3",chickenWingCommand);
	waiter->CancleCommand("顾客2",chickenWingCommand);
	waiter->Notify("顾客3");
	cout<<"顾客2："<<endl;
	waiter->Notify("顾客2");
	return 0;
}
