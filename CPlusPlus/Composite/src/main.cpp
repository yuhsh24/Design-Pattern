/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月04日 星期六 15时47分21秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include"ConcreteCompany.h"
#include"HRDepartment.h"
#include"FinanceDepartment.h"

using namespace std;

int main()
{
	shared_ptr<Company> mainCompany = make_shared<ConcreteCompany>("广东总公司");
	shared_ptr<Company> mainHR = make_shared<HRDepartment>("广东总公司人力资源部");
	shared_ptr<Company> mainFin = make_shared<FinanceDepartment>("广东总公司财务部");
	mainCompany->Add(mainHR);
	mainCompany->Add(mainFin);
	shared_ptr<Company> auxCompany = make_shared<ConcreteCompany>("广州分公司");
	shared_ptr<Company> auxHR = make_shared<HRDepartment>("广州分公司人力资源部");
	shared_ptr<Company> auxFin = make_shared<FinanceDepartment>("广州分公司财务部");
	auxCompany->Add(auxHR);
	auxCompany->Add(auxFin);
	mainCompany->Add(auxCompany);
	cout<<"公司基本情况:"<<endl;
	mainCompany->Display(1);
	cout<<"各部门的职能:"<<endl;
	mainCompany->LineOfDuty();

	auxCompany->Remove(auxHR);
    cout<<"调整后的公司基本情况:"<<endl;
	mainCompany->Display(1);
	cout<<"各部门的职能:"<<endl;
	mainCompany->LineOfDuty();
	return 0;
}
